#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<ctime>
using namespace std;

class xiaoxiaogame
{
public:
    //构造函数中对数组和变量的初始化
    xiaoxiaogame(int row1, int col1);
    //显示
    void display();
    //判断一个坐标所在的位置能不能消
    bool isvalid(int x, int y);
    //判断游戏有没有结束
    bool isgameover();
    //用深度遍历去执行消除功能
    void remove(int x, int y, int target);
    //消除方块后剩余方块的摆放位置的调整
    void adjustment();
    //执行游戏
    void playgame();
private:
    //存放游戏开心消消乐的二维数组
    vector<vector<int> >nums;
    //记录存在的状态
    vector<vector<bool> >state;
    //记录分数
    int score;
    //连在一起的相同数字的个数
    int cnt;
    //开心消消乐的行
    int row;
    //开心消消乐的列
    int col;
};
xiaoxiaogame::xiaoxiaogame(int row1, int col1)
{
    row = row1;
    col = col1;
    score = 0;
    cnt = 0;
    srand(time(0));
    vector<vector<int> >tmp(row1,vector<int>(col1,0));
    vector<vector<bool> >temp(row1, vector<bool>(col1, false));
    state = temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tmp[i][j] = rand() % 3;
        }
    }
    nums = tmp;
    display();
}
void xiaoxiaogame::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (!state[i][j])
                cout << nums[i][j] << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << "your score is :" << score << "     输入：行数-1 空格 列数-1 刚编的，未测试，可能有bug" << endl;
}
bool xiaoxiaogame::isvalid(int x, int y)
{
    if (x < 0 || x >= row || y < 0 || y >= col || state[x][y])return false;
    return true;
}
bool xiaoxiaogame::isgameover()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int target = nums[i][j];
            int x = i;
            int y = j;
            if (!isvalid(i, j))return false;
            if ((isvalid(x + 1, y) && nums[x + 1][y] == target) || (isvalid(x - 1, y) && nums[x - 1][y] == target) || \
                (isvalid(x, y + 1) && nums[x][y + 1] == target) || (isvalid(x, y - 1) && nums[x][y - 1] == target))
                return false;
        }
    }
    return true;
}
void xiaoxiaogame::remove(int x, int y, int target)
{
    if (!isvalid(x, y))return;
    if (nums[x][y] != target)return;
    state[x][y] = true;
    cnt++;
    remove(x + 1, y, target);
    remove(x - 1, y, target);
    remove(x, y + 1, target);
    remove(x, y - 1, target);
}
void xiaoxiaogame::adjustment()
{
    for (int j = 0; j < col; j++)
    {
        vector<int>tmp;
        for (int i = row - 1; i >= 0; --i)
        {
            if (!state[i][j])tmp.push_back(nums[i][j]);

        }
        int r = row - 1;
        for (int i = 0; i < tmp.size(); i++)
        {
            nums[r][j] = tmp[i];
            state[r][j] = false;
            r--;
        }
        for (; r >= 0; r--)
        {
            state[r][j] = true;
        }
    }
}
void xiaoxiaogame::playgame()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (!isvalid(x, y))continue;
        int target = nums[x][y];
        cnt = 0;
        if ((isvalid(x + 1, y) && nums[x + 1][y] == target) || (isvalid(x - 1, y) && nums[x - 1][y] == target) || \
            (isvalid(x, y + 1) && nums[x][y + 1] == target) || (isvalid(x, y - 1) && nums[x][y - 1] == target))
            remove(x, y, target);
        score += target*cnt;
        adjustment();
        display();
        if (isgameover())
        {
            cout << "gameover" << endl;
            break;
        }
    }
}
int main()
{
    xiaoxiaogame t(10, 10);
    t.playgame();
    cin.get();
    return 0;
}

#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<ctime>
using namespace std;

class xiaoxiaogame
{
public:
    //���캯���ж�����ͱ����ĳ�ʼ��
    xiaoxiaogame(int row1, int col1);
    //��ʾ
    void display();
    //�ж�һ���������ڵ�λ���ܲ�����
    bool isvalid(int x, int y);
    //�ж���Ϸ��û�н���
    bool isgameover();
    //����ȱ���ȥִ����������
    void remove(int x, int y, int target);
    //���������ʣ�෽��İڷ�λ�õĵ���
    void adjustment();
    //ִ����Ϸ
    void playgame();
private:
    //�����Ϸ���������ֵĶ�ά����
    vector<vector<int> >nums;
    //��¼���ڵ�״̬
    vector<vector<bool> >state;
    //��¼����
    int score;
    //����һ�����ͬ���ֵĸ���
    int cnt;
    //���������ֵ���
    int row;
    //���������ֵ���
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
    cout << "your score is :" << score << "     ���룺����-1 �ո� ����-1 �ձ�ģ�δ���ԣ�������bug" << endl;
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

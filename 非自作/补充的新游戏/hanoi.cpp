#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const int COLUMN[4] = { 0, 2, 5, 8 };
const int DISC_CNT_MAX = 10;
const int ROW_OP_CNT = 2, COL_OP_CNT = 16;
const int ROW_MESSAGE = 3, COL_MESSAGE = 16;
const int ROW_HELP = 15, COL_HELP = 1;
const int ROW_MAX = 30, COL_MAX = 120;
const int BLUE = 1;
const int GREEN = 2;
const int CYAN = 3;
const int AQUA = 3;
const int RED = 4;
const int PURPLE = 5;
const int YELLOW = 6;
const int WHITE = 7;

int n;
stack<int> rod[4];
int sz[4] = { 0 };
int pos1, pos2;
int key;
bool prev_key_is_esc;
int op_cnt;
bool is_moving;
int moved_disc;

template <typename T>
inline T read() {
    T x = 0;
    T multiplier = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') {
            multiplier = -1;
        }
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 3) + (x << 1) + (ch & 15);
        ch = getchar();
    }
    return x * multiplier;
}

void set_caret_pos(int row = 1, int col = 1) {
    COORD pos;
    pos.X = col - 1;
    pos.Y = row - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int get_caret_row() {
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.dwCursorPosition.Y + 1;
}

int get_caret_col() {
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.dwCursorPosition.X + 1;
}

pair<int, int> get_caret_pos() {
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return make_pair(info.dwCursorPosition.Y + 1, info.dwCursorPosition.X + 1);
}

void set_foreground_color(int x, bool intensity = false) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                            x | (intensity << 3));
}

void set_cursor_visibility(bool visibility = true) {
    CONSOLE_CURSOR_INFO cc_info;
    cc_info.bVisible = visibility;
    cc_info.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cc_info);
}

void disp_init_state(int n) {
    for (int i = 1; i <= n; i++) {
        set_caret_pos(i, COLUMN[1]);
        printf("%d", i);
    }
    for (int i = 1; i <= 3; i++) {
        set_caret_pos(n + 1, COLUMN[i] - 1);
        printf("---");
        set_caret_pos(n + 2, COLUMN[i]);
        putchar('A' + i - 1);
    }

    set_caret_pos(ROW_OP_CNT, COL_OP_CNT);
    printf("0");
}

void disp_help() {
    set_caret_pos(ROW_HELP, COL_HELP);
    printf("How to play:\n"
           "The numbers indicate the size of discs.\n"
           "Discs on each rod must be stacked in ascending order of size.\n"
           "Use left and right arrow keys to select rod.\n"
           "Press Enter to pick up the top disc on selected rod.\n"
           "Then use left and right keys to move.\n"
           "Press ESC to cancel current move.\n"
           "Press Enter again to drop the disc on current rod.\n"
           "Press R to restart.\n"
           "Press ESC twice to quit.\n");
}

void disp_pos(int pos1, int pos2 = 0) {
    for (int i = 1; i <= 3; i++) {
        set_caret_pos(n + 3, COLUMN[i]);
        printf(" ");
    }
    set_caret_pos(n + 3, COLUMN[pos1]);
    printf("^");
    if (pos2) {
        set_caret_pos(n + 3, COLUMN[pos2]);
        set_foreground_color(GREEN, true);
        printf("^");
        set_foreground_color(WHITE);
    }
}

void clear() {
    for (int i = 1; i <= DISC_CNT_MAX + 3; i++) {
        for (int j = 1; j <= COL_MAX; j++) {
            set_caret_pos(i, j);
            putchar(' ');
        }
    }
}

void moving_disc(int pos1, int pos2) {
    int x = rod[pos1].top();

    set_caret_pos(n + 1 - sz[pos1], COLUMN[pos1]);
    set_foreground_color(RED, true);
    printf("%d", x);
    set_foreground_color(WHITE);

    set_caret_pos(n - sz[pos2] + (pos1 == pos2), COLUMN[pos2]);
    set_foreground_color(GREEN, true);
    printf("%d", x);
    set_foreground_color(WHITE);
}

void update_discs(int pos1, int pos2) {
    int x = rod[pos1].top();

    set_caret_pos(n + 1 - sz[pos1], COLUMN[pos1]);
    printf("  ");
    rod[pos1].pop();
    sz[pos1]--;

    rod[pos2].push(x);
    sz[pos2]++;
    set_caret_pos(n + 1 - sz[pos2], COLUMN[pos2]);
    printf("%d", x);
}

void remove_temp_disc(int pos) {
    set_caret_pos(n - sz[pos], COLUMN[pos]);
    printf("  ");
}

void update_op_cnt() {
    op_cnt++;
    set_caret_pos(ROW_OP_CNT, COL_OP_CNT);
    printf("%d", op_cnt);
}

int main() {
    printf("Enter the number of discs (not exceeding %d): ", DISC_CNT_MAX);
    n = min(read<int>(), DISC_CNT_MAX);

    set_cursor_visibility(false);
    disp_help();

    for (; n <= DISC_CNT_MAX; n++) {
        clear();

        for (int i = 1; i <= 3; i++) {
            while (!rod[i].empty()) {
                rod[i].pop();
            }
            sz[i] = 0;
        }

        for (int i = n; i >= 1; i--) {
            rod[1].push(i);
        }
        sz[1] = n;

        is_moving = false;
        pos1 = 1;
        op_cnt = 0;
        prev_key_is_esc = false;

        disp_init_state(n);
        disp_pos(1);
        while (true) {
            if (sz[3] == n) {
                set_caret_pos(ROW_MESSAGE, COL_MESSAGE);
                if (op_cnt != (1 << n) - 1) {
                    printf("Congratulations! You completed the puzzle in %d "
                           "moves.",
                           op_cnt);
                } else {
                    printf("Congratulations! You completed the puzzle in a "
                           "minimum number of moves.");
                }
                Sleep(2000);
                break;
            }

            key = getch();
            if (key == 224) {
                key = getch();
                if (!is_moving) {
                    if (key == 75) { // Left arrow key
                        pos1 = (pos1 + 1) % 3 + 1;
                    } else if (key == 77) { // Right arrow key
                        pos1 = pos1 % 3 + 1;
                    }
                    disp_pos(pos1);
                } else {
                    remove_temp_disc(pos2);
                    if (key == 75) { // Left arrow key
                        pos2 = (pos2 + 1) % 3 + 1;
                    } else if (key == 77) { // Right arrow key
                        pos2 = pos2 % 3 + 1;
                    }
                    moving_disc(pos1, pos2);
                    disp_pos(pos1, pos2);
                }
            } else if (key == 13) { // Enter key
                if (!is_moving) {
                    if (rod[pos1].empty()) {
                        continue;
                    }
                    is_moving = true;
                    moved_disc = rod[pos1].top();
                    pos2 = pos1;
                    moving_disc(pos1, pos2);
                    disp_pos(pos1, pos2);
                } else {
                    if (!rod[pos2].empty() && rod[pos2].top() < moved_disc) {
                        set_caret_pos(ROW_MESSAGE, COL_MESSAGE);
                        printf("Error: discs not stacked in ascending order on "
                               "current rod.");
                        continue;
                    }
                    is_moving = false;
                    update_discs(pos1, pos2);
                    update_op_cnt();
                    pos1 = pos2;
                    disp_pos(pos1);
                }
            } else if (key == 27) { // Escape key
                if (prev_key_is_esc) { // Double ESC
                    break;
                }
                if (is_moving) {
                    is_moving = false;
                    remove_temp_disc(pos2);
                    update_discs(pos1, pos1);
                    disp_pos(pos1);
                } else {
                    prev_key_is_esc = true;
                }
            } else if (key == 'R' || key == 'r') {
                n--;
                break;
            }
        }

        if (prev_key_is_esc && key == 27) { // Double ESC
            break;
        }
    }

    set_caret_pos(ROW_MAX - 1, 1);

    return 0;
}

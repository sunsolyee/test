#include <ncurses.h>
using namespace std;

int main(int argc, char** argv) {
    initscr();
    int height, width, start_y, start_x;
    height = 100;
    width = 200;
    start_y = start_x = 10;

    WINDOW* win = newwin(height, width, start_y ,start_x);
    refresh();

    box(win, 0, 0);
    wrefresh(win);

    int c = getch();

    endwin();

    return 0;
}
#include <ncurses>
#include "src/Board.hpp"

#define BOARD_DIM 20
#define BOARD_ROWS BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2.5



int main(int argc, char** argv)
{
    initscr();
    refresh();

    int xMAX, yMAX;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW* board_win = newwin(BOARD_ROW, BOARD_COL, (yMax / 2) - (BOARD_ROW / 2), (xMax / 2) - BOARD_COLS);
    getch();
    endwin();

    return 0;
}

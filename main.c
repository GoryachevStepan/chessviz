#include <stdio.h>
#include <string.h>

const int N = 10;

void init_board(char board[N][N])
{
    board[8][1] = 'R';
    board[8][8] = 'R';
    board[8][2] = 'N';
    board[8][7] = 'N';
    board[8][3] = 'B';
    board[8][6] = 'B';
    board[8][4] = 'Q';
    board[8][5] = 'K';
    for (int i = 1; i <= 8; i++)
        board[7][i] = 'P';
    board[1][1] = 'r';
    board[1][8] = 'r';
    board[1][2] = 'n';
    board[1][7] = 'n';
    board[1][3] = 'b';
    board[1][6] = 'b';
    board[1][4] = 'q';
    board[1][5] = 'k';

    board[9][0] = ' ';
    board[9][1] = 'a';
    board[9][2] = 'b';
    board[9][3] = 'c';
    board[9][4] = 'd';
    board[9][5] = 'e';
    board[9][6] = 'f';
    board[9][7] = 'g';
    board[9][8] = 'h';

    for (int i = 1; i <= 8; i++)
        board[i][0] = '0' + i;

    for (int i = 1; i <= 8; i++)
        board[2][i] = 'p';
    for (int i = 3; i <= 6; i++)
        for (int j = 1; j <= 8; j++)
            board[i][j] = ' ';
}

void print_board(char board[N][N])
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 8; j++)
            printf("%c", board[i][j]);
        printf("\n");
    }
}

int make_move(char move[20], char board[N][N])
{
    char num[5] = {0};
    char white[8] = {0};
    char black[8] = {0};
    int i = 0,j;
    while (i < 4 && move[i] != '.')
        num[i++] = move[i];
    if (i == 5) {
        printf("String have wrong format!");
        return 1;
    }
    num[i] = '.';
    while (move[++i] == ' ') {}

    for (j = 0; move[i] != ' '; j++, i++)
        white[j] = move[i];
    while (move[++i] == ' ') {
    }
    for (int j = 0; move[i] != ' '; j++, i++)
        black[j] = move[i];

	puts(num);
    puts(white);
	puts(black);

    return 0;
}

int main()
{
    //char move[20] = "1. e2-e4 e7-e5 ";
    char board[N][N];
    init_board(board);
    print_board(board);
    //make_move(move, board);
}
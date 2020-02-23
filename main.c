#include <stdio.h>

const int N = 9;

int main()
{
    char a[N][N];
    a[8][1] = 'R';
	a[8][2] = 'N';
	a[8][3] = 'B';
	a[8][4] = 'Q';
	a[8][5] = 'K';
	a[8][6] = 'B';
	a[8][7] = 'N';
	a[8][8] = 'R';
	for (int i = 1;i <= 8;i++)
		a[7][i] = 'P';
	a[1][1] = 'r';
	a[1][2] = 'n';
	a[1][3] = 'b';
	a[1][4] = 'q';
	a[1][5] = 'k';
	a[1][6] = 'b';
	a[1][7] = 'n';
	a[1][8] = 'r';
	for (int i = 1;i <= 8;i++)
		a[2][i] = 'p';
    /*for (int i = 3;i < 7; i++)
		for (int j = 1;j <= 8;j++)
			if ((i % 2 == 1 && j % 2 == 1) || i % 2 == 0 && j % 2 == 0)
				a[i][j] = "*";
				*/
	for (int i = 1;i <= 2;i++)
	{
	    for (int j = 1;j <= 8; j++)
		    printf("%c",a[i][j]);
		printf("\n");
	}
	for (int i = 3;i <= 6;i++)
	{
	    for (int j = 1;j <= 8; j++)
		    printf("*");
		printf("\n");
	}
	for (int i = 7;i <= 8;i++)
	{
	    for (int j = 1;j <= 8; j++)
		    printf("%c",a[i][j]);
		printf("\n");
	}
}

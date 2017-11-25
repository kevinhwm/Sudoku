#include <stdio.h>
#include "sudoku.h"

void init()
{
	for (int i=0; i<81; ++i){
		for (int j=0; j<9; ++j){
			g_option[i][j] = j+1;
	} }
}

void np_print(int t[][9])
{
	for(int i=0; i<9; ++i){
		for (int j=0; j<9; ++j){
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int check_all()
{
	return SD_OK;
}

int main()
{
	init();

	if (check_all(g_table) == 0)
		printf("check ok\n");
	else
		printf("check error\n");
	return SD_OK;
}


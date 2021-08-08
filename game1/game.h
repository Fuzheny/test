#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
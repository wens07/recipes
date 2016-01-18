//
//  迷宫问题(rat in maze).cpp
//  recipes
//
//  Created by wengqiang on 2/1/16.
//  Copyright (c) 2016 wengqiang. All rights reserved.
//

#include <stdio.h>


/*见blog- 2016/01*/

/*下面是n-皇后问题*/

#define N 4

void printSolution(int board[N][N])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}


bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
    
    //check row on left side
    for (int i = 0; i < col; ++i)
        if (board[row][i])
            return false;
    //check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    
    //check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    
}


bool solveNQUtil(int board[N][N], int col)
{
    if (col >= N)
        return true;
    
    //check all the rows in this column
    for (int i = 0; i < N; ++i)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;
            
            if (solveNQUtil(board, col + 1))   return true;
            
            //BackTracking
            board[i][col] = 0;

        }
    }
    
    return false;
}

bool solveNQ()
{
    int board[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}

    }
    
    if (solveNQUtil(board, 0) == false)
    {
        printf("solution do not exist!");
        return false;
    }
    
    
    printSolution(board);
    return true;
}
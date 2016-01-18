//
//  将输入格式成每个单词一行.c
//  recipes
//
//  Created by wengqiang on 10/12/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//

#include <stdio.h>

void oneword_per_line()
{
    FILE *fd;
    
    int c;
    int wordout = 0;// in or out a word
    
    //remove leading blanks
    while ((c = fgetc(fd)) == ' ')
        ;
    
    ungetc(c, fd);
    
    while ((c = fgetc(fd)) != EOF)
    {
        //word definition: not contain any blank, tab and nextline
        if (c == ' ' || c == '\t' || c == '\n')
        {
            //means in word -> out
            if (!wordout)
            {
                wordout = 1;
                printf("\n");
            }
            
            continue;
        }
        else if (wordout == 1) //means out -> in word
        {
            wordout = 0;
        }
        
        putchar(c);
    }

}


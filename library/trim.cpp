//
//  trim.cpp
//  recipes_working
//
//  Created by wens on 9/15/14.
//  Copyright (c) 2014 wens. All rights reserved.
//  Email:wens.wq@gmail.com
//


#include <cctype>
#include <cstring>

#define NUL '\0'

char *trim(char *str)
{
    char *ibuf = str, *obuf = str;
    int i = 0, cnt = 0;
    
    /*
     **  Trap NULL
     */
    
    if (str)
    {
        /*
         **  Remove leading spaces (from RMLEAD.C)
         */
        
        for (ibuf = str; *ibuf && isspace(*ibuf); ++ibuf)
            ;
        
        if (str != ibuf)
            memmove(str, ibuf, ibuf - str);
        
        /*
         **  Collapse embedded spaces (from LV1WS.C)
         */
        
        while (*ibuf)
        {
            if (isspace(*ibuf) && cnt)
                ibuf++;
            else
            {
                if (!isspace(*ibuf))
                    cnt = 0;
                else
                {
                    *ibuf = ' ';
                    cnt = 1;
                }
                obuf[i++] = *ibuf++;
            }
        }
        obuf[i] = NUL;
        
        /*
         **  Remove trailing spaces (from RMTRAIL.C)
         */
        
        while (--i >= 0)
        {
            if (!isspace(obuf[i]))
                break;
        }
        obuf[++i] = NUL;
    }
    return str;
}

#ifdef TEST

#include <stdio.h>

main(int argc, char *argv[])
{
    printf("trim(\"%s\") ", argv[1]);
    printf("returned \"%s\"\n", trim(argv[1]));
}

#endif /* TEST */

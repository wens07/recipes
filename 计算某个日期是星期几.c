//
//  计算某个日期是星期几.c
//  recipes
//
//  Created by wengqiang on 19/6/15.
//  Copyright (c) 2015 wengqiang. All rights reserved.
//

#include <stdio.h>

#include <time.h>

/**
 *  计算2000年2月2日是周几.根据1900-01-01计算
 *
 */
void make_wday()
{
    char *wday[] = {"sunday", "monday", "tuesday",
        "wednesday", "thursday", "friday", "saturday"};
    
    struct tm s_tm;
    
    s_tm.tm_mon = 2 - 1;
    s_tm.tm_mday = 29;
    s_tm.tm_year = 2000 - 1900;
    s_tm.tm_hour = s_tm.tm_min = s_tm.tm_sec = 0;
    
//    s_tm.tm_isdst = -1;(it maybe wrong in china)
    
    if (mktime(&s_tm) != -1)
        printf("%s\n", wday[s_tm.tm_wday]);


}

/* 0 = sunday */
int dayofweek(int y, int m, int d)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    
    y -= m < 3;
    
    return (y + y/4 - y/100 + y/400 + t[m - 1] + d) % 7;
}

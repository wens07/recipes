//
//  spiral_output_matrix.cpp
//  pat_acm_programming
//
//  Created by wens on 8/12/14.
//  Copyright (c) 2014 wens. All rights reserved.
//  Email:wens.wq@gmail.com
//

#include <cstdio>
#include <vector>
#include <cassert>


using namespace std;

vector<int> spiral_output_matrix(vector<vector<int>> const &v)
{
    vector<int> result;
    assert(v.size() != 0);
    
    int rowlen = v.size() ;
    int columnlen = v[0].size();
    
    int beginx = 0, endx = rowlen - 1;
    int beginy = 0, endy = columnlen - 1;
    
    //do spiral output
    while (true) {
        //from top - right
        for (int i = beginx; i <= endx; ++i) {
            result.push_back(v[i][beginy]);
        }
        if (++beginy > endy)  break;
        
        //from right - bottom
        for (int i = beginy; i <= endy; ++i) {
            result.push_back(v[endx][i]);
        }
        if (--endx < beginx)  break;
        
        //from bottom - left
        for (int i = endx; i >= beginx; --i) {
            result.push_back(v[i][endy]);
        }
        if (--endy < beginy)  break;
        
        //from left - top
        for (int i = endy; i >= beginy; --i) {
            result.push_back(v[beginx][i]);
        }
        if (++beginx > endx)  break;
    }
    
    return  result;
    
    
}
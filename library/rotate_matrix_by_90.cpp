//
//  rotate_matrix_by_90.cpp
//  pat_acm_programming
//
//  Created by wens on 8/13/14.
//  Copyright (c) 2014 wens. All rights reserved.
//  Email:wens.wq@gmail.com
//

#include <cstdio>
#include <vector>

using namespace std;

//use a temp matrix to hold the result --- time: O(n^2), memeory: O(n^2)
vector<vector<int>> rotate_matrix_by_90(vector<vector<int>> const &v)
{
    auto n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            result[i][j] = v[n - 1 - j][i];
        }
    }
    
    return result;
}

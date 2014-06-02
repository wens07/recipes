#include<iostream>

using namespace std;

//generate the permuateion for 1~n series
bool generate_permutation(int *a, int n, int cur)
{
    if (cur == n)//recursion already, then output
    {
        for (int i = 0; i < n; ++i)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    //use recursion to generate the 1~n permutaion
    for (int i = 1; i <= n; ++i)
    {
        bool ok = true;
        for (int j = 0; j < cur; ++j)//whether the i is already in array
            if (a[j] == i) ok = false;

        if (ok)
        {
            a[cur] = i;
            generate_permutation(a, n, cur + 1);
        }
    }

        
}

int main()
{
    int a[20];
    generate_permutation(a, 3, 0);
    return 0;
}

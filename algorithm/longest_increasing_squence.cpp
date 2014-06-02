#include<iostream>

using namespace std;

int main()
{
    int a[] = {5, 2, 3, 4, 7};
    int n = sizeof(a)/sizeof(a[0]);
    int dp[n + 1];

    for (int i = n - 1; i >= 0; --i)
    {
        dp[i] = 1;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] > a[i])
            {
                if ( dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1;
            }
        }
    
    }
    /*dp[0] = 1;
    for (int i = 1; i <n; ++i)
    {
        dp[i] = 0;
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j] && dp[j] > dp[i])
                dp[i] = dp[j];
        }
        dp[i] = dp[i] + 1;
    }*/

    
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
         if (dp[i] > ans)
            ans = dp[i];
    }

    cout<<ans<<endl;

    return 0;
}

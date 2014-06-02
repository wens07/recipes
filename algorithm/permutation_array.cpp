#include<iostream>
#include<algorithm>

using namespace std;

int num = 0;

void generate_permutation(int *source, int *result, int n, int cur)
{
     if (cur == n)//recursion already, then output
    {
        num ++;
        for (int i = 0; i < n; ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }

    //use recursion to generate the permutaion
    for (int i = 0; i < n; ++i)
    {
        if (!i || source[i] != source[i - 1])
        {
            int cur1 = 0, cur2 = 0;
            for(int j = 0; j < cur; ++j) if (source[i] == result[j]) cur1++;
            for(int j = 0; j < n; ++j) if (source[i] == source[j]) cur2++;

            if (cur1 < cur2)
            {
                result[cur] = source[i];
                generate_permutation(source, result, n, cur+1);
            }
        }
    }
}
int main()
{
    
    int source[] = {1, 1, 2};
    int result[10];

    generate_permutation(source, result, 3, 0);
    cout<<num<<endl;
    return 0;
}

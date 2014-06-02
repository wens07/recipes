#include<iostream>

using namespace std;



/*
 *  change decimal number to base of b
 *
 */

int fromdecimal(int n, int b)
{
    int result = 0;
    int multiplier = 1;
    
    while (n > 0)
    {
        result += n % b * multiplier;
        multiplier *= 10;
        n /= b;
    }
    
    return result;
    
}

/*
 *  change base of b to decimal number  
 *
 */
int todecimal(int n, int b)
{
    int result = 0;
    int multiplier = 1;
    
    while (n > 0)
    {
        result += n % 10 * multiplier;
        multiplier *= b;
        n /= 10;
    }
    
    return result;
}


int main(int argc, const char* argv[])
{
    cout<<todecimal(1000, 2)<<endl;
    return 0;
}
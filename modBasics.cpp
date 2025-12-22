//  "effective ways to maintain sanity while using modulo" by Jyotiraditya Samal
#include <bits/stdc++.h>

using namespace std;

int main()
{   long long a = LONG_LONG_MAX;
    long long b = LONG_LONG_MAX;
    int num = -26;
    
    long long m = 10;
    long long result ,result1 ,result2;

    // |--------------------------------EFFICIENT MODULO ARITHMETIC-----------------------------------------|
    
    //  [ 1 ] -> TAKE MODULO AT EACH OPERATION SO THAT THE RESULT IS NEVER TOO LARGE------------------
    
    // (a+b) % m -> a+b exceeds long long limit
    result = ((a%m) + (b%m)) % m;
    
    // (a*b) % m -> a*b exceeds long long limit
    result1 = ((a%m) * (b%m)) % m;

    //  [ 2 ] -> AVOID NEGATIVE REMAINDERS------------------------------------------------------------

    result2 = ((num % m) + m) % m;

    // OR

    result2 = (num % m);
    if(result2 < 0) result2 += m; 

    //  |---------------------------------------------------------------------------------------------------|

    cout <<"["<< a <<" + "<< b << "] mod 10 :: " << result <<"\n";
    cout <<"["<< a <<" x "<< b << "] mod 10 :: " << result1 <<"\n";
    cout <<"["<< num << "] mod 10 :: " << result <<"\n";
    return 0;
}
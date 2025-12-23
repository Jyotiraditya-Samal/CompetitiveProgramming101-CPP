// "ways to shorten your code and make typing faster" by Jyotiraditya Samal

#include<bits/stdc++.h>

using namespace std;

int main()
{   // Normally ::

    long long a = 5;
    long long b = 6;
    vector <long long> arr;

    // [ 1 ]---USING "typedef" ::

    //  Allows you to give shorter names to datatypes
    // *(note :: always typedef globally unlike in these examples.
    
    typedef long long ll;
    ll c = 6;
    ll d = 7;
    vector <ll> arr1;

    typedef vector <ll> vl;     //  even shorter

    vl arr2;

    typedef pair<ll,int> pli;   //  give alias to complex datatypes

    pli x;
    x.first  = 7;
    x.second = 9;  

    // [ 2 ]---USING MACROS / "#define" ::

    //  Allows you to shorten code by assigning shorthands that get replaced with their corresponding code/snippet(s) in runtime  
    // *(note :: always #define globally unlike in these examples.

    #define f first
    #define s second
    #define pb push_back

    x.f = 8;
    x.s = 10;
    arr2.pb(5);

    //  Shorten loop body
    #define range(a,b,i) for(int i = a;i<b;i++)
    
    int j;
    range(2,10,j)
    {
        cout<<j<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>    //   includes entire standard library

using namespace std ;

int main()
{   
    // freopen("input.txt","r",stdin);      //  reads input from a file
    // freopen("output.txt","w",stdout);    //  writes output to a file

    int a ,b;
    //cout << "Enter a: " << endl;    //  " \n " + flush()    - flushes the text to console immediately
    cin >> a;
    //cout << "Enter b: \n";          //  no immediate flush here - waits for buffer to fill
    cin >> b;

    cout << "A :: "<< a << " B :: " << b;
    return 0;
}


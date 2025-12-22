#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x = (0.3*3) + 0.1;   //  rounding error hence not equal to 1 
    
    cout << (x == 1) << '\n';   //  hence returns 0

    //  SOLUTION ::

    if (abs(1-x)<1e-9)
    {
        cout << "Equal\n";
    }

    // WAYS TO REPRESENT :: 

    double y = 123.4567891234;
    cout << setprecision(4) << y << "\n";  // 123.5 (4 significant digits)
    cout << setprecision(6) << y << "\n";  // 123.457

    cout << fixed << y << "\n";                     // 123.456789 (setprecision(6) by default)
    cout << fixed << setprecision(2) << y << "\n";  // 123.46 (2 decimal places)
    cout << fixed << y << "\n";                     // 123.46 (retains last setprecision())
    cout << fixed << setprecision(4) << y << "\n";  // 123.4568
    return 0;
}
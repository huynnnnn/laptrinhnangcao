#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    double p, s;
    cin >> a >> b >> c;
    if(a >= (b + c) || b >= (a + c) || c >= (a + b) ||
       a <= abs(b - c) || b <= abs(a - c) || c <= abs(a - b))
        cout << "invalid";
    else
    {
        p = double(a + b + c)/2;
        s = sqrt(p * (p - a)*(p - b)*(p - c));
        cout << fixed << setprecision(2) << s;
    }
    return 0;
}

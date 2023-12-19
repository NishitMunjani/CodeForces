#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double h,l;
    long double r1,r2;
    cin>>h>>l;

    r1 = (l * l) - (h * h);
    r2 = r1/(2 * h);

    cout<<setprecision(13)<<r2;
    return 0;
}
#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long n,k,result=0;
    cin>>n>>k;
    long long even_indices = 0;
    long long odd = n/2 + ((n%2)!=0);
    long long even = n - odd;

    if(k>odd){
    	even_indices = abs(k-odd);
    	result = 2 * even_indices;
    }
    else{
    	result = (2 * k) - 1;
    }
    cout<<result;
    return 0;
}
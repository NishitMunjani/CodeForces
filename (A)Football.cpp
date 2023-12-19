#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n,count1 = 0, count2 = 0;
    string temp2, temp;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++){
    	cin>>s[i];
    }
    for(int i=0;i<n;i++){
    	if(i==0) temp = s[i];

    	if(s[i] == temp) count1++;
    	else {
    		temp2 = s[i];
    		count2++;
    	}
    }

    if(count2>count1){
    	cout<<temp2;
    }
    else{
    	cout<<temp;
    }

    return 0;
}   
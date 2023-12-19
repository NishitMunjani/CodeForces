#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int count = 0;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
    	if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
    		count++;
    	}
    }
    if(count > 0){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, result=0,diff;
    cin>>n;

    diff = n-2;
    if(n == 1){
    	cout<<1;
    }
    else if(n == 2){
    	cout<<3;
    }
    else if(n == 3){
    	cout<<7;
    }
    else{
    	while(1){
	    	result = result + (diff * (n - diff));
	    	diff--;
	    	if(diff == 1){
	    		result = result + ((diff+1) * (n - diff));
	    		break;
    		}
    	}
    	cout<<result+n;
    }
    return 0;
}
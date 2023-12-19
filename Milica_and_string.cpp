#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int t, n, k;
    string s;
    cin>>t;
    while(t--){
    	int count_A=0, count_B=0;
        cin>>n>>k;
        cin>>s;
        for(int i=0; i<n ;i++){
        	if(s[i] == 'A'){
        		count_A++;
        	}
        	if(s[i] == 'B'){
        		count_B++;
        	}
        }
        // cout<<"Count A" <<count_A<<endl;
        // cout<<"count B"<<count_B<<endl;
        if(count_B == k){
        	cout<<"0"<<endl;
        }

        else if (count_B > k){
        	int count = 0, diff = 0,index=0;
        	diff = abs(count_B - k);
        	for(int i=0; i<n; i++){
        		if(s[i] == 'B' && count<=diff){
        			count++;
        			if(diff == count){
        				index = i;
        			}
        		}
        	}
        	cout<<"1"<<endl;
        	cout<<index+1<<" "<<"A"<<endl;
        }
        else{
        	int diff=0,count = 0,index = 0;
        	diff = abs(count_B - k);
        	for(int i=0; i<n; i++){
        		if(s[i] == 'A' and count<=diff){
        			count++;
        			if(diff == count){
        				index = i;
        			}
        		}
        	}
        	cout<<"1"<<endl;
        	cout<<index+1<<" "<<"B"<<endl;
        }
    }
    return 0;
}
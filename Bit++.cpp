#include<iostream>
using namespace std;
 
int main(){
 
	int n,x=0;
	cin>>n;
	string str[n];
 
	for (int i=0; i<n; i++){
		cin>>str[i];
	}
 
	for (int i=0; i<n; i++){
		if (str[i] == "X++"|| str[i] == "++X" ){
			x++;
		}		
		else{
			x--;
		}
	} 
 
	cout<<x;
	return 0;
}
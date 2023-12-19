#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int n,sum0=0, sum1=0, sum2=0;
	cin>>n;

	int arr[n][3];
	for(int i=0; i<n;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0; i<n; i++){ 
		sum0 += arr[i][0];
	}
	for(int i=0; i<n; i++){ 
		sum1 += arr[i][1];
	}
	for(int i=0; i<n; i++){ 
		sum2 += arr[i][2];
	}
	
	if(sum0 == 0 && sum1 == 0 && sum2 == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
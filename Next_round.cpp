#include<iostream>
using namespace std;

int main(){

	int n, k ,count=0;
	cin>>n>>k;

	int arr[n];
	for (int i=1; i<=n; i++){
		cin>>arr[i];
	}

	for (int i=1; i<=n; i++){
		if (arr[k] <= arr[i] && arr[i] > 0 ){
			count++;
		}		
		else{
			break;
		}
	} 

	cout<<count;
	return 0;
}
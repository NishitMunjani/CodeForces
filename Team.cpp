#include<iostream>
using namespace std;

int main(){

	int n, arr[1000][100], sum = 0, count=0;
	cin>>n;
	
	// for (int i = 0; i < 1000; ++i) {
    //     for (int j = 0; j < 1000; ++j) {
    //         arr[i][j] = 0;
    //     }
    // }
	for (int i=0; i<n; i++){
		for (int j=0; j<3; j++){
			cin>>arr[i][j];
		}
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<3; j+=3){
			sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
			if (sum>=2){
				count++;
			}
		}
		sum = 0;
	}

	cout<<count;
	return 0;
}
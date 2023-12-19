#include<iostream>
using namespace std;

int main(){

	int arr[5][5] = {
		{4,3,2,3,4},
		{3,2,1,2,3},
		{2,1,0,1,2},
		{3,2,1,2,3},
		{4,3,2,3,4}
	};
	int arr2[5][5];
	int row=0, col=0;

	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			cin>>arr2[i][j];
		}
	}

	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			if(arr2[i][j] == 1){
				row = i;
				col = j;
				break;
			}
		}
	}

	cout<<arr[row][col];
	return 0;
}
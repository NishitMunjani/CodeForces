#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int arr[3][3],arr2[3][3]={{1,1,1},{1,1,1},{1,1,1}};

    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		cin>>arr[i][j];
    	}
    }

    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		if(arr[i][j] % 2 == 0){
    			continue;
    		}
    		else{
	    		if(arr[i][j] % 2 != 0){
				    arr2[i][j] = !(arr2[i][j]);
				    if(i > 0){
				     arr2[i-1][j] = !(arr2[i-1][j]);
				    }
				    if(j > 0){
				     arr2[i][j-1] = !(arr2[i][j-1]);
				    }
				    if(i < 2){
				     arr2[i+1][j] = !(arr2[i+1][j]);
				    }
				    if(j < 2){
				     arr2[i][j+1] = !(arr2[i][j+1]);
				    }
			    }
    		}
    	}	
    }
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr2[i][j];
		}
		cout<<endl;
    }

    return 0;
}
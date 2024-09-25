// day 2 
#include<iostream>
using namespace std;

int main (){
	
	int arr1[3][3];
	
	for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){
			
			cin>>arr1[i][j];
		}
		cout<<endl;
	}
	cout<<"FIRST ARRAY :"<<endl;
	for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){	
			cout<<arr1[i][j]<<" ";
		}
			cout<<endl;
	} 
	
//		int arr2[3][3];
//	
//	for(int i = 0 ; i<3;i++){
//		for(int j = 0 ; j<3; j++){
//			
//			cin>>arr2[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"SECOND ARRAY :"<<endl;
//	for(int i = 0 ; i<3;i++){
//		for(int j = 0 ; j<3; j++){	
//			cout<<arr2[i][j]<<" ";
//		}
//			cout<<endl;
//	} 
//	
//	int arr3[3][3];
//		for(int i = 0 ; i<3;i++){
//		for(int j = 0 ; j<3; j++){
//			
//		arr3[i][j]	= arr1[i][j]+arr2[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"SUM OF ARRAYS :"<<endl;
//	for(int i = 0 ; i<3;i++){
//		for(int j = 0 ; j<3; j++){	
//			cout<<arr3[i][j]<<" ";
//		}
//			cout<<endl;
//	} 
	
	
	// transpose of a matrix
	int arr4[3][3];
		for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){
			arr4[i][j] = arr1[j][i];	
		}
	}
		
	cout<<"TRANSPOSE MATTRIX :"<<endl;
	for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){	
			cout<<arr4[i][j]<<" ";
		}
			cout<<endl;
	}

// square of all elements of 2d array
   int arr5[3][3];
    cout<<"SQUARE OF ALL ELEMENTS : "<<endl;
   	for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){
			arr5[i][j] = arr1[i][j]*arr1[i][j];	
		}
	}
	for(int i = 0 ; i<3;i++){
		for(int j = 0 ; j<3; j++){	
			cout<<arr5[i][j]<<" ";
		}
			cout<<endl;
	}
























}

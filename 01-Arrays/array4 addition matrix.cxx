#include<iostream>
using namespace std;
int main() {
	int arr[ 3][2],arr2[3][2],result[3][2];
	 cout <<" Enter 6 integer numbers for matrix 1:"<<endl;
	 for( int i =0;i<3;i++) {
	 	 for ( int j=0;j<2;j++) {
	 	 	cin >> arr[i][j];
	 	 }
	 	 cout <<endl;
	 }
	 cout <<"Enter 6 integers for matrix2 :"<<endl;
	 for ( int i=0;i< 3; i++) {
         for (int j=0; j<2;j++) {
         	cin >> arr2[i][j];
         }
         cout <<endl;
	 } 
for (int r =0 ;r<3;r++) {
	for (int c=0 ;c<2 ;c++) {
		result[r][c]=arr[r][c]+arr2[r][c];
	} 
}
for (int r =0 ;r<3;r++) {
	for (int c=0 ;c<2 ;c++) {
		cout<<result[r][c] << "   ";
	}
	cout <<endl;
}
 return 0;
}

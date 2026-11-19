#include<iostream>
using namespace std;
int main() {
	int arr[ 3][2],arr2[2][3],product[3][3];
	 cout <<" Enter 6 integer numbers for matrix 1:"<<endl;
	 for( int i =0;i<3;i++) {
	 	 for ( int j=0;j<2;j++) {
	 	 	cin >> arr[i][j];
	 	 }
	 	 cout <<endl;
	 }
	 cout <<"Enter 6 integers for matrix2 :"<<endl;
	 for ( int i=0;i< 2; i++) {
         for (int j=0; j<3;j++) {
         	cin >> arr2[i][j];
         }
         cout <<endl;
	 } 
 for( int r=0; r<3;r++)  {
   for( int c=0; c<3;c++)  {
   	product[r][c]=0;
   	
    for ( int k =0; k<2 ; k++) {
        product[r][c]+= arr[r][k]*arr2[k][c];
    }
   }
   cout <<endl;
 }
 for( int r=0; r<3;r++)  {
   for( int c=0; c<3;c++)  {
   	cout << product[r][c] <<"    " ;}
   	cout << endl;  }
 return 0;
}

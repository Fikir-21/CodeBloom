#include<iostream>
using namespace std ;
int main( ) {
		int i,j;
		cout <<" Enter two integer numbers for row and column:";
	cin >>i >>j;
	int arr[i][j];
	int s=i*j;
 cout <<" Enter "<<s<<"numbers of integers for the matrice:"<<endl;
 for (int n =0; n<i;n++) {
 	for( int m=0; m<j;m++) {
 		cin >> arr[n][m]; }
 		}
 				cout <<" This is the enterd matrice:"<<endl;
  for(int n =0;n<i;n++) {
      for (int m=0;m<j;m++){
      	cout<<arr[n][m]<<"     ";
      }
      cout<<endl;
  }
  int a=0;
  for(int n =0;n<i;n++) {
      for (int m=0;m<j;m++){
      a += arr[n][m]; }
  }
      	cout <<" this is the total sum of the integer numbers:"<<a<<endl;
      	
	return 0; 
  }
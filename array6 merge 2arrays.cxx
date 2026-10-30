#include<iostream>
using namespace std;
int main ()  {
	int arr[4],arr2[3], merge[7];
		cout <<" Enter 4 integers :"<<endl;
	for ( int i=0 ;i<4; i++) {
	   cin >> arr[i];
	   merge[i]=arr[i];
	}
	cout <<" Enter 3 integers :"<<endl;
	   for ( int k=0;k<3;k++){
	   	cin >>arr2[k];
	   	merge[k+4]=arr2[k];}
	 for(int n=0 ; n<7;n++) {
	   cout << merge[n]; }
	     return 0;
}
	 
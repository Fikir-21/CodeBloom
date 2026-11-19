#include<iostream>
using namespace std ;
int main(){
	int arr[5];
	cout << " Enter 5 integers :"; 
	for ( int i = 0 ; i <5; i ++){
		cin >>arr[i];}
		int smallest = arr[0];
    for( int i = 1; i <5 ; i ++){
    	if ( smallest > arr[i]){
    	smallest = arr[i];}
    }
    	cout << " the smallest number is  :"<<smallest;    	
return 0;
}

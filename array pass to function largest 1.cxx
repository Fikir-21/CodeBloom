#include<iostream>
using namespace std;
void findLargest(int arr[],int size ) {
 int largest=arr[0];
 for( int i=0 ;i<5;i++){
 	if (arr[i]>largest) {
 	largest = arr[i];
 	}
 	 }
 	 cout << endl<<largest<< "is the largest";  
 }
int main (){
int arr[5];
cout<<"Enter 5 integer numbers :"<<endl;
for( int i=0;i<5;i++) {
	cin >>arr[i]; 
	}
	 findLargest(arr,5);
return 0;
}

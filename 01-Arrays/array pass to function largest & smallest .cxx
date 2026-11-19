#include<iostream>
using namespace std;
void findLargest(int arr[],int size ) {
 int largest=arr[0];
 for( int i=0 ;i<size;i++){
 	if (arr[i]>largest) {
 	largest = arr[i];
 	}
 	 }
 	 cout << endl<<largest<< "is the largest";  
}
void findSmallest(int arr[],int size ) {
 	  int smallest=arr[0];
 for( int i=0 ;i<size;i++){
 	if (arr[i]<smallest) {
 	smallest = arr[i];
 	}
 	 }
 	 cout << endl<<smallest<< "is the smallest";  
 }
int main (){
int arr[1000] , a;
cout<<"How many  integer numbers do u want an array to have(1-1000):"<<endl;
cin >>a;
while((a>1000)||(a<1)) {
cout<<"invalid number please enter only numbers sarts from 1-1000 next time!"<<endl;
cout<<"How many  integer numbers do u want an array to have(1-1000):"<<endl;
cin >>a;
}
cout<< "Enter "<<a<<"  integers to find the largest number ";
for( int i=0;i<a;i++) {
	cin >>arr[i]; 
	}
	 findLargest(arr,a);
	 findSmallest(arr,a);
return 0;
}

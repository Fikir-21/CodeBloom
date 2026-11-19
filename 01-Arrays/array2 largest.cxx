#include <iostream>
using namespace std;

int main() {
    int arr [ 10 ] ;
  cout << "Enter ten (10) integers:" ;
 for ( int i = 0 ; i < 10 ; i++)
 {
   cin >> arr[ i ];
   }
   int largest = arr[0];
   
   for( int i =1;i <=9;i++){
          if ( arr[i] >largest){
            largest = arr[i];
            }	    
   	}
   	cout << largest;
    return 0;
}

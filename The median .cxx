#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout <<"Enter 3 integer numbers:";
    cin>>a>>b>>c;
   if( ( a > b ) && ( c > a ) || ( a < b ) && ( c < a ) )
    cout <<"The median is"<< a;
else if ( ( b > a ) && ( c > b ) || ( a < b ) && ( c < b ) )
cout << "The median is"<< b;
else
cout << "The median is"<< c;
return 0;
}
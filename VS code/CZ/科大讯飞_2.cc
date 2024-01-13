#include <iostream>
using namespace std;
void test ( int& t) {
cout << "int&" << endl;
}
void test( const int& t) {
cout << "const int&" << endl;
}
void test( int&& t) {
cout << "int&&" << endl;
}
void test(const int&& t){
cout << "const int&&" << endl;
}

void forward_test( int&& a) {
test( a) ;
}
int main( ) {
int t = 0;
forward_test ( move( t) );
return 0;
}


#include <stdio.h>

int main( void){
int a, w, q,s;
a=5;
w=a++;


q=++a;
s=10*a++;
//__程序段1;____程序段2;

return 0;


}
/*
程序段1可以输入q=a++，程序段2可以输入s=10*a++
程序段1可以输入q=++a，程序段2可以输入s=14*a++
程序段1可以输入q=a++，程序段2可以输入s=14*a++
程序段1可以输入q=++a，程序段2可以输入s=10*a++

*/


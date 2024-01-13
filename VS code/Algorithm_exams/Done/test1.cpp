#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;




class solution
{
public:


};


void main()
{
    solution s1;
    int n[][3] = { 10,20,30,40,50,60 };
    int(*p)[3];
    p = n;
    cout << p[0][0] << "," << *(p[0] + 1) << ","<<(*p)[2] << endl;


    system("pause");
}
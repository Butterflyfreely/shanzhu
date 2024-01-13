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

void QuickSort(int R[], int lo, int hi)
{
    int i = lo, j = hi;
    int temp;
    if (i < j)
    {
        temp = R[i];
        while (i != j)
        {
            while (j > i && R[j] > temp)j--;
            R[i] = R[j];
            while (i < j && R[i] < temp)i++;
            R[j] = R[i];
        }
        R[i] = temp;
        QuickSort(R, lo, i - 1);
        QuickSort(R, i+1, hi);
    }
}


void main()
{
    //solution s1;
    int R[]={64,2,6,7,3,4,5,8,45,44,12,32};
    int lo = 0, hi =sizeof(R)/sizeof(R[0])-1;
    QuickSort(R,lo,hi );
    for (int k = 0; k <= hi; k++)
    {
        cout << R[k]<<" ";
    } 

    system("pause");
}


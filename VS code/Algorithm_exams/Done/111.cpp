#include <iostream>
#include<vector>

using namespace std;
int main() {
    int N=8, K=9;
    //while (cin >> N >> K);// ע�⣬��������Ƕ��������������ͨ��whileѭ����������������
    //cout << N + K << endl;

    vector<int> vec;
    for (int i = 1; i <= K; i++)
    {
        int num = i * N;
        int inv_num = 0;
        while (num != 0)
        {
            inv_num = inv_num *10;
            inv_num += (num % 10);
            num = num/10;
        }
        //cout << inv_num << endl;
        vec.push_back(inv_num);
    }
    int max_val = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        max_val = vec[i] > max_val ? vec[i] : max_val;
    }
    cout << max_val;
    return max_val;
    system("pause");
    
}
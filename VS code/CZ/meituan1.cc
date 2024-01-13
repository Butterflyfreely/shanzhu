#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C;
    cin >> C;
    while (C--) {
        string S, T;
        cin >> S >> T;
        int len1 = S.length(), len2 = T.length();
        int i = 0, j = 0, count = 0;
        if(len1<=len2){
             while (i < len1) {
            if (S[i] == T[j]) {
                i++;
                j++;
            } else {
                i++;
                j++;
                count++;
            }
           }
        }else{
            count+=len1-len2;
            while (i < len2) {
            if (S[i] == T[j]) {
                i++;
                j++;
            } else {
                i++;
                j++;
                count++;
            }
           }
        }
        cout << count << endl;
    }
    return 0;
}
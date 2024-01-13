#include <iostream>
using namespace std;

// bool fun(int x) {
//     int cnt = 0;
//     for (int i = 0; i < 32; i++) {
//         if ((x >> i) & 1) {
//             cnt++;
//         }
//     }
//     return cnt % 2;
// }

// int main() {
//     cout << fun(191) << " ";
//     cout << fun(89) << endl;
//     return 0;
// }

string arr = "1223333445";

void bsearch( char x) {
int l = 0,r = arr.size() - 1;
while(l < r) {
int mid = ( l + r) / 2;
if (arr[mid] == x) r = mid;else l = mid + 1;
}
cout << l << " ";
}


int main() {
    bsearch('3');
    bsearch('4');
    return 0;
}
// #include <iostream>
// #include <vector>

// int min_operations(int target) {
//     if (target < 10) {
//         return -1;
//     }

//     int base = 4;
//     int remainder = (target - 10) % base;

//     switch (remainder) {
//         case 0:
//             return (target - 10) / base + 4;
//         case 1:
//             return (target - 1) / base + 4;
//         case 2:
//             return (target - 2) / base + 4;
//         case 3:
//             return (target - 3) / base + 4;
//         default:
//             return -1;
//     }
// }

// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<int> targets(n);

//     for (int i = 0; i < n; i++) {
//         std::cin >> targets[i];
//     }

//     for (int i = 0; i < n; i++) {
//         int result = min_operations(targets[i]);
//         std::cout << result << std::endl;
//     }
//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int cnt = 0;
    for (int i = n - 1; i >= 2; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (nums[i] + nums[l] <= nums[r]) {
                l++;
            } else if (nums[r] >= 2 * nums[i]) {
                r--;
            } else {
                if (nums[l] != nums[l+1]) { // 排除等边三角形
                    cnt++;
                }
                l++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}



/*
6
10 16 6 66 99 963


输入:[6,6,6] 输出:[0]


*/

// 10 16 6 66 99 963
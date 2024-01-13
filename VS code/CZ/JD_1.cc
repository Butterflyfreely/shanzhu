// #include<iostream>
// #include<algorithm>
// #include<map>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // 输入糖果数量

//     map<int, int> count;  // 统计每种糖果的数量
//     for (int i = 0; i < n; i++) {
//         int candy_type;
//         cin >> candy_type;
//         count[candy_type]++;
//     }

//     int total = 0;  // 计算可以吃掉的糖果数量
//     for (const auto &p : count) {
//         total += min(p.second - 1, 1);
//     }

//     cout << total << endl;  // 输出结果
//     return 0;
// }


#include<iostream>
#include<cstring>
using namespace std;
int a[105], n;

bool check(int x) {  //检查能否吃掉x个糖果
    int cnt = 0;
    for (int i = 1; i <= 100; ++i)
        if (a[i] > 0) {
            cnt += a[i] / (x + 1);  //计算当前能吃掉多少种糖果
            if (cnt >= x) return true;  //如果已经能吃掉x种及以上糖果，则返回true
        }
    return false;
}

int main() {
    cin >> n;
    memset(a, 0, sizeof(a));  //初始化数组
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        ++a[x];
    }

    int l = 1, r = n, ans = 0;
    while (l <= r) {  //二分答案
        int mid = (l + r) / 2;
        if (check(mid)) {  //如果可以吃掉mid种及以上糖果，则更新最优解
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans * (ans + 1) / 2 << endl;  //输出最大能吃掉的糖果数量

    return 0;
}

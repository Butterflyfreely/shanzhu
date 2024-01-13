#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int findMinOperations(int target) {
    if (target < 0) return -1;
    if (target == 0) return 4;
    if (target == 1 || target == 2 || target == 3 || target == 4) return 1;
    int res = INT_MAX;
    for (int i = 1; i <= 4; ++i) {
        int temp = findMinOperations(target - i);
        if (temp != -1) res = min(res, temp + 1);
    }
    if (res == INT_MAX) return -1;
    return res;
}

vector<int> minOperations(vector<int>& targets) {
    vector<int> res;
    for (auto target : targets) {
        int ops = findMinOperations(target);
        res.push_back(ops);
    }
    return res;
}

int main() {
    vector<int> targets = {10, 16, 6, 66, 99, 963};
    vector<int> res = minOperations(targets);
    for (auto r : res) {
        cout << r << " ";
    }
    cout << endl; // expected: 4 6 -1 18 27 243
    return 0;
}

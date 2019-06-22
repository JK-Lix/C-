/*************************************************************************
	> File Name: 270_hz.cpp
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年06月22日 星期六 20时13分03秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<climits>
#include<deque>
using namespace std;

#define MAX_N 300000

int arr[MAX_N + 5];
deque<int> q;

int main() {
    int n, m, ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i], arr[i] += arr[i - 1];
    q.push_back(0);
    ans = arr[0];
    for (int i = 1; i <= n; i++) {
        if (arr[i] - arr[q.front()] > ans) ans = arr[i] - arr[q.front()];
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
        if (i - q.front() >= m) q.pop_front();
    }
    cout << ans << endl;
    return 0;
}

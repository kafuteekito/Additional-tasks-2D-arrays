#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int w = 0, maxThrow = arr[0][0], maxSum = 0;

    for (int i = 0; i < n; i++) {
        int curMaxThrow = arr[i][0];
        int curSum = 0;

        for (int j = 0; j < m; j++) {
            curMaxThrow = max(curMaxThrow, arr[i][j]);
            curSum += arr[i][j];
        }

        if (curMaxThrow > maxThrow || (curMaxThrow == maxThrow && curSum > maxSum)) {
            w = i;
            maxThrow = curMaxThrow;
            maxSum = curSum;
        }
    }

    cout << w << endl;

    return 0;
}

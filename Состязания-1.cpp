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

    int maxSum = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++) {
        int curSum = 0;
        for (int j = 0; j < m; j++) {
            curSum += arr[i][j];
        }
        if (curSum > maxSum) {
            maxSum = curSum;
            maxIndex = i;
        }
    }

    cout << maxSum << endl; 
    cout << maxIndex << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

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

    int maxThrow = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxThrow = max(maxThrow, arr[i][j]);
        }
    }

    vector<int> winners;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == maxThrow) {
                winners.push_back(i);
                break;
            }
        }
    }

    cout << winners.size() << endl;

    for (int winner : winners) {
        cout << winner << " ";
    }

    return 0;
}

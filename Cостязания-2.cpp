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

    int maxValue = arr[0][0];
    int row = 0;
    int col = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];
                row = i;
                col = j;
            }
        }
    }

    cout << maxValue << endl; 
    cout << row << " " << col << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M >> W;

    vector<vector<char>> arr(N, vector<char>(M, '0'));

    for (int i = 0; i < W; ++i) {
        int row, col;
        cin >> row >> col;
        arr[row - 1][col - 1] = '*';
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] == '*') {
                cout << "* ";
            } else {
                int count = 0;

                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        int newR = i + x;
                        int newC = j + y;
                        if (newR >= 0 && newR < N && newC >= 0 && newC < M && arr[newR][newC] == '*') {
                            count++;
                        }
                    }
                }
                cout << count << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

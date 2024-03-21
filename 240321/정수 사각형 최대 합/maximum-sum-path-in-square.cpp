#include <iostream>
#include <algorithm>
using namespace std;

int N, Map[101][101], dp[101][101];

void func(int x, int y) {
    int nx = x-1;
    int ny = y-1;
    dp[y][x] = max(dp[ny][x], dp[y][nx]) + Map[y][x];
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin>>Map[i][j];
            dp[i][j]=0;
        }
    }
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            func(j,i);
        }
    }
    cout<<dp[N][N];

    return 0;
}
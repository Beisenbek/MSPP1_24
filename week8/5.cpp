#include <iostream>
#include <queue>

using namespace std;

int time[100][100];
queue<pair<int, int> > q;
int n, startRow, startColumn, targetRow, targetColumn;

void step(int x, int y, int n, int m, int t){
    if(x < n && y < m && x >= 0 && y >= 0){
        if(time[x][y] == -1){
            time[x][y] = t;
            q.push(make_pair(x, y));
        }
    }
}

int main(){

    cin >> n >> startRow >> startColumn >> targetRow >> targetColumn;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            time[i][j] = -1;
        }
    }

    time[startRow][startColumn] = 0;
    q.push(make_pair(startRow, startColumn));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        step(cur.first -2, cur.second - 1, n, n, time[cur.first][cur.second] + 1);
        step(cur.first - 1, cur.second - 2, n, n, time[cur.first][cur.second] + 1);
        step(cur.first - 2, cur.second + 1, n, n, time[cur.first][cur.second] + 1);
        step(cur.first - 1, cur.second +2, n, n, time[cur.first][cur.second] + 1);
        step(cur.first +2, cur.second + 1, n, n, time[cur.first][cur.second] + 1);
        step(cur.first + 1, cur.second + 2, n, n, time[cur.first][cur.second] + 1);
        step(cur.first + 2, cur.second - 1, n, n, time[cur.first][cur.second] + 1);
        step(cur.first + 1, cur.second - 2, n, n, time[cur.first][cur.second] + 1);
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << time[i][j] << "\t"; 
        }
        cout << endl;
    }

    cout << time[targetRow][targetColumn];

    return 0;
}
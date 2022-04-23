#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <map>
#include <stdio.h>
#include <stack>
#include <stdlib.h>
#include <queue>
#include <bitset>
using namespace std;

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int col, row;
int output = 0;

bool inbound(int x, int y){
    if (x < 0){
        return false;
    }
    if (y < 0){
        return false;
    }
    if (x >= col){
        return false;
    }
    if (y >= row){
        return false;
    }
    return true;
}

void dfs (vector<bitset<7>> maze, int x, int y){
    if (x == col - 1 && y == 0){//changed
        output++;
        return;
    }
    maze[x][y].flip();
    for (int i = 0; i < 4; i++){
        if (inbound(x + dx[i], y + dy[i])){
            if (maze[x + dx[i]][y + dy[i]]){
                dfs(maze, x + dx[i], y + dy[i]);
            }
        }
    }
}
int main(){
    cin >> col >> row;
    vector<bitset<7>> maze;

    string t;
    for (int i = 0; i < col; i++){
        cin >> t;
        maze.push_back(bitset<7>(t, 0, t.size(), '#', '*'));
    }

    dfs(maze, 0,row - 1);// changed

    cout << output;

    return 0;
}
//5 6
//*****#
//*###*#
//*###*#
//*###*#
//******
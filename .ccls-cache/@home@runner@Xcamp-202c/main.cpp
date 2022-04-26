#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

vector<bool> visited;
int main() {
  int nodes, edges;
  cin >> nodes >> edges;

  vector<int> adj[nodes];
  int node1, node2;

  for (int i = 0; i < edges; i++) {
    cin >> node1 >> node2;
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);

    visited.push_back(false);
  }

  for (int i = 0; i < edges; i++) {
    if (!visited[i]){
      stack<vector<int>> s;
      while (!s.empty()) {
        vector<int> pt = s.top();
        s.pop();
  
        for (int i = 0; i < s.size(); i++) {
          if (!visited[pt[i]]) {
            visited[pt[i]] = true;
          }
        }
      }
    }
  }
}
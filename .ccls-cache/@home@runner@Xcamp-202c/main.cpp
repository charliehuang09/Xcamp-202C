#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
const int out[3][3] = {
        {1,2,3},
        {8,0,4},
        {7,6,5}};
void print(vector<vector<int>> input){
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        cout << input[i][j] << " ";
      }
    cout << "\n";
  }
}
int main() { 
    
  vector<vector<int>>  input;
  string t = "283104765";
  // cin >> t;
  vector<int> t1;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      t1.push_back(t[(i * 3) + j] - '0');
    }
      input.push_back(t1);
      t1.clear(); //t1.erase() doesn't work -_-
    
  }
  queue<vector<vector<int>>> q;//input
  queue<vector<vector<int>>> rq;// 1 2 3 thinue
  //123
//  804
//  765
  vector<vector<int>> end;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           t1.push_back(out[i][j]);
        }
        end.push_back(t1);
        t1.clear();
    }
  rq.push(end); 
  print (end);
  map<vector<vector<int>>, int> qcheck;
  map<vector<vector<int>>, int> rqcheck;//this

  qcheck[input] = 1;
  rqcheck[end] = 1;
  
}
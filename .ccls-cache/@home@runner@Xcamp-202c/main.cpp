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
int matrix[500][500];
int char_counts[150];
string ans = "";

void dfs(int input) {
  ans += (char)(input);
  for (int i = 0; i < 500; i++) {
    if (matrix[input][i]) {
      matrix[input][i] = 0;
      matrix[i][input] = 0;
      dfs(i);
      return;
    }
  }
}

int main() {
  int length;
  cin >> length;
  int min_char = 1000000;
  for (int i = 0; i < length; i++) {
    char a, b;
    cin >> a >> b;
    int x = a;
    int y = b;
    matrix[x][y] = 1;
    matrix[y][x] = 1;
    char_counts[x]++;
    char_counts[y]++;
    min_char = min(min_char, min(int(a), int(b)));
  }

  int odd_count = 0;
  vector<int> odd_nodes;
  vector<int> smallest;
  for (int i = 0; i < 150; i++) {
    if ((char_counts[i] % 2) == 1) {
      odd_count++;
      smallest.push_back(i);
    }
  }

  cout << min_char << " ";

  cout << "\n";

  if (odd_count == 0){
    dfs(min_char);
    cout << ans;
    return 0;
  }

  if (odd_count == 1){
    cout << "No Solution";
    return 0;
  }

  if (odd_count == 2){
    dfs(min(smallest[0], smallest[1]));
    cout << ans;
    return 0;
  }

  cout << "No Solution";//:)
  
  // cout << "afdasfddsafs";
}
/*
40
bc
cd
de
ef
fg
gh
hi
ij
jk
kl
lm
mn
no
op
pq
qr
rs
st
tu
uv
vw
wx
xy
yz
zA
AB
BC
CD
DE
EF
FG
GH
HI
IJ
JK
KL
LM
MN
NO
OP
*/


//PONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcb

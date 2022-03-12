
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <map>
#include <stdio.h>
using namespace std;
int largest (stack <int> stak){
    int largest = 0;
    while (!stak.empty()){
        if (largest < stak.top()){
            largest = stak.top();
        }
        stak.pop();
    }
    return largest;
}
int main() {
  int n;
    cin >> n;
    stack <int> stack;
    int a;
    for(int i = 0; i < n; i++){
        cin>>a;
        if(a == 0){
            cin >> a;
            stack.push(a);
        }else if(a == 1 && stack.size() > 0){
            stack.pop();
        }
        else if (a == 2){
            cout << largest(stack) << "\n";
        }
    }

}
// 33
// 0 1
// 0 2
// 2
// 0 4
// 0 2
// 2
// 1
// 2
// 1
// 1
// 2
// 1
// 2
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <map>
#include <stdio.h>
using namespace std;
int main() {
    int length, answers;
    cin >> length >> answers;
    map<int, int> input;
    cout << input[213123];
    return 0;
    int t;
    for (int i = 0; i < length; i++){
        cin >> t;
        input[t] = i + 1;
    }
    for (int i = 0; i < answers; i++){
        cin >> t;
        if (input[t] == 0){
            cout << length + 1;
        }
        else{
            cout << input[t];
        }
        cout << "\n";
    }

}
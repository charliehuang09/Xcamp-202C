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
using namespace std;
int input;

void get_num(vector<char> input){

    vector<int> nums;

    for (int i = 0; i < input.size(); i++){
        if (input[i] == ' '){
            
        }
        else{
            nums.push_back(i + 1);
        }
    }

    if (nums == 0){
        for (int i = 0; i < input.size(); i++){
            cout << i + 1;
            cout << input[i];
        }
        cout << input.size() + 1;
        cout << "\n";
    }
    return;
}

void dfs(vector<char> sym){
    if (sym.size() == 6){
        get_num(sym);
        return;
//        for (int i = 0; i < sym.size(); i++){
//            cout << sym[i] << "->";
//        }
//        cout << "\n";
//        return;
    }
    vector<char> newsym = sym;
    newsym.push_back(' ');
    dfs(newsym);
    newsym.pop_back();
    newsym.push_back('+');
    dfs(newsym);
    newsym.pop_back();
    newsym.push_back('-');
    dfs(newsym);
    newsym.pop_back();
    return;
}

int main() {
    cin >> input;
    vector<char> perameter;
    dfs(perameter);
}
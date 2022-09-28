#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;

struct node {
    string name;
    map<string, string> attributes;
    struct node * parent;
    vector<struct node *> children; 
};

int main() {
    vector<string> input;
    vector<string> queries;
    int N;
    int Q;
    cin >> N >> Q;
    for(int i = 0 ; i < N ; i++ ) {
        string s;
        std::cin >> s;
        input.push_back(s);
    }
    for(int j = 0 ; j < Q ; j++ ) {
        string s;
        cin >> s;
        queries.push_back(s);
    }
    node * head = nullptr;
    return 0;
}


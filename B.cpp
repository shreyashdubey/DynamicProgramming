#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input; 
    getline(cin, input); 

    stringstream ss(input); 
    string word; 
    vector<string> words; 
    char delimiter = ' '; 
    while (getline(ss, word, delimiter)) { 
        tokens.push_back(word); 
    } 
    string longest = "";
    for(auto i:words){
        if(i.size() > longest.size()) longest = i;
    }
    cout<<longest
    return 0; 
}

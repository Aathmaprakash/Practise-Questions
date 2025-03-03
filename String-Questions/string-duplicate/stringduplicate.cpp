#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string s = "abcDeaAbCdE";
    unordered_set<char> c;
    string finall;

    for (int i = 0; i < s.length(); i++) { 
        if (c.find(s[i]) == c.end()) { 
            c.insert(s[i]); 
            finall += s[i]; 
        }
        
    }

    
    cout << "Final string after removing duplicates: " << finall << endl;

    return 0;
}

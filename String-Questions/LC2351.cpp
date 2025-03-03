#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "eabcdeee"; 

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        for (int j = 0; j < i; j++) {
            if (c == s[j]) {
                cout << c << endl;  
                return 0;  
            }
        }
    }

    cout << -1 << endl;  
    return 0;
}

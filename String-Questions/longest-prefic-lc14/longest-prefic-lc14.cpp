#include <iostream>
#include <algorithm>

using namespace std;

string longest(string arr[], int size) {
    if (size == 0) return "";  // Edge case: empty array

    sort(arr, arr + size);  // Sorting the array

    string first = arr[0];
    string last = arr[size - 1];
    
    string result = "";
    int minLength = min(first.length(), last.length());

    for (int i = 0; i < minLength; i++) {
        if (first[i] != last[i]) {
            return result;
        }
        result += first[i];
    }

    return result;
}

int main() {
    string arr[] = {"flower", "flow", "flight"};
    int size = sizeof(arr) / sizeof(arr[0]);

    string result = longest(arr, size);

    cout << "Longest common prefix: " << result << endl;
    return 0;
}

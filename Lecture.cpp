#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;

    string str[m][2], str1[n];

    // Input the pairs of strings
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> str[i][j];
        }
    }

    // Input the strings to be compared
    for (int i = 0; i < n; i++) {
        cin >> str1[i];
    }

    // Compare and output the result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (str1[i] == str[j][0] || str1[i] == str[j][1]) {
                cout << ((str[j][0].length() <= str[j][1].length()) ? str[j][0] : str[j][1]) << " ";
                break;
            }
        }
    }

    return 0;
}
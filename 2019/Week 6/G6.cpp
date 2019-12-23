#include <bits/stdc++.h>

using namespace std;

int main() {
    char aux = '#';
    string input, output;
    getline(cin, input);

    if (input.length()%2 != 0) {
        cout << input << " --- not pair isograms" << endl;
        return 0;
    }

    output = input;
    sort(input.begin(), input.end());

    int idx = 0;
    while (true) {
        if (aux != '#') {
            if (input.find(aux) !=  string::npos) {
                cout << output << " --- not pair isograms" << endl;
                return 0;
            }
        }
        if (input[idx] == input[idx+1]) {
            aux = input[idx];
            input.erase(input.begin()+idx);
            input.erase(input.begin()+idx);
        }
        else {
            idx++;
            aux = '#';
        }
        if (input.length() == 1 || input.empty() || idx >= input.length()) break;
    }

    if (input.empty()) cout << output << " --- pair isograms" << endl;
    else cout << output << " --- not pair isograms" << endl;

    return 0;
}
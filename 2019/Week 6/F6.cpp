#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() { 
    int age1 = 0, age2 = 0;
    string first, second;
    getline(cin, first);
    getline(cin, second);
   
    sort(first.begin(), first.end(), greater<char>());
    sort(second.begin(), second.end(), greater<char>());

    if (first == second)  
        cout << "The two strings are the same age" << endl;
    else if (first > second) 
        cout << "First string is older" << endl;
    else 
        cout << "First string is younger" << endl;

}
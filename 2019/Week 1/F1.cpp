#include <bits/stdc++.h>

using namespace std; 
  
void swap(char *a, char *b) 
{ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
int main() 
{ 
    string input;
    cin >> input; 

    int i;
    for (i = input.length()-1; i > 0; i--) 
    {
        if (input[i] > input[i-1]) 
           break; 

        if (i == 1) {
            cout << "USELESS\n"; 
            return 0;
        }
    }

    int x = input[i-1], smallest = i; 
    for (int j = i+1; j < input.length(); j++) 
        if (input[j] > x && input[j] < input[smallest]) 
            smallest = j; 
  
    swap(&input[smallest], &input[i-1]); 
    sort(input.begin() + i, input.end()); 
  
    cout << input << '\n'; 
    
    return 0; 
} 
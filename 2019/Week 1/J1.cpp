#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int ship[2];
    int planet[2];
    float closest, dist;

    cin >> n;

    string location[n];
    closest = n*n;

    for (int i = 0; i < n; i++) 
    {
        cin >> location[i];
        for (int j = 0; j < n; j++) 
        {
            if(location[i][j] == 's') 
            {
                ship[0] = i;
                ship[1] = j;
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if(location[i][j] == 'p') 
            {
                dist = sqrt(pow((ship[0]-i), 2) + pow((ship[1]-j), 2));
                                
                if (dist < closest) 
                {
                    closest = dist;
                    planet[0] = i;
                    planet[1] = j;
                }
            }
        }
    }

    cout << '(' << ship[0] << ',' << ship[1] << "):";
    cout << '(' << planet[0] << ',' << planet[1] << "):";
    printf("%.2f\n", closest);

} 
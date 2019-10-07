#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string x;
    int sf[21][21];
    bool b, g, u;

    b = g = u = true;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> x;
        for (int j = 0; j < k; j++)
        {
            sf[i][j] = int(x[j]);
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k / 2; j++)
        {
            if (sf[i][j] != sf[i][k - j - 1])
                g = false;

            if (sf[j][i] != sf[k - j - 1][i])
                b = false;
        }
    }

    if (b && g)
        cout << "Magnificent\n";
    else if (b)
        cout << "Beautiful\n";
    else if (g)
        cout << "Graceful\n";
    else
        cout << "Useless\n";
}
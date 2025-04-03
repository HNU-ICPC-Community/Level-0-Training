// J. String Score

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str; // {V,W,X,Y,Z}
    cin >> str;

    int scr = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'V')
        {
            scr += 5;
        }
        else if (str[i] == 'W')
        {
            scr += 2;
        }
        else if (str[i] == 'X')
        {
            i++;
        }
        else if (str[i] == 'Y' and i + 1 < str.size())
        {
            str.push_back(str[i + 1]);
            i++;
        }
        else if (str[i] == 'Z' and i + 1 < str.size())
        {
            if (str[i + 1] == 'V')
            {
                scr /= 5;
                i++;
            }
            else if (str[i + 1] == 'W')
            {
                scr /= 2;
                i++;
            }
        }
    }
    cout << scr << endl;

    return 0;
}
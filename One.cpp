#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string s;
    bool oq = true;
    while(getline(cin, s))
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '"')
            {
                if(oq)
                    cout << "``";
                else
                    cout << "''";
                oq = !oq;
            }
            else
                cout << s[i];
        }
        cout << endl;
    }

    
    return 0; 
}
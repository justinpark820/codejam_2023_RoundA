#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int main() 
{
    int a;
    cin >> a;
    
    for(int case_num = 0; case_num < a; case_num++)
    {
        vector<char> temp(26);
        for(int i = 0; i < 26; i++)
            cin >> temp[i];
            
        int k;
        cin >> k;
        set<string> cont;
        for(int i = 0; i < k; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j < s.size(); j++)
                s[j] = temp[s[j] - 'A'];
            cont.insert(s);
        }
    
        if(cont.size() != k)
            cout << "Case #" << case_num + 1 << ": YES" << endl;
        else
            cout << "Case #" << case_num + 1 << ": NO" << endl;
    }
}
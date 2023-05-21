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
        int k;
        cin >> k;
        
        vector<int> cont;
        int temp;
        cin >> temp;
        cont.push_back(temp);
        for(int i = 1; i < k; i++)
        {
            cin >> temp;
            if(cont[cont.size() - 1] != temp)
                cont.push_back(temp);
        }
            
        set<int> cont2;
        for(int i = 0; i < cont.size(); i++)
            cont2.insert(cont[i]);
        
        if(cont.size() != cont2.size())
            cout << "Case #" << case_num + 1 << ": IMPOSSIBLE" << endl;
        else
        {
            cout << "Case #" << case_num + 1 << ": ";
            for(int i = 0; i < cont.size(); i++)
                cout << cont[i] << " ";
            cout << endl;
        }
    }
}
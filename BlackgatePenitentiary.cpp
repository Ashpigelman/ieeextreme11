#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> vName[1000];

int main()
{
    int n,height;
    int count=0;
    string name;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        cin >> name >> height;
        vName[height].push_back(name);
    }
    
    for(int i=120 ; i<251 ; i++)
    {
        sort(vName[i].begin(),vName[i].end());
        for(string tmp : vName[i])
        {
            cout << tmp << " ";
        }
        if(vName[i].size() > 0)
        {
            cout << (count+1) << " " << (count+vName[i].size()) << endl;
            count = count + vName[i].size();
        }
    }
    return 0;
}

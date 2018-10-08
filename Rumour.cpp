#include <iostream>

using namespace std;

int main() 
{
    int q;
    unsigned long long a,b;
    cin >> q;
    for(int i=0; i<q ;i++)
    {
        int count=0;
        cin >> a >> b;
        while(a!=b)
        {
            count++;
            if(a>b)
            a=a/2;
            else
            b=b/2;
        }
        
        cout << count << endl;
    }
    return 0;
}
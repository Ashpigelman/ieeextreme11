#include <iostream>

using namespace std;

int main() 
{
    int t,c,n;
    int w[201],f[1001];
    int knapMat[1001][1001];
    cin >> t;
    while(t--)
    {
        cin >> c >> n;
        for(int i=1; i<=n; i++)
        {
            cin >> w[i] >> f[i];
            for(int j=0; j <= c ; j++)
            {
                knapMat[i][j]=knapMat[i-1][j];
                if(j-w[i] >= 0)
                {
                    knapMat[i][j] = max(knapMat[i-1][j] , knapMat[i-1][j-w[i]]+f[i]);
                }
            }
        }
        cout << knapMat[n][c] << endl;
    }
    return 0;
}
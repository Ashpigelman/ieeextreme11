#include <iostream>

using namespace std;
#define maxRowCol 202

int main() 
{
    int matrix[maxRowCol][maxRowCol];
    int solution[maxRowCol][maxRowCol];
    int r,c;
    
    cin >> r >> c;
    for(int i=0;i<r;i++)
    {
        for(int j=0; j<c ; j++)
        {
            cin >> matrix[i][j];
        }
    }
    solution[r-1][c-1] = 1;
    for (int i=r-2; i >=0 ; i--)
    {
        solution[i][c-1]=max(solution[i+1][c-1] - matrix[i][c-1] , 1);
    }
    for(int j= c-2 ; j >=0 ; j--)
    {
         solution[r-1][j]=max(solution[r-1][j+1] - matrix[r-1][j], 1);
    }
    
    for(int i= r-2 ; i >= 0 ; i--)
    {
        for(int j=c-2; j >=0 ; j--)
        {
            int minSol = min(solution[i+1][j], solution[i][j+1]);
            solution[i][j] = max(minSol - matrix[i][j] , 1);
        }
    }
    cout << solution[0][0];
    return 0;
}


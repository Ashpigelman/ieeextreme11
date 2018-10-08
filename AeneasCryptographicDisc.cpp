#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;

double radius;
double size(double x, double y)
{
    double dis = min(fabs(x-y) , 360 - fabs(x-y));
    return radius*sqrt(2 - 2*cos(dis*M_PI/180));
}

int main()
{
    map <char,double> hmap;
    cin >> radius;
    for(int i=0; i<26 ; i++)
    {
        char word;
        double val;
        cin >> word >> val;
        hmap[word]=val;
    }
    
    cin.get();
    string str;
    getline(cin,str);
    
    int str_size=str.length();
    //char str1[100000000];
    // strcpy(str1, str);
   // cout << str << endl;
  // cout << str_size << endl;
    
    char first,last;
    double ans=radius;
    int check=0;
    first = str.at(check);
    while(isalpha(first)==0)
    {
        check++;
        first = str.at(check);
    }
    for(int j=check ; j<str_size-1 ; j++)
    {
        //first=str.at(j);
        //cout << first;
        last=str.at(j+1);
        if(isalpha(first))
        {
            if(isalpha(last))
            {
                first=toupper(first);
                last=toupper(last);
                ans += size(hmap[last],hmap[first]);
                first = last;
            }
        }
        
    }
    cout << (int)ceil(ans);

return 0;

}
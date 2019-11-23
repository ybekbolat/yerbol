#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int a = int(s[i])-48;
        if(a==0)
        {
            cout<<"aba";
        }
        else if(a==1)
        {
            cout<<"abe";
        }
        else if(a==2)
        {
            cout<<"abu";
        }
        else if(a==3)
        {
            cout<<"atu";
        }
        else if(a==4)
        {
            cout<<"asu";
        }
        else if(a==5)
        {
            cout<<"aru";
        }
        else if(a==6)
        {
            cout<<"oru";
        }
        else if(a==7)
        {
            cout<<"jan";
        }
        else if(a==8)
        {
            cout<<"el";
        }
        else if(a==9)
        {
            cout<<"kek";
        }
    }
}

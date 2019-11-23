#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int c=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++)
            c+=j;
        cout<<i<<" "<<c<<endl;
        c=0;
    }
}

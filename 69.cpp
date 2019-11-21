#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b, c;
cin>>a>>b>>c;
int p=(a+b+c)/2;
if(a+b>c && a+c>b && b+c>a){
cout<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
}
else{
cout<<"It is not a triangle";
}
return 0;
}

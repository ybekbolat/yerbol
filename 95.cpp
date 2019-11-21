#include <bits/stdc++.h>
using namespace std;
int main(){
int a,n;
cin>>a>>n;
int number=1;
for(int i=1; i<=n; i++){

number*=(a+i)*(a+i);

}
cout<<number;
}

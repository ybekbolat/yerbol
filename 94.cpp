#include <bits/stdc++.h>
using namespace std;
int main(){
double n;
cin>>n;
double number=0.0;
for(int i=1;i<n; i++){
number+=(1/double(i));
}
cout<<number;
system("pause");
return 0;
} 



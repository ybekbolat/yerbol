#include <bits/stdc++.h>
using namespace std;
int main(){
double number=0.0;
for(int i=2; i<=9; i++){
number+=((double )i/double(i+1));
}
cout<<number;
system("pause");
return 0;
}

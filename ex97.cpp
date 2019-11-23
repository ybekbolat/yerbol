#include <iostream>
using namespace std;
int main(){
	int n, s = 1, d = 0;
	cin>>n;
	int i = 0;
	while(i+2<=2*n){
		s = s*(i+1)*(i+2);
		d = d + s;
		i = i+2;
	}
	cout<<d;
}

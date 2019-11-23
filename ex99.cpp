#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	for(int i = 1000; i<=9999; i++){
		a = i/1000;
		b = i%1000/100;
		c = i%100/10;
		d = i%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<i<<endl;
		}
	}
} 

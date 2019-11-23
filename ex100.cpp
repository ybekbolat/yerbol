#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	for(int i = 1000; i<=9999; i++){
		a = i/1000;
		b = i%1000/100;
		c = i%100/10;
		d = i%10;
		if(a!=5 && b!=5 && c!=5 && d!=5 && a!=6 && b!=6 && c!=6 && d!=6){
			cout<<i<<endl;
		}
	}
} 

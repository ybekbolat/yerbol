#include <iostream>
#include <cmath>
using namespace std;
int main(){
	for(int i = 0; i<10; i++){
		cout<<10*pow(1.1,i)<<" ";
	}
	cout<<endl;
	double sum = 0;
	for(int i = 0; i<7; i++){
		sum = sum + 10*pow(1.1,i);
	}
	cout<<sum<<endl<<"enter number of days:"<<endl;
	double n, sum2=0;
	cin>>n;
	for(int i = 0; i<n; i++){
		sum2 = sum2 + 10*pow(1.1,i);
	}
	cout<<sum2<<endl<<"Ostanovi uvelichevat' distance posle ";
	double a=0, r=-1;
	while(a<80){
		r++;
		a=10*pow(1.1,r);
	}
	cout<<r-1<<" kruga. Na etom kruge distance = "<<10*pow(1.1,r-1)<<", a to dal'she budet bol'she 80";
}

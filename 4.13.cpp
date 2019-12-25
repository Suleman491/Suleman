#include <iostream>
using namespace std;
int main() {
	double liters,kilometer,kms,average;
	int counter;
	counter=0;
	while(kilometer!=-1){
		counter++;
	cout<<"Enter liters used in tank(or -1 to quit)"<<endl;
	cin>>liters;
		cout<<" Please Enter distance in kilometer"<<endl;
		cin>>kilometer;
kms=kilometer/liters;
cout<<"Kms per litter this trip"<<kms<<endl;
average=kms/counter;
cout<<"Total kms per liter: "<<average<<endl;

cin>>kilometer;
	}

	return 0;
}

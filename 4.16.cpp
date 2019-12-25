#include<iostream>
using namespace std;
 int main(){
 	double laps,sponrate,stcontri,total=0;
	 while(laps!=-1){
	 	cout<<"Enter laps completed(-1 to exit): ";
	 	cin>>laps;
	 	cout<<"Enter sponsorship rate: ";
	 	cin>>sponrate;
	 	stcontri=laps*sponrate;
	 	cout<<"Students contribution is: "<<stcontri<<endl;
	 	total=total+stcontri;
	 	cout<<"Total fund raised: "<<total<<endl;
	 } 
 }

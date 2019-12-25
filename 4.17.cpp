#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int fmax=0,smax=0,tmax=0;
	cout<<"Enter Ten Numbers: ";
    while(a<=10){
        	cin>>b;	
			
		if(fmax<b){
			tmax=smax;
			smax=fmax;
			fmax=b;
		}else if(tmax<b){
			tmax=smax;
			smax=b;
		}else if(smax<b){
			tmax=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<fmax<<endl;
         cout<<"Second Maximum Number is: "<<smax<<endl;
          cout<<"Third Maximum Number is: "<<tmax<<endl;
}

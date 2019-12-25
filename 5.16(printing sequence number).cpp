#include <iostream>//bar char printing program
using namespace std;

int main() {
	int number;
	cout<<"Enter Five Numbers Between 1 and 9: ";
	for(int n=1;n<=5; n++){
		cin>>number;
		if(number<1||9<number){
			cout<<"number"<<number <<"is out of Range "<<endl;
			continue;
		}
	for(int i=1;i<=2;i++){
		for(int j=1;j<=number;j++)
		cout<<number;
		cout<<endl;
	}
	}
	return 0;
}

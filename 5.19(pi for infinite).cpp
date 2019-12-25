#include <iostream>
using namespace std;

int main() {
	int counter=0;
	double pi=0.0;
	cout<<"Step\tpi\n"<<endl;
	for(int i=1;i<=200000;i++){
	double term=4.0/(i*2-1);
while(term==3.14159){
	cout<<i<<"\t"<<term<<endl;
	break;
}

}
}

#include <iostream>
using namespace std;

int main() {
	cout<<"side1  \tside2  \thypotenuse"<<endl;
	for(int hypotenuse=1;hypotenuse<=500;hypotenuse++){
		for(int side1=1;side1<=hypotenuse;side1++){
			for(int side2=1;side2<=side1;side2++){
				if(hypotenuse*hypotenuse==side1*side1+side2*side2)
				cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<endl;
			}
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	for(int i=1;i<=100;i++){
		if(i==50){
			continue;
		}
		cout<<i<<"\n";
	}
	return 0;
}

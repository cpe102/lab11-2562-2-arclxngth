#include<iostream>

using namespace std;

unsigned int gcd(int,int);


int main(){
	cout << gcd(25,15) << "\n";
	cout << gcd(144,60) << "\n";
	cout << gcd(60,144) << "\n";
	cout << gcd(1,69) << "\n";
	cout << gcd(17,19) << "\n";
	cout << gcd(51,255) << "\n";
	
	return 0;
}

unsigned int gcd(int x, int y){

	int sum;

	if(y>x){

		if(y%x==0)	return x;

		else {

			sum = gcd(x,y%x);
			return sum;
		}
	}
	else{
		
		if(x%y==0)	return y;

		else {

			sum = gcd(y,x%y);
			return sum;
	}
	}

	
}

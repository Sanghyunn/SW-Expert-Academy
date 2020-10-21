#include <iostream>

using namespace std;

int pow_pow(int a, int b){
	if(b == 0) return 1;

	else return a * pow_pow(a, b-1);}

int main(){
	for(int i = 0; i < 10; i++){
		int num; cin >> num;

		int a, b; cin >> a >> b;

		cout << '#' << num << ' ' << pow_pow(a, b) << endl;}

		return 0;}



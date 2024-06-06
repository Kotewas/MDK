#include <iostream>
using namespace std;
int main(){
	int count = 0; int sum = 0;
	int a,b;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите границы: ";
	cin >> a >> b;
	for(int i = a; i<=b;i++){
		if(i >= 100 && i <= 999){
		sum = 0;
		sum = i / 100 + i / 10 % 10 + i % 10;
			if ( sum <= 10){
				count++;
				cout << i << " ";
			}
		}	
	}
	cout << endl << count;
	return 0;
}

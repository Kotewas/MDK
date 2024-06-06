#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int n,m;
	cout << "Введите размеры двумерного массива(n,m): ";
	cin >> n >> m;
	int temp = 1;
	int count = 10;
	int mas[n][m];
	
	int min;
	
	///////////////////////////
	
	for(int i=0; i < n; i++){
		for(int j = 0; j < m; j++){
			mas[i][j] = temp++; // Задание 1	
		}
	}
	
	cout <<"\nПервое задание\n";
		for(int i=0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout.width(3);
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	
	for(int i=0; i < n; i++){
		min = mas[i][0];
		for(int j = 0; j < m; j++){
			if(min > mas[j][i])
				min = mas[j][i];
		}
		cout.width(3);
		cout << min << " ";
	}
	
	
	////////////////////////////
	
	temp = 2;
	for(int i=0; i < n; i++){		
		for(int j = 0; j < i; j++){ // Задание 2
			mas[i][j] = 0;
		}
		int j = i;
		mas[i][j] = 1;
		
		for(int j = i + 1; j < n; j++){
			mas[i][j] = temp++;
		}
		temp = 2;
	}
		
	cout <<"\nВторое задание\n";
	for(int i=0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout.width(3);
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
		for(int i=0; i < n; i++){
		min = mas[i][0];
		for(int j = 0; j < m; j++){
			if(min > mas[j][i])
				min = mas[j][i];
		}
		cout.width(3);
		cout << min << " ";
	}
	
	///////////////////////////////////
	
	for(int i=0; i < n; i++){
 		for(int j = 0; j < n; j++){
 			if(j == n - 1 - i) mas[i][j] =  1;
 			else if(j < n - 1 - i) mas[i][j] = count--;
 			else mas[i][j]  = 0 ;
		 }
		 count = 10 - i - 1;
	}
	
	cout <<"\nТретье задание\n";
	for(int i=0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout.width(3);
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
		for(int i=0; i < n; i++){
		min = mas[i][0];
		for(int j = 0; j < m; j++){
			if(min > mas[j][i])
				min = mas[j][i];
		}
		cout.width(3);
		cout << min << " ";
	}

	
}

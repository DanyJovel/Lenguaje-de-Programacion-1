#include <iostream>
using namespace std;

int main(){
	int a, b,c;
	
	cout << "Ingrese numero a: ";
	cin >> a;
	cout << "Ingrese numero b: ";
	cin >> b;
	cout << "Ingrese numero c: ";
	cin >> c;
	
	
	if((a > b) && (a > c)){
		cout << "El numero mayor es " << a << endl;
	}
		else{
			if ((b > a) && (b > c)){
				cout << "El numero mayor es " << b << endl;
			}
			else{
				if ((c > a) && (c > b)){
				cout << "El numero mayor es " << c << endl;
			}
		}
					
	if((a == b) && (b == c) && (a == c)){
	cout << "El valor de a, b y c son iguales" <<endl;
	}
	else{
		if((a == b) && (a > c) && (b > c))
		cout << "El valor de a y b son iguales y mayores que c";
		else{
			if((a == c) && (a > b) && (c > b))
			cout << "El valor de a y c son iguales y mayores que b";
			else{
				if((b == c) && (b > a) && (c > a))
				cout << "El valor de b y c son iguales y mayores que a";
			}
		}
	}
return 0;
}
}

#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int x;
	int db = 1;
	int i = 0;
	int tomb[db];
	do{
		cin >> x;
		if((5 < x) && (x < 400) && (isdigit(x))){
		db+=1;
		i+=1;
		tomb[i-1] = x;
		}else if(isdigit(x)){
		cout << "basszad meg";
		}else cout << "nem megfelelo tart";
	}while ((db == 15) || (x == ' '));
	for(i = 0; i <= db; i++){
		cout << tomb[i];
		}
	return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	char jeghegy[5][5];
	int a, b = 0;
	for (int i=0;i<5;i++){
		cout << "Kerem a jeghegy " << i << ". sorat: " << endl;
		cin >> a;
		cin >> b;
		if(a<b && a<5 && b<5){
			for (int j=a; j<b; j++){
				jeghegy[i][j]='#';
			}
		}
	}
	for (int i=0;i<5;i++){
		for (int j=0; j <5;j++){
			cout << jeghegy[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


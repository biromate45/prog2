#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;	

void start(char tomb[10][10]){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			tomb[i][j] = '.';
		}
	}
}
void kifele(char tomb[10][10]){
	cout << "  ";
	for (int i = 0; i < 10; i++){
		char a = 'A'+i;
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < 10; i++){
		if (i < 9){
		cout << "0" <<  i + 1;
		}else cout <<  i + 1;
		for (int j = 0; j < 10; j++){
			cout << tomb[i][j];
		}
	cout <<endl;
	}
}

bool sorteszt(char tomb[10][10], int s, int o){   //s=sor(x),o=oszlop(y)
	int db; //mennyi van egymás mellett
	for (int i=0;tomb[s][o+i]!=tomb[s][o];i++)
		db++;
	return db>=5;
}

int main(){
	char tomb[10][10];
	start(tomb);
	
	bool nyert = false;
	for(int ny=0; !nyert; ny++){
		if(ny % 2 == 0 )
		cout << "1. jatekos:";
		else
		cout << "2. jatekos:";
		int x, y;	
		cin >> x >> y;
		if((x<=10)&&(y<=10)&&(x>0)&&(y>0)){
			if(!(tomb[x-1][y-1]=='X')&& !(tomb[x-1][y-1]=='O')){
			if(ny % 2 == 0){
				tomb[x-1][y-1]='X';
			}else
				tomb[x-1][y-1]='O';	
			cout << endl;
			kifele(tomb);
			} else
			ny-=1;
		} else
		ny-=1;
		if (ny==4) nyert = true;
	}
	
	

	return 0;
}


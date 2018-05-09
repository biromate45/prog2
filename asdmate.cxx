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



int main(){
	char tomb[10][10];
	start(tomb);
	
	bool nyert = false;
	int dbx;
	int dbo;
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
		int lepx = 0;
		int lepy = 0;
		lepx = x;
		lepy = y;
		if(ny % 2 == 0 ){
			while ((tomb[lepx][y] != 'X') && (lepx < 10)){
				lepx++;
				dbx++;
			}
			lepx = lepx - (dbx + 1);
			while ((tomb[lepx][y] != 'X') && (lepx > 0)){
				lepx--;
				dbx++;
			}
			
			if (dbx != 5){
				dbx = 0;
			}
			while ((tomb[x][lepy] != 'X') && (lepx < 10)){
				lepy++;
				dbx++;
			}
			lepy = lepy - (dbx + 1);
			while ((tomb[x][lepy] != 'X') && (lepx > 0)){
				lepy--;
				dbx++;
			}
			if (dbx != 5){
				dbx = 0;
			}
			while ((tomb[lepx][lepy] != 'X') && (lepx < 10) && (lepy < 10)){
				lepy++;
				lepx++;
				dbx++;
			}
			lepy = lepy - (dbx + 1);
			while ((tomb[lepx][lepy] != 'X') && (lepx > 0)&& (lepy > 0)){
				lepy--;
				lepx--;
				dbx++;
			}
			if (dbx != 5){
				dbx = 0;
			}
			while ((tomb[lepx][lepy] != 'X') && (lepx < 10) && (lepy > 0)){
				lepy--;
				lepx++;
				dbx++;
			}
			lepy = lepy - (dbx + 1);
			while ((tomb[lepx][lepy] != 'X') && (lepx > 0)&& (lepy < 10)){
				lepy++;
				lepx--;
				dbx++;
			}
			if (dbx != 5){
				dbx = 0;
			}
		}
		if(ny % 2 != 0 ){
			while ((tomb[lepx][y] != 'X') && (lepx < 10)){
				lepx++;
				dbo++;
			}
			lepx = lepx - (dbo + 1);
			while ((tomb[lepx][y] != 'X') && (lepx > 0)){
				lepx--;
				dbo++;
			}
			
			if (dbo != 5){
				dbo = 0;
			}
			while ((tomb[x][lepy] != 'X') && (lepx < 10)){
				lepy++;
				dbo++;
			}
			lepy = lepy - (dbo + 1);
			while ((tomb[x][lepy] != 'X') && (lepx > 0)){
				lepy--;
				dbo++;
			}
			if (dbo != 5){
				dbo = 0;
			}
			while ((tomb[lepx][lepy] != 'X') && (lepx < 10) && (lepy < 10)){
				lepy++;
				lepx++;
				dbo++;
			}
			lepy = lepy - (dbx + 1);
			while ((tomb[lepx][lepy] != 'X') && (lepx > 0)&& (lepy > 0)){
				lepy--;
				lepx--;
				dbo++;
			}
			if (dbo != 5){
				dbo = 0;
			}
			while ((tomb[lepx][lepy] != 'X') && (lepx < 10) && (lepy > 0)){
				lepy--;
				lepx++;
				dbo++;
			}
			lepy = lepy - (dbo + 1);
			while ((tomb[lepx][lepy] != 'X') && (lepx > 0)&& (lepy < 10)){
				lepy++;
				lepx--;
				dbo++;
			}
			if (dbo != 5){
				dbo = 0;
			}
		}
		if(dbx == 5){
			cout << "1. jatekos nyert!";
			nyert = true;
		}
		if(dbo == 5){
			cout << "2. jatekos nyert!";
			nyert = true;
		}
	}
	return 0;
}



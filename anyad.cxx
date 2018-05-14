#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

double AtlagFrissit(double eddigi, double uj, int db){
	double ujatlag = (eddigi*db+uj)/(db+1);
	return ujatlag;
}

int main(){
	bool jo = true;
	double szam, atlag;
	int db;
	atlag=0;
	db=0;
	do{
		cin >> szam;
		jo = ((szam > 5) && (szam < 400));
		if (jo){
			atlag = AtlagFrissit(atlag, szam, db);
			db++;
		}
	}while (jo);
	cout << atlag;
	
}

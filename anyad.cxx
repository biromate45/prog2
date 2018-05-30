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
	bool szame = true;
	double szam, atlag;
	int db;
	atlag=0;
	db=0;
	do{
			cin >> szam;
			szame = szam > 0;
		if(szame){
			jo = ((szam > 5) && (szam < 400));
			if (jo){
				atlag = AtlagFrissit(atlag, szam, db);
				db++;
			}else{
			cout << "Nem mengfelelo tartomany! Az eddigi atlag: ";
			}
		}else cout << "nem szam";
	}while (getline(cin, szam) && szam[0.00] != '\0')
	;cout << atlag;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	char ime [30];
	char prezime [30];
	int x;
	cout << "upisi ime: "; cin >> ime; //upisuje ime
	cout << "upisi prezime: "; cin >> prezime; //upisuje prezime
	cout << "upisi godine: "; cin >> x; //upisuje godine
	if (x >= 18 && x <50) cout << "izvolite, sto cete popiti?" << endl;
	else cout << "zao mi je, niste punoljetni ili ste prestari :(" << endl;
	return 0;
}
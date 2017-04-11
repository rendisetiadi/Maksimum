#include <iostream>
using namespace std;
//variable global
int a, b;

int main () {
	cout << "Nama	: Rendi Setiadi"<<endl;
	cout << "NPM	: 16.111.241"<<endl;
  cout << "Masukan Nilai a : "; cin >> a ; cout << endl;
  cout << "Masukan Nilai b : "; cin >> b ; cout << endl;
  if (a<b) {
    cout << "Nilai Maksimum Adalah "<<b;
  }
    else cout << "Nilai Maksimum Adalah "<<a;
return 0;
}
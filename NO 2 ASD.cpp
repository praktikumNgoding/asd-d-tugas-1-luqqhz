#include <iostream>
#include <cmath>
using namespace std;
typedef struct bilkompleks
{
	int num;
	char kar;
};
bilkompleks A, B, C, D;

void MENU()

{
	A.num = 7;
	B.num = 5;
	B.kar = 'i';
	C.num = 2;
	D.num = 9;
	D.kar = 'i';


	cout << "A = " << A.num << endl;
	cout << "B = " << B.num << B.kar << endl;
	cout << "C = " << C.num << endl;
	cout << "D = " << D.num << D.kar << endl;
}
    void penambahan() {
	cout << A.num + C.num << " + " << B.num + D.num << D.kar << endl;}
	void pengurangan() {
	cout << A.num - C.num << " + " << B.num - D.num << D.kar << endl;}
	void perkalian() {
	int h1 = (A.num * C.num) - (B.num * D.num);
	int h2 = (A.num * D.num) - (B.num * C.num);
	cout << h1 + h2 << D.kar << endl;}
    void pembagian() {
	int l, q, h, z;
	l = ((A.num * C.num) + (B.num * D.num));
	q = (pow(A.num, 7) + pow(B.num, 7));
	h = ((B.num * C.num) - (A.num * D.num));
	z = (pow(C.num, 7) + pow(D.num, 7));
	cout << ((l / q) + (h / z)) << D.kar << endl;}

int main()
{
	MENU();
	int OPTION;
	do
	{     cout << "\nOperasi aritmatika dasar untuk bilangan kompleks" << endl;
		cout << "\nPilih operasi yang ingin digunakan : " << endl;
		cout << "1. Penambahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. EXIT\n" << endl;
		cout << "OPSI PILIHAN : "; cin >> OPTION;

		if (OPTION == 1)

		{penambahan();}

		else if (OPTION == 2)

		{pengurangan();}

		else if (OPTION == 3)

		{perkalian();}

		else if (OPTION == 4)

		{pembagian();}

		else if (OPTION == 5)

		{break;}

		else
		{cout << "OPTION ERROR" << endl;}
	} while (true);
    return 0;
}

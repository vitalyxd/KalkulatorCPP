#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>
using namespace std;

int main() {

	double prviBroj;
	double drugiBroj;
	double rezultat;
	string unosBroja;
	string unosPredznaka;

	while (true) {

		cout << "Dobrodosli u moj kalkulator, ako zelite izaci iz programa upisite 'PREKID'\n";
		cout << "Unesi prvi broj: ";
		cin >> unosBroja;

		if (unosBroja == "PREKID") {

			cout << "Program se gasi za par sekundi!\n";
			this_thread::sleep_for(chrono::seconds(3));
			exit(0);
		}
		else {
			prviBroj = stod(unosBroja);
		}


		cout << "Unesite valjani matematicki predznak za izracunavanje dvaju broja (+,-,*,/): ";
		cin >> unosPredznaka;

		if (unosPredznaka == "PREKID") {

			cout << "Program se gasi za par sekundi!\n";
			this_thread::sleep_for(chrono::seconds(3));
			exit(0);
		}

		cout << "Unesi drugi broj: ";
		cin >> unosBroja;

		if (unosBroja == "PREKID") {

			cout << "Program se gasi za par sekundi!";
			this_thread::sleep_for(chrono::seconds(3));
			exit(0);
		}
		else {
			drugiBroj = stod(unosBroja);
		}

		switch (unosPredznaka[0]) {

		case'+':
			rezultat = prviBroj + drugiBroj;
			cout << "Zbroj iznosi " << rezultat << "\n";
			break;

		case'-':
			rezultat = prviBroj - drugiBroj;
			cout << "Razlika iznosi " << rezultat << "\n";
			break;

		case'*':
			rezultat = prviBroj + drugiBroj;
			cout << "Umnozak iznosi " << rezultat << "\n";
			break;

		case'/':
			rezultat = prviBroj / drugiBroj;
			cout << "Kolicnik iznosi " << rezultat << "\n";
			break;

		default:
			cout << "Pogreska u racunanju, kalkulator se resetira";
			continue;
		}
	}
	return 0;
}

	



	
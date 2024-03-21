#include <iostream>
using namespace std;

int main() {

	double prviBroj;
	double drugiBroj;
	double res;
	char matematickaOperacija;

	while (true) {

		cout << "Unesi matematicku operaciju koju zelis izvrsiti: ";
		cin << matematickaOperacija;

		switch (matematickaOperacija) {

		case +:
			prviBroj + drugiBroj = res
				cout << "Zbroj iznosi: " << res;
			break;
		case -:
			prviBroj - drugiBroj = res
				cout << "Razlika iznosi: " << res;
			break;
		case *:
			prviBroj * drugiBroj = res
				cout << "Umnozak iznosi: " << res;
			break;
		case /:
			prviBroj / drugiBroj = res
				cout << "Razlika iznosi: " << res;
			if (drugiBroj == 0) {

				cout <<"Djeljenje s nulom nije moguce!"
			}
			break;
		default:
			cout << "Pogreska u racunanju. Pokusajte ponovno"

				continue;
		}
	}
	
}
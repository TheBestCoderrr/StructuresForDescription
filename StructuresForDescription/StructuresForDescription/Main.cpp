#include <iostream>
#include <time.h>

#include "Exersize1.h"
#include "Exersize2.h"
#include "Exersize3.h"

using namespace std;

int main() {
	srand(time(0));

	Product CPU;
	InitProductCharacteristics(CPU);
	CPU.architecture == 0 ? InitAMD(CPU) : InitIntel(CPU);
	cout << endl;
	PrintProduct(CPU);
	cout << endl;

	Car car;
	InitCar(car);
	cout << endl;
	PrintCar(car);
	cout << endl;

	Apartment apartments[COUNTAPARTMENTS];
	int percent, UserNumber;
	int  UserChoice = -1, profit = 0;

	cout << "Menu:\n0 - Exit\n1 - EditApartment\n2 - Buy apartment\n3 - Reserved apartment\n4 - Print all apartments\n5 - Print free apartments"
		<< "\n6 - Print reserved apartaments\n7 - Print sold apartaments\n8 - Print profit" << endl;
	InitApartments(apartments);
	percent = rand() % 20 + 10;
	while (UserChoice != 0) {
		cout << "Enter variant(menu): ";
		cin >> UserChoice;
		switch (UserChoice) {
			case 0:
				break;
			case 1:
				cout << "Enter apartment number: ";
				cin >> UserNumber;
				if(FindApartmentIndex(apartments, UserNumber) == -1)
					cout << "Invalid number" << endl;
				else
					EditApartment(apartments, FindApartmentIndex(apartments, UserNumber));
				break;
			case 2:
				cout << "Enter apartment number: ";
				cin >> UserNumber;
				if(FindApartmentIndex(apartments, UserNumber) == -1)
					cout << "Invalid number" << endl;
				else
					if (apartments[FindApartmentIndex(apartments, UserNumber)].status <= 1) {
						SellApartment(apartments, FindApartmentIndex(apartments, UserNumber));
						profit += SumApartment(apartments, FindApartmentIndex(apartments, UserNumber), percent);
					}
				break;
			case 3:
				cout << "Enter apartment number: ";
				cin >> UserNumber;
				if(FindApartmentIndex(apartments, UserNumber) == -1)
					cout << "Invalid number" << endl;
				else
					if(apartments[FindApartmentIndex(apartments, UserNumber)].status == 0)
						ReserveApartment(apartments, FindApartmentIndex(apartments, UserNumber));
				break;
			case 4:
				PrintAllApartments(apartments);
				break;
			case 5:
				PrintFreeApartments(apartments);
				break;
			case 6:
				PrintReservedApartments(apartments);
				break;
			case 7:
				PrintSoldApartments(apartments);
				break;
			case 8:
				cout << "Profit = " << profit << endl;
				break;
			default:
				cout << "Invalid variant!" << endl;
				break;
		}
	}
}
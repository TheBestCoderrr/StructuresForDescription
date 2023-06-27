#include <iostream>
#include <stdlib.h>
#include "Apartment.h"
#include "SIZES.h"

using namespace std;

void InitApartments(Apartment apartments[]) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		apartments[i].number = rand() % 1001;
		apartments[i].CountRooms = rand() % 5 + 1;
		apartments[i].area = rand() % 251 + 100;
		apartments[i].price = rand() % 100001 + 20000;
		apartments[i].status = 0;
	}
}

int FindApartmentIndex(const Apartment apartments[], const int UserNumber) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		if (UserNumber == apartments[i].number)
			return i;
	}
	return -1;
}

void EditApartment(Apartment apartments[], const int index) {
	int UserChoice = -1;
	cout << "What you want edit?\n0 - None\n1 - Price\n2 - Status\nEnter variant: ";
	while (UserChoice != 0) {
		cout << "Enter variant: ";
		cin >> UserChoice;
		switch (UserChoice) {
			case 0:
				break;
			case 1:
				cout << "Enter new price: ";
				cin >> apartments[index].price;
				break;
			case 2:
				cout << "Enter status: ";
				cin >> apartments[index].status;
				break;
			default:
				cout << "Invalid variant!" << endl;
				break;
		}
	}
}

void SellApartment(Apartment apartments[], const int index) {
	int UserPrice;
	cout << "Enter Your price: ";
	cin >> UserPrice;
	if (UserPrice >= apartments[index].price)
		apartments[index].status = 2;
	else
		cout << "Not enough money!" << endl;
}

void ReserveApartment(Apartment apartments[], const int index) {
	apartments[index].status = 1;
}

void PrintAllApartments(const Apartment apartments[]) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		cout << "Number: " << apartments[i].number << endl;
		cout << "Count rooms: " << apartments[i].CountRooms << endl;
		cout << "Area: " << apartments[i].area << endl;
		cout << "Price: " << apartments[i].price << endl;
		cout << "Status: ";
		switch (apartments[i].status) {
			case 0:
				cout << "Free";
				break;
			case 1:
				cout << "Reserved";
				break;
			case 2:
				cout << "Sold";
				break;
		}
		cout << endl << endl;
	}
}

void PrintFreeApartments(const Apartment apartments[]) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		if (apartments[i].status == 0) {
			cout << "Number: " << apartments[i].number << endl;
			cout << "Count rooms: " << apartments[i].CountRooms << endl;
			cout << "Area: " << apartments[i].area << endl;
			cout << "Price: " << apartments[i].price << endl;
			cout << "Status: Free";
			cout << endl << endl;
		}
	}
}

void PrintReservedApartments(const Apartment apartments[]) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		if (apartments[i].status == 1) {
			cout << "Number: " << apartments[i].number << endl;
			cout << "Count rooms: " << apartments[i].CountRooms << endl;
			cout << "Area: " << apartments[i].area << endl;
			cout << "Price: " << apartments[i].price << endl;
			cout << "Status: Reserved";
			cout << endl << endl;
		}
	}
}

void PrintSoldApartments(const Apartment apartments[]) {
	for (int i = 0; i < COUNTAPARTMENTS; i++) {
		if (apartments[i].status == 2) {
			cout << "Number: " << apartments[i].number << endl;
			cout << "Count rooms: " << apartments[i].CountRooms << endl;
			cout << "Area: " << apartments[i].area << endl;
			cout << "Price: " << apartments[i].price << endl;
			cout << "Status: Sold";
			cout << endl << endl;
		}
	}
}

int SumApartment(const Apartment apartments[], int index, int percent) {
	return apartments[index].price / 100 * percent;
}


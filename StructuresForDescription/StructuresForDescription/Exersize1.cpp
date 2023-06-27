#include <iostream>
#include <string.h>
#include "ManufacturersAndProduct.h"

using namespace std;

void InitProductCharacteristics(Product& product) {
	cout << "Enter CPU family:";
	cin.getline(product.CPUfamily, TEXTSIZE);
	cout << "Enter socket:";
	cin.getline(product.socket, TEXTSIZE);
	cout << "Enter generation CPU:";
	cin >> product.generation;
	cout << "Enter cores CPU:";
	cin >> product.CountCores;
	cout << "Enter threads CPU:";
	cin >> product.CountThreads;
	cout << "Enter architecture CPU\n0 - PGA\n1- LGA\nEnter variant: ";
	cin >> product.architecture;
	cout << "Enter Clock Frequency:";
	cin >> product.ClockFrequency;
	cout << "Enter Max Clock Frequency:";
	cin >> product.MaxClockFrequency;
}

void InitAMD(Product& product) {
	strcpy_s(product.manufacturer.name, "AMD");
	product.manufacturer.phone = 4087493060;
	strcpy_s(product.manufacturer.adress, "HW.Support@amd.com");
}

void InitIntel(Product& product) {
	strcpy_s(product.manufacturer.name, "INTEL");
	product.manufacturer.phone = 18005383373;
	strcpy_s(product.manufacturer.adress, "programs@intel.com");
}

void PrintProduct(const Product product) {
	cout << "Manufacturer: ";
	for (int i = 0; i < strlen(product.manufacturer.name); i++)
		cout << product.manufacturer.name[i];
	cout << endl;
	cout << "Phone: " << product.manufacturer.phone << endl;
	cout << "Adress: ";
	for (int i = 0; i < strlen(product.manufacturer.adress); i++)
		cout << product.manufacturer.adress[i];
	cout << endl;
	cout << "CPU family: ";
	for (int i = 0; i < strlen(product.CPUfamily); i++)
		cout << product.CPUfamily[i];
	cout << endl;
	cout << "Socket:";
	for (int i = 0; i < strlen(product.socket); i++)
		cout << product.socket[i];
	cout << endl;
	cout << "Generation CPU:" << product.generation << endl;
	cout << "Cores CPU:" << product.CountCores << endl;;
	cout << "Threads CPU:" << product.CountThreads << endl;
	cout << "Architecture CPU:";
	(product.architecture == 0) ? cout << "PGA" : cout << "LGA";
	cout << endl;
	cout << "Clock Frequency:" << product.ClockFrequency << endl;
	cout << "Max Clock Frequency:" << product.MaxClockFrequency << endl;
}
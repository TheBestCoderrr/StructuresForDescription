#include <iostream>
#include <string.h>
#include "Car.h"

using namespace std;

void InitCar(Car& car) {
	cout << "Enter model car: ";
	cin.getline(car.model, TEXTSIZE);
	cout << "Enter amout engine: ";
	cin >> car.engine.amount;
	cout << "Enter power engine: ";
	cin >> car.engine.power;
	cout << "Enter width body: ";
	cin >> car.carbody.width;
	cout << "Enter height body: ";
	cin >> car.carbody.height;
	cout << "Enter color body: ";
	cin >> car.carbody.color;
}

void PrintCar(const Car car) {
	cout << "Model car: ";
	for (int i = 0; i < strlen(car.model); i++)
		cout << car.model[i];
	cout << endl;
	cout << "Amout engine: " << car.engine.amount << endl;
	cout << "Power engine: " << car.engine.power << endl;
	cout << "Width body: " << car.carbody.width << endl;
	cout << "Height body: " << car.carbody.height << endl;
	cout << "Color body: " << car.carbody.color << endl;
}
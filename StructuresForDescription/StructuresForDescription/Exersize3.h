#pragma once
#include "Apartment.h"
void InitApartments(Apartment apartmens[]);
int FindApartmentIndex(const Apartment apartments[], const int UserNumber);
void EditApartment(Apartment apartments[], const int index);
void SellApartment(Apartment apartmens[], const int index);
void ReserveApartment(Apartment apartments[], const int index);
void PrintAllApartments(const Apartment apartments[]);
void PrintFreeApartments(const Apartment apartments[]);
void PrintReservedApartments(const Apartment apartments[]);
void PrintSoldApartments(const Apartment apartments[]);
int SumApartment(const Apartment apartments[], int index, int percent);
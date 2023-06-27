#pragma once
#define TEXTSIZE 50
struct Manufacturer {
	char name[TEXTSIZE];
	long long int phone;
	char adress[TEXTSIZE];
};

struct Product {
	char CPUfamily[TEXTSIZE];
	char socket[TEXTSIZE];
	int generation;
	int CountCores;
	int CountThreads;
	bool architecture;
	int ClockFrequency;
	float MaxClockFrequency;
	Manufacturer manufacturer;
};
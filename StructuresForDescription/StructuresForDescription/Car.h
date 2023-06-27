#pragma once
#include "SIZES.h"
struct Engine {
	int amount;
	int power;
};

struct CarBody {
	int width;
	int height;
	char color[TEXTSIZE];
};

struct Car {
	char model[TEXTSIZE];
	Engine engine;
	CarBody carbody;
};
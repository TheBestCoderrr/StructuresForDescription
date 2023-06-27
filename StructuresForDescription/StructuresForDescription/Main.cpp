#include <iostream>
#include <string.h>

#include "Exersize1.h"
#include "ManufacturersAndProduct.h"

using namespace std;

int main() {
	Product CPU;
	InitProductCharacteristics(CPU);
	CPU.architecture == 0 ? InitAMD(CPU) : InitIntel(CPU);
	PrintProduct(CPU);
}
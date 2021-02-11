#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <iomanip>
#include "Reader.h"

using namespace std;

class Writer
{
private:
	ofstream output;
	int count = 0;
public:
	Writer(const char* out);
	void printTable(Reader& R);
};
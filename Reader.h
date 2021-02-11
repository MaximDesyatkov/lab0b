#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <regex>
#include <iomanip>

using namespace std;

class Reader
{
private:
	multimap<int, string, greater<size_t>> sort;
	int count = 0;
public:
	Reader(ifstream& input);

	const multimap<int, string, greater<size_t>>& getMultimap();

	const int getCount() const;
};

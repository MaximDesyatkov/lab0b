#include "Reader.h"

Reader::Reader(ifstream& input) {

	string str;
	map<string, int> freq;
	regex word("([a-zA-Z0-9]+)");

	while (!(input.eof())) {
		getline(input, str);
		sregex_iterator end;
		for (sregex_iterator pos(str.begin(), str.end(), word); pos != end; pos++) {
			freq[pos->str(0)]++;
		}
	}

	for (auto i = freq.begin(); i != freq.end(); i++) {
		sort.emplace(make_pair(i->second, i->first));
		count += i->second;
	}
}

const multimap<int, string, greater<size_t>>& Reader::getMultimap(){
	return sort;
}

const int Reader::getCount() const{
	return count;
}
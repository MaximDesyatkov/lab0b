#include "Writer.h"

Writer::Writer(const char* out) {
	output.open(out);
}

void Writer::printTable(Reader& R)
{
	auto sort = R.getMultimap();
	count = R.getCount();

	for (auto& item_multimap : sort) {
		double freq_in_percentage = round((double)item_multimap.first / (double)count * 10000.0) / 100.0;
		output << item_multimap.second << " , " << item_multimap.first << " , " << freq_in_percentage << "%" << endl;
	}
	output.close();
}
#include <iostream>
#include "Reader.h"
#include "Writer.h"

using namespace std;
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "Error! Enter exactly 2 arguments" << endl;
		return 1;
	}
	ifstream input;
	input.open(argv[1]);
	if (!input){
		cout << "File cannot open!" << endl;
	}
	Reader read(input);
	input.close();

	Writer write(argv[2]);
	write.printTable(read);

	return 0;
}
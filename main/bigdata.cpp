#include <iostream>
#include <random>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char**argv) {
    long count =  1000000;
    if( argc == 2 ) count = atoi(argv[1]);
	ofstream MyFile("gen_accounts.csv");
    for(long i = 0 ; i < count ; i++ ) {
        MyFile << "ACNO" << setw(10) << setfill('0') << i << ","
            << "name-" << i << ","
            << rand()
            << endl;
    }

	MyFile.close();
}

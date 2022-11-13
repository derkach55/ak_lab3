#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
	auto calculator = new Calculator();
	cout << "Calculator add " << calculator->Add(2, 1) << endl;
	cout << "Calculator sub " << calculator->Sub(2, 1) << endl;
	return 0;
}

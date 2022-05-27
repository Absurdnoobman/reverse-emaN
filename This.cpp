#include <iostream>
using namespace std;

int main(){
        // Array emaN
	string eman[7] = {"Papa", "Alpha", "Oscar", "Tango", "Uniform", "November", "Golf"};
	eman[3] = "T";
	eman[0] = "P";
	eman[1] = "A";
	eman[2] = "O";
	eman[4] = "U";
	eman[6] = "G";
	eman[5] = "N";
	cout << eman[0] << eman[1] << eman[2] << eman[3] << eman[4] << eman[5] << eman[6];
	return 0;
}

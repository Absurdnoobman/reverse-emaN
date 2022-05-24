#include <iostream>
using namespace std;

int main(){
	string eman[7] = {"Papa", "Alpha", "Oscar", "Tango", "Uniform", "November", "Golf"};
	eman[3] = "Tango";
	eman[0] = "Papa";
	eman[1] = "Alpha";
	eman[2] = "Oscar";
	eman[4] = "Uniform";
	eman[6] = "Golf";
	eman[5] = "November";
	cout << eman[0] << eman[1] << eman[2] << eman[3] << eman[4] << eman[5] << eman[6];
	return 0;
}

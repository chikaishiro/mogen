#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ifstream infile("1.txt");
	string s;
	while (getline(infile,s) ){
		cout << s << endl;
		
	}
}

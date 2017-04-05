#include <iostream>
#include <string>
#include "HelloWolrd.h"

using namespace std;

//function declarations




int main()
{
	HelloWolrd obj;
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	obj.edits(name);
	//obj.speaks();

	obj.ranPhrase();
	
	
	

	return 0;
}
 
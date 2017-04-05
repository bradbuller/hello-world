#include "HelloWolrd.h"



HelloWolrd::HelloWolrd()
{
	
}
void HelloWolrd::speaks()
{
	cout << mName << endl;
}
void HelloWolrd::edits(string name)
{
	mName = name;

}

void HelloWolrd::ranPhrase()
{
	srand(time(NULL));
	int r = rand() % 5;
	switch (r)
	{
	case 0:
		mName = "Hello World";
		cout << mName << endl;
		break;
	case 1:
		cout << "Greetings " << mName << endl;
		break;
	case 2:
		cout << mName << " is hungry" << endl;
		break;
	case 3:
		cout << mName <<  " Could use a cigarette" << endl;
		break;
	case 4:
		cout << "Hello " << mName << endl;
	}
}
HelloWolrd::~HelloWolrd()
{
}

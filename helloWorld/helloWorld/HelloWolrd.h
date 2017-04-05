#pragma once
#include <iostream>
#include <ctime>
#include <string>

using namespace std;


class HelloWolrd
{
private:
	string mName;
	

public:
	HelloWolrd();

	void speaks();
	void edits(string);

	void ranPhrase();
	
	~HelloWolrd();
};


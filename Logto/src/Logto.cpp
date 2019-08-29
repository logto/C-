//============================================================================
// Name        : Logto.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

enum menting {red,black,yellow};


int main(){
	menting mMenting;
	mMenting = red;
	mMenting = yellow;

	switch (mMenting) {
		case red:
			cout << "red = ";
			break;
		case black:
			cout << "black = ";
			break;
		case yellow:
			cout << "yellow = ";
			break;
	}


    return 0;
}

class className{
	private:
		int age;
	public:
		char name;
	protected:
		int firstNamej;

};






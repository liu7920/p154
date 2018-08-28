//============================================================================
// Name        : p154.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

int main() {

	Add a;
	Sub s;
	Mul m;
	Div d;

	int i,o,temp;
	char p;

	while(1){
		cout << "두 정수와 연산자를 입력하세요>> ";
		cin >> i;
		cin >> o;
		cin >> p;

		if(p=='+'){
			a.setValue(i,o);
			temp=a.calculate();
		}
		else if(p=='-'){
			s.setValue(i,o);
			temp=s.calculate();
		}
		else if(p=='*'){
			m.setValue(i,o);
			temp=m.calculate();
		}
		else if(p=='/'){
			d.setValue(i,o);
			temp=d.calculate();
		}
		else if(p=='!'){
			break;
		}
		else{
			cout << "잘못된 입력" << endl;
		}
		cout << temp << endl;
	}

	return 0;
}

/*
 * Add.cpp
 *
 *  Created on: 2018. 8. 28.
 *      Author: daum
 */

#include "Add.h"

void Add::setValue(int x, int y){
	a=x;
	b=y;
}

int Add::calculate(){
	return a+b;
}

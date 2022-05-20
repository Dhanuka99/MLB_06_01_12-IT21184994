#include <iostream>
#include "Administrator.h"
#include "AreaManager.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	AreaManager *p = new AreaManager("Dhanuka","Kurunegala",001,"danu","danu1234","areaManager");
	p->displayDetails();
	p->~AreaManager();
	Administrator *a = new Administrator("saman",002,"saman_1","saman123","admin");
	a->displayDetails();
	a->~Administrator();
	return 0;
}

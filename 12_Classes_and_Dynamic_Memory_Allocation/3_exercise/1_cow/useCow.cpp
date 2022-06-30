#include <iostream>
#include "Cow.h"

int main(void)
{
	using namespace std;
	Cow cow1;
	Cow cow2("cow2", "badminton", 123);
	Cow cow3(cow2);

	cow1 = cow2;
	cow1.showCow();
	cow2.showCow();
	cow3.showCow();

	return 0;
}
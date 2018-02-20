#include "TF1.h"

void exercise1(int value1, int value2)
{
	TF1 * f2 = new TF1("f2","[0]*sin([1]*x)/x",-10,10);
	f2->SetParameters(value1,value2);
	f2->Draw();
	f2->SetMaximum(2);
	f2->SetMinimum(-2);
	
}

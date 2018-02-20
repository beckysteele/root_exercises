#include "TH1.h"

void exercise3()
{
	TH1D * h1 = new TH1D("h1","Example histogram",40,-4.,4.);
	//h1->Fill(x);
	for (int i = 0; i<1000; ++i)
	{
		double x = gRandom->Gaus(0,1);
		h1->Fill(x);
	}
	h1->Draw();
}

#include "TH2.h"
#include "TProfile.h"
#include "TRandom.h"
#include "TCanvas.h"

void Histogram2D()
{
	TH2D *h2D = new TH2D("h2d","2-D Histogram",40,-5,5,40,-5,5);
	for (int i = 0; i < 100000; ++i)
	{
		double u = gRandom->Gaus(0,1);
		double w = gRandom->Gaus(0,1);
		double x = u;
		double y = w + 0.5 * u;
		h2d->Fill(x,y);
	}

	h2d->Draw("COLZ");
	
}

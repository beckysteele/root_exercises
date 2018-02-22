#include "TH1.h";
#include "TLine.h"

void mytcanvas(){

	// Gaussian histogram

	TH1D *h1 = new TH1D("h1","Gaussian Histogram",100,0,10);
	for (int i = 0; i < 1000; ++i)
	{
		h1->Fill(gRandom->Gaus(5,1));
	}
	//h1->Draw();

	// Uniform histogram

	TH1D *h2 = new TH1D("h2","Uniform Histogram",100,0,10);
	for (int i = 0; i < 10000; ++i)
	{
		h2->Fill(gRandom->Uniform(0,10));
	}
	//h2->Draw("same");

	// Add histograms h1 + h2

	TH1D *h3 = new TH1D("h3","Combined Histogram",100,0,10);
	h3->Add(h1,h2);
	h3->Draw();

	// Normalized Histogram

	TH1D *h4 = new TH1D("h4","Normalized Histogram",100,0,10);
	for (int i = 0; i < 100000; ++i)
	{
		h4->Fill(gRandom->Uniform(0,10));
	}
	h4->Sumw2();
	h3->Sumw2();
	h4->Scale(0.1);
	
	// Plot a new canvas

	new TCanvas("c2","c2");
	
	TH1D *h5 = new TH1D("h5","Flat + Gaussian Histogram",100,0,10);
	h5->Add(h3,h4,1.,-1.);
	h5->Draw("E");

	TLine *line = new TLine(0,0,10,0);
	line->Draw();

}

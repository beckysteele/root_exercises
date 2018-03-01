void ReadTree() 
{
	TFile f("EventData.root");
	TTree *T = (TTree*)f->Get("T");
	Event *myEvent = 0;
	TBranch *brEvent = 0;
	T->SetBranchAddress("EvBranch", &myEvent, brEvent);
	T->SetCacheSize(10000000);
	Long64_t nent = T->GetEntries();
	for (Long64_t i = 0; i < nbent; ++i)
	{
		brEvent->GetEntry(i);
		myEvent->Analyze();
	}




}

#include "DFA.h"
ifstream f("dfa.txt");
int main()
{
	DFA D;
	f >> D;
	D.initializarePartitii();
	D.minimizareDFA();
	return 0;
}

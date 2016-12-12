#include <iostream>
using namespace std;

string lString = "PATFATCAT";
int lStringSize;
int letterCounterP;
int letterCounterA;
int letterCounterC;
int letterCounterF;
int letterCounterT;

void stringLength(){
	cout << lString.size() << " elements in the set L.\n";
	lStringSize = lString.size();
	cout << "\n";
}

void stringRep(){

	for (int i = 0; i < lString.size(); i++){
		if (lString[i] == 'P'){
			letterCounterP++;
		}else if (lString[i] == 'A'){
			letterCounterA++;
		}else if (lString[i] == 'C'){
			letterCounterC++;
		}else if (lString[i] == 'F'){
			letterCounterF++;
		}else if(lString[i] == 'T'){
			letterCounterT++;
		}
	}
	cout << letterCounterP << " 'P' characters repeated.\n";
	cout << letterCounterA << " 'A' characters repeated.\n";
	cout << letterCounterC << " 'C' characters repeated.\n";
	cout << letterCounterF << " 'F' characters repeated.\n";
	cout << letterCounterT << " 'T' characters repeated.\n";
	cout << "\n";
}

void printFreqDistr(){
	cout << "(Letter, Frequency)\n";
			"-------------------\n";
	cout << "    P  , " << letterCounterP << endl;
	cout <<	"    A  , " << letterCounterA << endl;
	cout <<	"    C  , " << letterCounterC << endl;
	cout <<	"    F  , " << letterCounterF << endl;
	cout <<	"    T  , " << letterCounterT << endl; 
}


int main(){

	cout << "Consider finite sequences of lists drawn from the finite alphabet \n"
		"S = {A, C, G, T}.\n"
		"Given a sequence L, one would like to perform the following tasks: \n"
		"Compute the length of L.\n"
		"Count the number of occurrences in L of each alphabet letter.\n"
		"Create a histogram or frequency distribution for L\n"
		"Extra Credit) Perform a Huffman coding on the L histogram\n";

	cout << "My choosen L finite sequence is as follows:\n"
		"L = {P, A, T, F, A, T, C, A, T}\n";
	cout << "\n";
	
	stringLength();
	stringRep();
	printFreqDistr();

	return 0;

}


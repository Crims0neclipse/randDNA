#include <iostream>
#include <random>
#include <string>

using namespace std;

 string randDNA(int seed, string Lbases, int length){
	
    mt19937 eng1 (seed);
    
    uniform_int_distribution <int> un (min, max);
    
		int min =0 ; , max= Lbases.size -1;
		
		for (int i=0; i< Lbases.size; i++)
			cout<<eng1(seed) << Lbases<<;
    
       
      
}

int main(){
	
	
	}

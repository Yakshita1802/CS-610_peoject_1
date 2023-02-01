/* PROGRAM to calculate the value of n factorial. */
#include <stdlib.h>

main() {
	int n = 5;
	cout << "n  =  " << n << endl;
	int Factorial = 1;
	int i = 1;
	
	
	while(i <= n) {
		Factorial = Factorial*i;
		i++;
	}
	cout << "n! =\t" << Factorial;
	
}
	
	
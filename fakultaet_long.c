#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	long a, b, c;

if (argc == 2) {
    

	
	a = atof(argv[1]);

	if (a < 0) {
	printf("Für negative Zahlen ist die Fakultät nicht definitert!\n");
}
	
	else if (a == 1) {
	printf("%lu Faktoriell ist 1\n", a);

}
	else if (a == 0) {
	printf("%lu Faktoriell ist 1\n", a);
}
	else {
	c = 1;
	for (b = a; b > 1;  b--) {
	c *= b;

}	
	printf("%lu Faktoriell ist %lu\n",
		a, c);
	printf("Anzahl der Bytes von zahl: %lu\n", sizeof(a));
}

	

	
	

}	

else {
    printf("Es wird genau eine Variable benötigt!\n");
    

}

//Funktioniert nur bis 65!	

	return 0;
}

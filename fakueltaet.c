#include <stdio.h>
#include <stdlib.h>
int multiplyNumbers(int a);
int main(int argc, char ** argv) {
	int a;

if (argc == 2) {
    

	a = atoi(argv[1]);
printf(" %i Fakültät ist ",
		a);
	multiplyNumbers(a);

printf("%i\n",
		a);


}

else {
    printf("Es wird eine Variable benötigt!\n");
}

    
return 0;
	


    
}
int multiplyNumbers(int a)
{
    if (a >= 1)
        return a*multiplyNumbers(a-1);
    else
        return 1;
}




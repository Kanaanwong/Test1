#include <stdio.h>
main()
{ 
	//int c;
	//c =  EOF;
	//putchar(c);
	//printf("Hex=%x U=%u D=%d\n", EOF,EOF,EOF);
	//return ;
	double nc;
	for (nc = 0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}

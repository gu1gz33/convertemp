#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int temperature()
{
	float temp;
	printf("Entrez la température que vous voulez convertir\n");
	scanf("%f", &temp); 
	return temp; 
}

int conversiondegrec()
{
	float t, degrec;
	t = temperature();
	degrec = (5./9.)*t-(160./9.);
	printf("La température est de %f°C\n\n\n", degrec);
}

int conversiondegref()
{
	float t, degref;
	t = temperature();
	degref = ((1.8*t)+32.);
	printf("La température est de %f°F\n\n\n", degref);
}
int selectionconversion()
{
	int choix;
	printf("Voulez vous convertir une température de degrés °C en °F ou de degrés °F en degrés °C ?\n Tapez 1 ou 2 selon votre choix \n 1.°C --> °F\n 2. °F --> °C\n\n");
	scanf("%d", &choix);
	while ( choix != 1 && choix !=2)
		{	
		printf("Vous n'avez pas selectionné le bon choix :\n Tapez 1 ou 2 selon votre choix \n 1.°C --> °F\n 2. °F --> °C");
		scanf("%d", &choix);
		}
	return choix;
}

int main()
{
	int c, i;	
	i = 1;
	while (i == 1)
	{
		c = selectionconversion();
		if (c == 1)
		{
			printf("CONVERSION °C --> °F\n\n");
			conversiondegref();
		}
		if (c == 2)
		{
			printf("CONVERSION °F --> °C\n\n");
			conversiondegrec();
		}	
	printf("Voulez-vous faire une autre conversion ?\n 1: Oui\n 2: Non\n");
	scanf("%d",&i);
	}
}

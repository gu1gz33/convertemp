#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int temperature() // sous-programme; l'utilisateur rentre la température qu'il souhaite convertir
{
	float temp;
	printf("Entrez la température que vous voulez convertir\n");
	scanf("%f", &temp); 
	return temp; 
}

int conversiondegrec() // sous programme de conversion de °F en °C
{
	float t, degrec;
	t = temperature();
	degrec = (5./9.)*t-(160./9.); // j'ai trouver la formule de conversion sur internet
	printf("La température est de %f°C\n\n\n", degrec);
}

int conversiondegref() // sous programme de conversion de °C en °F
{
	float t, degref;
	t = temperature();
	degref = ((1.8*t)+32.);
	printf("La température est de %f°F\n\n\n", degref);
}
int selectionconversion() // L'utilisateur choisit si il veut convertir des °F ou des °C
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

int main() //On déroule les sous programmes dans l'ordre à l'aide d'itération et de choix
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
	printf("Voulez-vous faire une autre conversion ?\n 1: Oui\n 2: Non\n"); //On demande à l'utilisateur si il souhaite faire une autre conversion
	scanf("%d",&i);
	}
}

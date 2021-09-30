#include "Header.h"


int calculerMoyenne(int nombre)
{
	//Constantes 
	
	const int min=0;
	const int max=100;

	//Variables
	int moyenne=0;


	if (nombre < min ||nombre > max)
	{
		std::cout << "Doit etre entre 0 et 100" << std::endl;
	}
	else
	{
		for (int i = min; i <=max; i++)
		{
			moyenne=moyenne+nombre;
		}
		
		
	}
	
	return moyenne/max;
}

/* bool validerDate(int j, int m, int a)
{
}
 */
/* void dessinerRectangle(int h, int l)
{
}
 */
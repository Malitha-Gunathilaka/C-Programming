/**************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: Output to an external file
***************************/

#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("output.txt","a");

	fprintf(fp,"First Time: ------");

	fprintf(fp,"This is our first file output\n");

	fprintf(fp,"Writing form COSC/COST 11023 class\n");

	fclose(fp);

	return 0;
}
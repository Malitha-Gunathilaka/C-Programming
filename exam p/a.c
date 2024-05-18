#include<stdio.h>
int main()
{
	char stuno[50][20];
	int mark[50][5];
	char great[20][10];

	FILE *fp,*fp1;

	fp=fopen("data.txt","r");
	if (fp==NULL)
	{
		printf("file not found");
		return 0;
	}
	int i=0;
	while(fscanf(fp,"%s",&stuno[i])!=EOF)
	{
		fscanf(fp,"%s",&great[i][0]);
		fscanf(fp,"%d",&mark[i][0]);
		fscanf(fp,"%d",&mark[i][1]);
		fscanf(fp,"%d",&mark[i][2]);
		i++;
	}
	printf("stunum \t\t msrk1 \t mark2 \t mark3\n");
	for (int j = 0; j < i; ++j)
	{
		/* code */
		printf("%s %7d %7d %7d \n",stuno[j] ,mark[j][0],mark[j][1],mark[j][2]);

	}

	fclose(fp);

	fp1=fopen("new marks.txt","w");
	for (int j = 0; j < i; ++j)
	{
		/* code */
		fprintf(fp1,"%s %7d %7d %7d \n",stuno[j] ,mark[j][0],mark[j][1],mark[j][2]);

	}
	fclose(fp1);
}
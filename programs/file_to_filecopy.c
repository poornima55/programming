#include<stdio.h>
int main()

{
	FILE *fp1,*fp2;
	char c;
	fp1 = fopen("/home/poornima/start_coding/text1.txt","r");
	fp2 =fopen("/home/poornima/start_coding/text2.txt","w+");
	if(fp1!=NULL)
	{
		c= getc(fp1);
		while(c!=EOF)
		{
			fputc(c,fp2);
			c=fgetc(fp1);
		}
		fclose(fp1);
		fclose(fp2);
	}
	else
	{
		printf("error in opening the file");
	}
	return 0;
}


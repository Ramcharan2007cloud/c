#include<stdio.h>
#include<string.h>
int main()
{
	char str[500];
	scanf("%s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		else
		{
			str[i]=tolower(str[i]);
		}
	}
	printf("%s",str);

	
}

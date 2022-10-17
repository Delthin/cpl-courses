#include<stdio.h>
int main() 
{	char string[100]={0};
	scanf("%[^\n]", string);
	
	int len = 0;
	for (int i = 0; i < 100; i++){
		if (string[i]!=' '){len++;}
	}
	for (int i = 0; i < len; i++){
		if (string[i] != ' '){
			printf ("%c",string[i]);
		}
	}

	return 0;
}
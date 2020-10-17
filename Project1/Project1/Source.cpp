#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char Text[1000], word[20];
	int i = 0, j = 0, n = 0;
	printf("Exter text: ");
	gets_s(Text); 
	printf("\n");
	while (Text[i] != '\0') {                
		if (isalpha(Text[i])) {
			j = 0;				
			while (isalpha(Text[i]))        
				word[j++] = Text[i++];
			word[j] = '\0'; n++;             
			printf("%s\n", word);
		}
		while (!isalpha(Text[i]) && (Text[i] != '\0')) i++;  
	}
	printf("\n#Words = %d\n", n);

	return 0;
}
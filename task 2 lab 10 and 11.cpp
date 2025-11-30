#include <stdio.h>
#include <string.h> 
 void reverse(char s[], int i, int j)
 {
    if (i >= j) return; 
	char temp = s[i]; 
	s[i] = s[j]; 
	s[j] = temp;
	reverse(s, i + 1, j - 1);
	 }
 int main() 
	  { 
	  char s[50]; 
	  printf("Enter string: "); 
	  scanf("%s", s);
	  reverse(s, 0, strlen(s) - 1); 
	  printf("Reversed: %s", s); 
	  return 0; } 

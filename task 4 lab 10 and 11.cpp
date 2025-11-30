#include <stdio.h>
#include <string.h>
 struct Movie { 
  char title[30]; 
  char genre[20]; 
  char director[30];
  int year; 
  float rating; }; 
  
  int main() { 
  struct Movie m[20]; 
  int count = 0, ch; 
  char g[20]; 
  while (1) { 
  printf("\n1 Add Movie\n2 Search by Genre\n3 Show All\n4 Exit\nChoice: "); scanf("%d", &ch); if (ch == 1) { 
  printf("Title: "); 
  scanf(" %[^ ]", &m[count].title); 
  printf("Genre: "); 
  scanf(" %[^ ]",& m[count].genre); 
  printf("Director: "); 
  scanf(" %[^ ]", m[count].director); 
  printf("Year: "); 
  scanf("%d", &m[count].year); 
  printf("Genre to search: "); 
  scanf(" %[^ ]", g); 
  count++;
  for (int i = 0; i < count; i++)
   if (strcmp(m[i].genre, g) == 0)
   printf("%s (%d)\n", m[i].title, m[i].year);
    } 
   else if (ch == 3) {
    for (int i = 0; i < count; i++) 
	printf("%s - %s - %s - %d - %.1f\n", m[i].title, m[i].genre, m[i].director, m[i].year, m[i].rating); } 
	else break; } return 0; } 


#include <stdio.h> 
#include <stdlib.h>
  
int main() 
{ 
   // Open the two files to be merged
   FILE *f1 = fopen("file.c", "r"); 
   FILE *f2 = fopen("freq.c", "r"); 
  
   // Open file to store the result
   FILE *f3 = fopen("file3.c", "w"); 
   char c; 
  
   if (f1 == NULL || f2 == NULL || f3 == NULL) 
   { 
         puts("Cannot open files"); 
         exit(EXIT_FAILURE);
   } 
  
   // Copy the content of the first file to file3.txt
   while ((c = fgetc(f1)) != EOF) 
      fputc(c, f3); 
  
   // Copy the content of the second file to file3.txt
   while ((c = fgetc(f2)) != EOF) 
      fputc(c, f3); 
  
   printf("The two files are now merged in file3.c"); 
  
   fclose(f1); 
   fclose(f2); 
   fclose(f3); 
   return 0; 
}
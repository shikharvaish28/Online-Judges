#include <stdio.h>
 
int main(){
    // Input a string with max of 100002 characters
   char string[100002];
   int c = 0, count[26] = {0}, x;
   printf("Enter a string\n");
   gets(string);
    //  Run the loop till 'ENTER' is'nt encountered
   while (string[c] != '\0') {
    // Considering characters from 'a' to 'z' only and ignoring others.
    // Convert to Lower Case if Upper
    if (string[c] >= 'A' && string[c] <= 'Z')
        string[c] += 32;
    if (string[c] >= 'a' && string[c] <= 'z') {
        // Increase the counter at the required array position
         x = string[c] - 'a';
         count[x]++;
      }
    // To the next position
      c++;
   }
 
   for (c = 0; c < 26; c++){
    //   ignoring the alphabets with count = 0
    if (count[c] != 0)
         printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
    else
        continue;
   }
   return 0;
}
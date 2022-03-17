#include<stdio.h>
                          ///auto arrange code command shift + alt + F
int main ()
{

char ch ;
printf("Enter your Charecter :: ");
scanf("%c", &ch);

if (ch == 'A' || ch == 'E' || ch == 'I' ||& ch == 'O' || ch == 'U'
      || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
{ 
       
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Congratulation :: You entered a VOWEL with LOWER CASE");

    }

    else if (ch >= 'A' && ch <= 'Z')
    {
         printf("Congratulation :: You entered a VOWEL with UPPER CASE"); 
    }
    
}

 else 
 {
     if (ch >= 'a' && ch <= 'z')
    {
        printf("Congratulation :: You entered a CONSONANT with LOWER CASE");

    }

    else if (ch >= 'A' && ch <= 'Z')
    {
         printf("Congratulation :: You entered a CONSONANT with UPPER CASE"); 
    }
 }


}
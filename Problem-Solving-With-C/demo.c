#include <stdio.h>
#include <string.h>

int main()
{
//    char str[6]={'h','e','l','l','o'};
//    printf("Size : %d  ;;  Length : %d\n", sizeof(str),strlen(str));
//
//    printf("%d",str[1]) ;

//    char p[12];
//    gets(p);
//    puts(p);
//
//    int i,counter=0;
//    for(i=0; p[i]!='\0';i++){
//        printf("%c",p[i]);
//        counter++;
//    }
//    printf("%d",counter);
//    printf("Size : %d  ;;  Length : %d\n", sizeof(p),strlen(p));



    char a[3]="pla";
    char b[3]= "ban";

    char c[8];

    strcat(b,a);


    puts(b);
    printf("\n");
    puts(a);




    return 0;
}

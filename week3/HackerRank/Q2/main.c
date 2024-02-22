#include <stdio.h>
int main(){
 char ch;
    char a[50];
    char s[100];
    scanf("%c",&ch);
    scanf("%s", &a);
     scanf("\n");
    scanf("%[^\n]%*c", s);
    printf("%c\n",ch);
    printf("%s\n",a);
    printf("%s",s);


return 0;
}

#include <stdio.h>
#include IMPL

int main()
{
    char str[128];
    char c;
    char res;
    printf("str: ");
    gets(str);
    printf("c: ");
    scanf("%c",&c);
    fflush(stdin);

    res=smallest_character(str, c);
    printf("%c\n",res);

    return 0;
}
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z' )|| (ch>='A'&&ch<='Z')){
       printf("Consonant");
    }
    else if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
       printf("Vowel");
    }
    else if(isdigit(ch)){
       printf("Digit");
    }
    else{
       printf("Special Character");
    }
    return 0;
}
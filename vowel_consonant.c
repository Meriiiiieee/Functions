#include <stdio.h>

int main(){
    char str[] = "Hello World";
    int vowels = 0;
    int consonants = 0;
    char c = 0;
    
    for(int i = 0; str[i]!= 0; i++) {
        c=str[i];
        if(c>='A' && c<='Z'){
            c = c + 32;
        }    
        if(c=='a'|| c =='e'|| c == 'i'|| c=='o'|| c=='u'){
            vowels++;
        } else{
            consonants++;
          }
   }
    printf("Count of vowels %d\n", vowels);
    printf("Count of consonants %d\n", consonants);
    return 0;
}

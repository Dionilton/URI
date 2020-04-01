#include <stdio.h>
#include <string.h>

int main(){

    char w[20];
    scanf("%s[^\n]", w);
    if(!(strcmp(w, "vertebrado"))){
        scanf("%s[^\n]", w);
        if(!(strcmp(w, "ave"))){
            scanf("%s[^\n]", w);
            if(!(strcmp(w, "carnivoro"))){
                printf("aguia\n");
            }
            else if(!(strcmp(w, "onivoro"))){
                printf("pomba\n");
            }
        }
        else if(!(strcmp(w, "mamifero"))){
            scanf("%s[^\n]", w);
            if(!(strcmp(w, "onivoro"))){
                printf("homem\n");
            }
            else if(!(strcmp(w, "herbivoro"))){
                printf("vaca\n");
            }
        }
    }
    else if(!(strcmp(w, "invertebrado"))){
        scanf("%s[^\n]", w);
        if(!(strcmp(w, "inseto"))){
            scanf("%s[^\n]", w);
            if(!(strcmp(w, "hematofago"))){
                printf("pulga\n");
            }
            else if(!(strcmp(w, "herbivoro"))){
                printf("lagarta\n");
            }
        }
        else if(!(strcmp(w, "anelideo"))){
            scanf("%s[^\n]", w);
            if(!(strcmp(w, "hematofago"))){
                printf("sanguessuga\n");
            }
            else if(!(strcmp(w, "onivoro"))){
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}

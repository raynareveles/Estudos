#include <stdio.h>
#include <string.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';

int main() {
  char minhastring[50];
  int TAM, i, codigo;
  // ler uma string e um caractere
  printf("Digite uma frase:\n");
  gets(minhastring);
  TAM=strlen(minhastring);

  printf("Digite o código para criptografar:");
  scanf("%d", &codigo);

  for(i=0; i<TAM; i++){
     if(minhastring[i]!=' ')
    minhastring[i]=minhastring[i]+codigo;
  }

  
printf("%s", minhastring);

      return 0;
  }

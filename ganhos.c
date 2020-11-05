#include <stdio.h>

int main(void) {

  float valor, dolar, resultado, bonus;
  int musicas;
  valor = dolar = resultado = bonus = musicas = 0;

  printf("\n\n");
  printf("       ==============\n");
  printf("        GANHO MENSAL\n\n");

  printf("MÚSICAS POR DIA: ");
  fflush(stdin);
  scanf("%f", &valor);

//VALOR DOLAR
  dolar = 5.60;

  musicas = valor * 24;
  if(musicas < 199)
    bonus = 10;
  else
  if(musicas < 299)
    bonus = 15;
  else
  if(musicas < 399)
    bonus = 20;
  else
  if(musicas < 499)
    bonus = 25;
  else
    bonus = 50;
  resultado = (((musicas / 2) + bonus) * dolar);


  printf("\n\n");
  printf("         ===========\n");
  printf("          RESULTADO\n\n");
  printf("GANHO MENSAL ..........: R$ %.2f\n", resultado);
  printf("Nº TOTAL DE MÚSICAS ...: %d\n\n", musicas);

  return 0;
}

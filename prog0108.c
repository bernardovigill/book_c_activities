/* Escreva um programa em C que indique qual o significado dos seguintes caracteres especiais: \n, \\, \t, %% */

#include <stdio.h>

main()
{
    printf("Programa que apresenta os caracteres especiais\n\n");
    printf("\\n\t-\t<ENTER>\n"); /* Saída: \n    -   <ENTER> */
    printf("\\\\\t-\t\\\n");     /* Saída: \\    -     \\    */
    printf("\\t\t-\t\<TAB>\n");  /* Saída: \t    -    <TAB>  */
    printf("%%%%\t-\t%%\n");     /* Saída: %%    -      %    */
}

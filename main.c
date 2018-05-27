#include <stdio.h>

void inicia(void)__attribute__((constructor));
void finaliza(void)__attribute__((destructor));

int main(void)
{
    printf("Ejecutando aplicacion\n");
    return 0;
}



void inicia(void)
{
    printf("Iniciando aplicacion\n");
}
void finaliza(void)
{
    printf("Finalizando aplicacion\n");
}

//Libraries
#include <stdio.h>
//Variables
int again = 1;
int op;
int num;
int num2;
int res;
int i;

//Main 
int main(){
//Calculator Loop    
while (again == 1)
{   //Menu
     printf("Calculadora\n");
    printf("Elige una opción\n");
    printf("(1) Suma\n");
    printf("(2) Resta\n");
    printf("(3) Multiplicación\n");
    printf("(4) División\n");
    scanf("%d", &op);

    printf("Dime un Numero: ");
    scanf("%d", &num);
    printf("Dime otro numero: ");
    scanf("%d", &num2);
    //Operations
    switch (op)
    {
    case 1:
        res = num + num2;
        break;

    case 2:
        res = num - num2;
        break;

    case 3:
        res = num * num2;
        break;

    case 4:
        res = num / num2;
        break;    
    
    default: printf("Esa opción no existe");
        break;
    }
    
    //End
    printf("El resultado es %d \n", res);
    printf("Quieres seguir con la calculadora? Si(1) No(2)\n");
    scanf("%d", &again);
    printf("%d\n", again);
    fflush(stdin);
     //This decides if the final message is plural or singular.
    i++;

}

  
    if (i < 2)
    {
        printf("Has hecho %d operacion\n ", i);   
    }
    else{

         printf("Has hecho %d operaciones\n ", i);
    }
    
     
    return 0;
    

}
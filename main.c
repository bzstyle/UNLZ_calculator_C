#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).
 BLACK = 0,
 BLUE = 1,
 GREEN = 2,
 CYAN = 3,
 RED = 4,
 MAGENTA = 5,
 BROWN = 6,
 LGREY = 7,
 DGREY = 8,
 LBLUE = 9,
 LGREEN = 10,
 LCYAN = 11,
 LRED = 12,
 LMAGENTA = 13,
 YELLOW = 14,
 WHITE = 15
};
int indice;
typedef struct {
  double primerNumero;
  double segundoNumero;
  char operacion;
  double Resultado;
} historial;
typedef struct {
  double suma;
  double resta;
  double multiplicacion;
  double division;
  double potenci;
  double raizcuadrada;
  double coseno;
  double seno;
  double tangente;
} ultimoResultado;
ultimoResultado ultimo;
historial operaciones[100];

int main() {
Color(YELLOW);
  char opc;
  do {
    menu(&opc);
    double numero1, numero2;
    char repe;
    char b;
    switch (opc) {

    case '1':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.suma);
        printf("\n(1)..Sumar a ultimo resultado.. (2)..Sumar.. (0)..Menu");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado:%.2f\n", ultimo.suma);
          printf("\nIngrese un numero para sumar al ultimo resultado: ");
          scanf("%lf", &numero1);
          sumar(numero1, ultimo.suma, &operaciones[indice], &ultimo);
          break;

        case '2':
          pedirNum(&numero1, &numero2);
          sumar(numero1, numero2, &operaciones[indice], &ultimo);
          break;
        }

      } while (b != '0');
      break;

    case '2':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.resta);
        printf("\n(1)..Restar a ultimo resultado.. (2)..Restar.. (0)..Menu");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado:%.2f\n", ultimo.resta);
          printf("\nIngrese un numero para restar al ultimo resultado: ");
          scanf("%lf", &numero1);
          restar(ultimo.resta, numero1, &operaciones[indice], &ultimo);
          break;

        case '2':
          pedirNum(&numero1, &numero2);
          restar(numero1, numero2, &operaciones[indice], &ultimo);
          break;
        }

      } while (b != '0');
      break;

    case '3':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.multiplicacion);
        printf("\n(1)..Multiplicar ultimo resultado.. (2)..Multiplicar.. "
               "(0)..Menu");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado:%.2f\n", ultimo.multiplicacion);
          printf("\nIngrese un numero para multiplicar al ultimo resultado: ");
          scanf("%lf", &numero1);
          multiplicar(ultimo.multiplicacion, numero1, &operaciones[indice],
                      &ultimo);
          break;

        case '2':
          pedirNum(&numero1, &numero2);
          multiplicar(numero1, numero2, &operaciones[indice], &ultimo);
          break;
        }

      } while (b != '0');
      break;

    case '4':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.division);
        printf("\n(1)..Dividir ultimo resultado.. (2)..Dividir.. (0)..Menu");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado:%.2f\n", ultimo.division);
          printf("\nIngrese un numero para dividir al ultimo resultado: ");
          scanf("%lf", &numero1);
          dividir(ultimo.division, numero1, &operaciones[indice], &ultimo);
          break;

        case '2':
          pedirNum(&numero1, &numero2);
          dividir(numero1, numero2, &operaciones[indice], &ultimo);
          break;
        }

      } while (b != '0');
      break;

    case '5':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.raizcuadrada);
        printf("\n(1)..Raiz cuadrada de ultimo resultado.. (2)..Raiz "
               "cuadrada.. (0)..Menu");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado:%.2f\n", ultimo.raizcuadrada);
          raiz(ultimo.raizcuadrada, &ultimo, &operaciones[indice]);
          break;

        case '2':
          printf("\nIngrese numero para calcular raiz cuadrada: ");
          scanf("%lf", &numero1);
          raiz(numero1, &ultimo, &operaciones[indice]);
          break;
        }

      } while (b != '0');
      break;

    case '6':
      do {
        printf("\nUltimo resultado:%.2f\n", ultimo.potenci);
        printf("\n(1)..Ultimo resultado como base.. (2)..Ultimo resultado como "
               "exponente.. (3)..Potencia.. (0)..Salir..");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          printf("\nUltimo resultado como base\n");
          printf("\nUltimo resultado:%.2f", ultimo.potenci);
          printf("\nIngrese exponente: ");
          scanf("%lf", &numero1);
          potencia(ultimo.potenci, numero1, &operaciones[indice], &ultimo);
          break;

        case '2':
          printf("\nUltimo resultado como exponente\n");
          printf("\nUltimo resultado:%.2f", ultimo.potenci);
          printf("\nIngrese base ");
          scanf("%lf", &numero1);
          potencia(numero1, ultimo.potenci, &operaciones[indice], &ultimo);
          break;

        case '3':
          printf("\nUltimo resultado:%.2f\n", ultimo.potenci);
          pedirNum(&numero1, &numero2);
          potencia(numero1, numero2, &operaciones[indice], &ultimo);
        }

      } while (b != '0');
      break;

    case '7':
      do {
        printf("\n(1)..Seno.. (2)..Coseno.. (3)..Tangente.. (0)..Salir..");
        printf("\nIngrese una opcion: ");
        scanf("%s", &b);
        switch (b) {
        case '1':
          do {
            printf("\nUltimo resultado: %lf\n", ultimo.seno);
            printf("\n(1)..Seno de resultado anterior.. (2)..Seno de nuevo "
                   "numero.. (3)..Salir..");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
            switch (b) {
            case '1':
              seno(ultimo.seno, &operaciones[indice], &ultimo);
              break;
            case '2':
              printf("\nIngrese un numero para calcular su seno: ");
              scanf("%lf", &numero1);
              seno(numero1, &operaciones[indice], &ultimo);
              break;
            }
          } while (b != '3');
          break;

        case '2':
          do {
            printf("\nUltimo resultado: %lf\n", ultimo.coseno);
            printf("\n(1)..Coseno de resultado anterior.. (2)..Coseno de nuevo "
                   "numero.. (3)..Salir..");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
            switch (b) {
            case '1':
              coseno(ultimo.coseno, &operaciones[indice], &ultimo);
              break;
            case '2':
              printf("\nIngrese un numero para calcular su coseno: ");
              scanf("%lf", &numero1);
              coseno(numero1, &operaciones[indice], &ultimo);
              break;
            }
          } while (b != '3');
          break;

        case '3':
          do {
            printf("\nUltimo resultado: %lf\n", ultimo.tangente);
            printf("\n(1)..Tangente de resultado anterior.. (2)..Tangente de "
                   "nuevo numero.. (3)..Salir..");
            printf("\nIngrese una opcion: ");
            scanf("%s", &b);
            switch (b) {
            case '1':
              tangente(ultimo.tangente, &operaciones[indice], &ultimo);
              break;
            case '2':
              printf("\nIngrese un numero para calcular su Tangente: ");
              scanf("%lf", &numero1);
              tangente(numero1, &operaciones[indice], &ultimo);
              break;
            }
          } while (b != '3');
          break;

        default:
          printf("\nIngrese una opcion correcta");
        }
      } while (b != '0');
      break;

    case '8':
      printf("\n");
      registro();
      break;

    default:
      printf("Ingrese una opcion valida\n");
      fflush(stdin);
    }
  } while (opc != '0');
  return 0;
}
void Color( int Text){ // Función para cambiar el color del fondo y/o pantalla

 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);


 int    New_Color= Text;

 SetConsoleTextAttribute(Console, New_Color);

}
void seno(double a, historial *c, ultimoResultado *e) {
  printf("El seno de %.6lf es %.6lf ", a, sin(a));
  c->operacion = 's';
  c->primerNumero = a;
  c->Resultado = sin(a);
  e->seno = sin(a);
  indice++;
}
void coseno(double a, historial *c, ultimoResultado *e) {
  printf("El coseno de %.6lf es %.6lf ", a, cos(a));
  c->operacion = 'c';
  c->primerNumero = a;
  c->Resultado = cos(a);
  e->coseno = cos(a);
  indice++;
}
void tangente(double a, historial *c, ultimoResultado *e) {
  printf("La tangente de %.6lf es %.6lf ", a, tan(a));
  c->operacion = 't';
  c->primerNumero = a;
  c->Resultado = tan(a);
  e->tangente = tan(a);
  indice++;
}
void registro() {
  printf("\nHISTORIAL...");
  for (int i = 0; i < indice; i++) {
    if (operaciones[i].operacion == 's') {
      printf("\nCod :%d.", i);
      printf("\nSeno de %.6f = %.6f", operaciones[i].primerNumero,
             operaciones[i].Resultado);
      printf("\n");
      continue;
    }
    if (operaciones[i].operacion == 'c') {
      printf("\nCod :%d.", i);
      printf("\nCoseno de %.6f = %.6f", operaciones[i].primerNumero,
             operaciones[i].Resultado);
      printf("\n");
      continue;
    }
    if (operaciones[i].operacion == 't') {
      printf("\nCod :%d.", i);
      printf("\nTangente de %.6f = %.6f", operaciones[i].primerNumero,
             operaciones[i].Resultado);
      printf("\n");
      continue;
    }

    printf("\nCod :%d.", i);
    printf("\n%.2f %c %.2f = %.2f", operaciones[i].primerNumero,
           operaciones[i].operacion, operaciones[i].segundoNumero,
           operaciones[i].Resultado);
    printf("\n");
  }
}
void sumar(double a, double b, historial *c, ultimoResultado *e) {
  printf("El resultado de la suma es : %.2f\n", a + b);
  c->operacion = '+';
  c->primerNumero = a;
  c->segundoNumero = b;
  c->Resultado = a + b;
  e->suma = a + b;
  indice++;
}
void restar(double a, double b, historial *c, ultimoResultado *e) {
  printf("El resultado de la resta es : %.2lf\n", (a)-b);
  c->operacion = '-';
  c->primerNumero = a;
  c->segundoNumero = b;
  c->Resultado = (a)-b;
  e->resta = c->Resultado;
  indice++;
}
void multiplicar(double a, double b, historial *c, ultimoResultado *e) {
  printf("El resultado de la multiplicacion es : %.2f\n", a * b);
  c->operacion = '*';
  c->primerNumero = a;
  c->segundoNumero = b;
  c->Resultado = a * b;
  e->multiplicacion = a * b;
  indice++;
}
void dividir(double a, double b, historial *c, ultimoResultado *e) {
  printf("El resultado de la division es : %.2f\n", a / b);
  c->operacion = '/';
  c->primerNumero = a;
  c->segundoNumero = b;
  c->Resultado = a / b;
  e->division = a / b;
  indice++;
}
void potencia(double a, double b, historial *c, ultimoResultado *e) {

  printf("\nEl resultado de la potencia es : %.2f", pow(a, b));
  c->operacion = '^';
  c->primerNumero = a;
  c->segundoNumero = b;
  c->Resultado = pow(a, b);
  e->potenci = pow(a, b);
  indice++;
}
void raiz(double a, ultimoResultado *e, historial *c) {
  double b;
  b = sqrt(a);
  printf("\nLa Raiz cuadrada de %.2lf es : %.2lf", a, b);
  printf("\n");
  c->operacion = 'r2';
  c->primerNumero = a;
  c->Resultado = b;
  e->raizcuadrada = b;
  indice++;
}
void menu(char *opc) {

  printf("\n1.Suma...");
  printf("\n2.Resta...");
  printf("\n3.Multiplicacion...");
  printf("\n4.Division...");
  printf("\n5.Raiz cuadrada...");
  printf("\n6.Potencia...");
  printf("\n7.Calcular seno , coseno o tangente...");
  printf("\n8.Historial...");
  printf("\n0.Salir...");
  printf("\nIngrese una opcion(0-8): ");
  scanf("%s", opc);
}
void pedirNum(double *a, double *b) {
  printf("\nIngrese el primer numero: ");
  scanf("%lf", a);
  printf("\nIngrese el segundo numero: ");
  scanf("%lf", b);
}

#include <stdio.h>

double evaluarFuncion(double x);

int main() {
  double x0, x1, errorPorcentaje;
  double x2, f0, f1;
  double error;

  printf("Ingrese el x0: ");
  scanf("%lf", &x0);
  printf("Ingrese el x1: ");
  scanf("%lf", &x1);
  printf("Ingrese el porcentaje de error: ");
  scanf("%lf", &errorPorcentaje);

  f0 = evaluarFuncion(x0);
  f1 = evaluarFuncion(x1);

  do {
    x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);
    error = x2 - x1;
    if (error < 0) 
      error = -error;
    error = (error / x2) * 100;

    printf("Aproximación: %lf, Error: %lf%%\n", x2, error);

    x0 = x1;
    f0 = f1;
    x1 = x2;
    f1 = evaluarFuncion(x2);
  } while (error > errorPorcentaje);

  printf("Raíz aproximada: %lf\n", x2);

  return 0;
}

double evaluarFuncion(double x) {
    return (x * x) - 4;
}


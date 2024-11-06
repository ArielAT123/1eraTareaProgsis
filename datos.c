#include <math.h>
#include "datos.h"
#include <stdio.h>
#define  PI 3.14159265358979323846


void triangulo() {
    float base, altura, lado1, lado2, lado3;
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado del triángulo: ");
    scanf("%f", &lado3);
    printf("Área: %.2f m2\n", (base * altura) / 2);
    printf("Perímetro: %.2f m2\n", lado1 + lado2 + lado3);
}

void paralelogramo() {
    float base, altura, lado;
    printf("Ingrese la base del paralelogramo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del paralelogramo: ");
    scanf("%f", &altura);
    printf("Ingrese la longitud del lado: ");
    scanf("%f", &lado);
    printf("Área: %.2f m2\n", base * altura);
    printf("Perímetro: %.2f m2\n", 2 * (base + lado));
}

void cuadrado() {
    float lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    printf("Área: %.2f m2\n", lado * lado);
    printf("Perímetro: %.2f m2\n", 4 * lado);
}

void rectangulo() {
    float base, altura;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    printf("Área: %.2f m2\n", base * altura);
    printf("Perímetro: %.2f m2\n", 2 * (base + altura));
}

void rombo() {
    float D, d, lado;
    printf("Ingrese la diagonal mayor del rombo: ");
    scanf("%f", &D);
    printf("Ingrese la diagonal menor del rombo: ");
    scanf("%f", &d);
    printf("Ingrese el lado del rombo: ");
    scanf("%f", &lado);
    printf("Área: %.2f m2\n", (D * d) / 2);
    printf("Perímetro: %.2f m2\n", 4 * lado);
}

void trapecio() {
    float B, b, altura, lado1, lado2;
    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &B);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &b);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);
    printf("Ingrese el primer lado paralelo: ");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado paralelo: ");
    scanf("%f", &lado2);
    printf("Área: %.2f m2\n", ((B + b) * altura) / 2);
    printf("Perímetro: %.2f m2\n", B + b + lado1 + lado2);
}

void circulo() {
    float radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    printf("Área: %.2f m2\n", PI * radio * radio);
    printf("Perímetro (circunferencia): %.2f m2\n", 2 * PI * radio);
}

void poligono() {
    float perimetro, apotema, num_lados, lado;
    printf("Ingrese el número de lados del polígono: ");
    scanf("%f", &num_lados);
    printf("Ingrese la longitud de un lado: ");
    scanf("%f", &lado);
    printf("Ingrese el apotema del polígono: ");
    scanf("%f", &apotema);
    perimetro = num_lados * lado;
    printf("Área: %.2f m2\n", (perimetro * apotema) / 2);
    printf("Perímetro: %.2f m2\n", perimetro);
}

void cubo() {
    float lado;
    printf("Ingrese el lado del cubo: ");
    scanf("%f", &lado);
    printf("Superficie: %.2f m3\n", 6 * lado * lado);
    printf("Volumen: %.2f m3\n", pow(lado, 3));
}

void cuboide() {
    float largo, ancho, altura;
    printf("Ingrese el largo del cuboide: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho del cuboide: ");
    scanf("%f", &ancho);
    printf("Ingrese la altura del cuboide: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f m3\n", 2 * (largo * ancho + ancho * altura + largo * altura));
    printf("Volumen: %.2f m3\n", largo * ancho * altura);
}

void cilindro() {
    float radio, altura;
    printf("Ingrese el radio del cilindro: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f m3\n", 2 * PI * radio * (radio + altura));
    printf("Volumen: %.2f m3\n", PI * pow(radio, 2) * altura);
}

void esfera() {
    float radio;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);
    printf("Superficie: %.2f m3\n", 4 * PI * pow(radio, 2));
    printf("Volumen: %.2f m3\n", (4.0/3) * PI * pow(radio, 3));
}

void cono() {
    float radio, altura;
    
    printf("Ingrese el radio del cono: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cono: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f m3\n", PI * radio * (radio + sqrt(pow(altura, 2) + pow(radio, 2))));
    printf("Volumen: %.2f m3\n", (PI * pow(radio, 2) * altura) / 3);
}
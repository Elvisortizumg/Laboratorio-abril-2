#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int i, Notas[4], SumaNot, Promedio;
	printf("Promedio de los 4 semestres del alumno: \n\n");
	for(i=1;i<5;i++){
		printf("Ingrese la nota del semestre No.%d \n", i);
		scanf("%d", &Notas[i]);
		printf("\n");
	}
	for(i=1;i<5;i++){
		SumaNot +=Notas[i];
	}
	Promedio=SumaNot/4;
	printf("El promedio del alumno es: %d \n", Promedio);
	system("pause");
}

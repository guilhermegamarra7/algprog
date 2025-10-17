#include <stdio.h>
#include <math.h>

int menu (void) {
	printf("Entre com uma das opcoes: \n");
	printf("1 - Calcula a media harmonica de 3 numeros reais\n");
	printf("2 - Calcula a media geometrica de 3 numeros reais\n");
	printf("3 - Sair\n");
	printf("Opcao: ");
}

float m_harmonica(void) {
	float a, b, c, mh;
	printf("Entre com os 3 valores: ");
	scanf("%f%f%f", &a, &b, &c);
	mh = 3.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c));
	return mh;
}

float m_geometrica(void) {
	float a, b, c, mg;
	printf("Entre com os 3 valores: ");
	scanf("%f%f%f", &a, &b, &c);
	mg = pow(a * b * c, 1.0 / 3.0);
	return mg;
}

int main() {
	int op;
	float mh, mg;

	do {
		menu();
		scanf("%d", &op);
		switch (op) {
		case 1:
			mh = m_harmonica();
			printf("Media harmonica: %f\n", mh);
			break;
		case 2:
			mg = m_geometrica();
			printf("Media geometrica: %f\n", mg);
			break;
		}
	} while (op != 3);

	return 0;
}
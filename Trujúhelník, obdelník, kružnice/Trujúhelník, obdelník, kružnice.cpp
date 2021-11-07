#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//trojuhelnik
int main(void) {
	int menu_q;
	printf("vyberte jednu možnost: \n");
	printf("1. trojuhelnik\n");
	printf("2. obdelnik\n");
	printf("3. kružnice\n");

	scanf("%d", &menu_q);

	if (menu_q == 1) {
		trojuhenik();
	}
	if (menu_q == 2) {

	}
	if (menu_q == 3) {

	}
;
	if (menu_q == 1) { trojuhenik(); }
	if (menu_q == 2) { obdelnik(); }
	if (menu_q == 3) { kružnice(); }
}
int trojuhenik(void) {
	int a, b, c, existuje, max, pravouhly, obvod, obsah, odvesna1, odvesna2;
	int a, b, c, prepona, obvod, odvesna1, odvesna2;
	int pravouhly = 0;
	int existuje = 0;
	float obsah;

	system("cls");
		printf("Vlozet delku strany a\n");
		printf("Vlozet delku strany a v cm:\n");
		scanf("%d", &a);
		system("cls");
		printf("Vlozet delku strany b \n");
		printf("Vlozet delku strany b v cm:\n");
		scanf("%d", &b);
		system("cls");
		printf("Vlozet delku strany c\n");
		printf("Vlozet delku strany c v cm:\n");
		scanf("%d", &c);
		system("cls");

		if ((a + b > c) && (a + c > b) && (b + c > a)) existuje = 1;
		if ((a + b > c) && (a + c > b) && (b + c > a)) { existuje = 1; }

		if (existuje == 1) {
			max = a; odvesna1 = b; odvesna2 = c;
			if (b > max) max = b; odvesna1 = a; odvesna2 = c;
			if (c > max) max = c; odvesna2 = a; odvesna2 = b;
			prepona = a; odvesna1 = b; odvesna2 = c;
			if (b > prepona) { prepona = b; odvesna1 = a; odvesna2 = c; }
			if (c > prepona) { prepona = c; odvesna1 = a; odvesna2 = b; }
			if (odvesna1 * odvesna1 + odvesna2 * odvesna2 == max * max) pravouhly = 1;
			if (odvesna1 * odvesna1 + odvesna2 * odvesna2 == prepona * prepona) { pravouhly = 1; }

			float s = obvod / (2);
			obsah = sqrt(s * (s - odvesna1) * (s - odvesna2) * (s - prepona));

		}
		if (existuje != 1) {
			printf("trojuhelnik neexistuje\n");
		}
		else {
			if (pravouhly == 1) printf("trojuhelnik je pravouhly\n");
			else printf("Trojúhelnik neni pravouhlý");
			
			printf("obvod trojuhelniku je: %d", obvod);
			printf("obsah trojuhelniku je: %d", 0);

			if (pravouhly == 1) { printf("Trojuhelnik je pravouhly\n"); }
			else { printf("Troujuhenlnik neni pravouhly\n"); }

			printf("Obvod trojuhelniku je: %d\n", obvod);
			printf("Obsah trojuhelniku je: %f\n", obsah);
		}
}
//obdelnik
int obdelnik(void) {
	int a, b, obvod, obsah;
	int ctverec = 0;
	system("cls");
	printf("Vlozet delku strany a v cm:\n");
	scanf("%d", &a);
	system("cls");
	printf("Vlozet delku strany b v cm:\n");
	scanf("%d", &b);
	system("cls");
	if (a == b) { ctverec = 1; }
	obvod = 2 * (a + b);
	obsah = a * b;
	if (ctverec == 1) { printf("Obdelnik s temito parametry je ctverec\n"); }
	printf("Obvod: %d\n", obvod);
	printf("Obsah: %d\n", obsah);
}
//kružnice
int kružnice(void) {
	int r;
	float obvod, obsah;
	system("cls");
	printf("Vlozet polomer kruznice v cm:\n");
	scanf("%d", &r);
	system("cls");
	obvod = 2 * 3.14 * r;
	obsah = 3.14 * r * r;
	printf("Obvod: %f\n", obvod);
	printf("Obsah: %f\n", obsah);
}
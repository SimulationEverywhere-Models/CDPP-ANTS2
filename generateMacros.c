#include <stdio.h>

void generarMacroCelda(int x, int y, FILE *fp, char *s, int valor);
void generarMacrosCelda(int x, int y, FILE *fp);
void generarMacroNadaUHormiga(int x, int y, FILE *fp);
void generarMacrosHormiga(int x, int y, FILE *fp);
void generarMacroDireccion(int x, int y, FILE *fp);
void generarMacroDireccionOpuesta(int x, int y, FILE *fp);
void generarMacroCantidadComida(int x, int y, FILE *fp);
void generarMacroFeromonas(int x, int y, FILE *fp);

void generarMacroNuevaDireccion(FILE *fp);

int main() {
	FILE *fp;

	fp = fopen("salida.out", "w");

	generarMacrosCelda(0, -2, fp);
	generarMacrosCelda(-1, -1, fp);
	generarMacrosCelda(0, -1, fp);
	generarMacrosCelda(1, -1, fp);
	generarMacrosCelda(-2, 0, fp);
	generarMacrosCelda(-1, 0, fp);
	generarMacrosCelda(0, 0, fp);
	generarMacrosCelda(1, 0, fp);
	generarMacrosCelda(2, 0, fp);
	generarMacrosCelda(-1, 1, fp);
	generarMacrosCelda(0, 1, fp);
	generarMacrosCelda(1, 1, fp);
	generarMacrosCelda(0, 2, fp);

	generarMacroNuevaDireccion(fp);

	fclose(fp);
}

void generarMacrosCelda(int x, int y, FILE *fp) {
	fprintf(fp, "%% Macros para (%d,%d)\n", x, y);
	generarMacroCelda(x, y, fp, "esNada", 0);
	fprintf(fp, "\n");
	generarMacroCelda(x, y, fp, "esComida", 1);
	fprintf(fp, "\n");
	generarMacroNadaUHormiga(x, y, fp);
	fprintf(fp, "\n");
	generarMacrosHormiga(x, y, fp);
	fprintf(fp, "\n");
	generarMacroCelda(x, y, fp, "esObstaculo", 3);
	fprintf(fp, "\n");
	generarMacroDireccion(x, y, fp);
	fprintf(fp, "\n");
	generarMacroDireccionOpuesta(x, y, fp);
	fprintf(fp, "\n");
	generarMacroCantidadComida(x, y, fp);
	fprintf(fp, "\n");
	generarMacroFeromonas(x, y, fp);
	fprintf(fp, "\n");
}

void generarMacroCelda(int x, int y, FILE *fp, char *s, int valor) {
	fprintf(fp, "#BeginMacro(%s%d%d)\n", s, x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "trunc(remainder((%d,%d)/10000,10)) = %d\n", x, y, valor);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroNadaUHormiga(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(esNadaHor%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "((trunc(remainder((%d,%d)/10000,10)) = 0) or (trunc(remainder((%d,%d)/10000,10)) = 2))\n", x, y, x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacrosHormiga(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(esHormiga%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "trunc(remainder((%d,%d)/10000,10)) = 2\n", x, y);
	fprintf(fp, "#EndMacro\n");
	fprintf(fp, "\n");
	fprintf(fp, "#BeginMacro(esHormigaB%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "(trunc(remainder((%d,%d)/10000,10)) = 2 and trunc(remainder((%d,%d) / 1000,10)) = 0)\n", x, y, x, y);
	fprintf(fp, "#EndMacro\n");
	fprintf(fp, "\n");
	fprintf(fp, "#BeginMacro(esHormigaC%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "(trunc(remainder((%d,%d)/10000,10)) = 2 and trunc(remainder((%d,%d) / 1000,10)) = 1)\n", x, y, x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroDireccion(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(dir%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "trunc(remainder((%d,%d),10))\n", x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroDireccionOpuesta(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(dirOp%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "if(trunc(remainder((%d,%d),10)) > 1,trunc(remainder((%d,%d),10)) - 2,trunc(remainder((%d,%d),10)) + 2)\n", x, y, x, y, x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroCantidadComida(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(comida%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "trunc(remainder((%d,%d), 100))\n", x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroFeromonas(int x, int y, FILE *fp) {
	fprintf(fp, "#BeginMacro(fero%d%d)\n", x < 0 ? x +10 : x, y < 0 ? y +10 : y);
	fprintf(fp, "(remainder(trunc((%d,%d)/10), 100) > 0)\n", x, y);
	fprintf(fp, "#EndMacro\n");
}

void generarMacroNuevaDireccion(FILE *fp) {
	fprintf(fp, "#BeginMacro(nuevaDireccionComida)\n");
	fprintf(fp, "if(trunc(remainder((0,-1)/10000,10)) = 1,0,if(trunc(remainder((1,0)/10000,10)) = 1,1,if(trunc(remainder((0,1)/10000,10)) = 1,2,if(trunc(remainder((-1,0)/10000,10)) = 1,3,randint(3)))))\n");
	fprintf(fp, "#EndMacro\n");
	fprintf(fp, "#BeginMacro(nuevaDireccionFeromonas)\n");
	fprintf(fp, "if((trunc(remainder((0,-1)/10000,10)) = 0) and (remainder(trunc((0,-1)/10), 100) > 0) and (trunc(remainder((0,-1),10)) = 2),0,if((trunc(remainder((1,0)/10000,10)) = 0) and (remainder(trunc((1,0)/10), 100) > 0) and (trunc(remainder((1,0),10)) = 3),1,if((trunc(remainder((0,1)/10000,10)) = 0) and (remainder(trunc((0,1)/10), 100) > 0) and (trunc(remainder((0,1),10)) = 0),2,if((trunc(remainder((-1,0)/10000,10)) = 0) and (remainder(trunc((-1,0)/10), 100) > 0) and (trunc(remainder((-1,0),10)) = 2),3,randint(3)))))\n");
	fprintf(fp, "#EndMacro\n");
}
/*
	(trunc(remainder((0,-1)/10000,10)) = 0) and (remainder(trunc((0,-1)/10), 100) > 0) and (trunc(remainder((0,-1),10)) = 2) // 0
	(trunc(remainder((1,0)/10000,10)) = 0) and (remainder(trunc((1,0)/10), 100) > 0) and (trunc(remainder((1,0),10)) = 3) // 1
	(trunc(remainder((0,1)/10000,10)) = 0) and (remainder(trunc((0,1)/10), 100) > 0) and (trunc(remainder((0,1),10)) = 0) // 2
	(trunc(remainder((-1,0)/10000,10)) = 0) and (remainder(trunc((-1,0)/10), 100) > 0) and (trunc(remainder((-1,0),10)) = 2) // 3

if((trunc(remainder((0,-1)/10000,10)) = 0) and (remainder(trunc((0,-1)/10), 100) > 0) and (trunc(remainder((0,-1),10)) = 2),0,if((trunc(remainder((1,0)/10000,10)) = 0) and (remainder(trunc((1,0)/10), 100) > 0) and (trunc(remainder((1,0),10)) = 3),1,if((trunc(remainder((0,1)/10000,10)) = 0) and (remainder(trunc((0,1)/10), 100) > 0) and (trunc(remainder((0,1),10)) = 0),2,if((trunc(remainder((-1,0)/10000,10)) = 0) and (remainder(trunc((-1,0)/10), 100) > 0) and (trunc(remainder((-1,0),10)) = 2),3,randint(3)))))
*/
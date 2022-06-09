#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void digitaRotor(int *rot)
{
	for(int i = 0; i < 26; i++)
		scanf("%d", &rot[i]);
}

char enigmaMachine(char letter, int rot1[], int rot2[], int rot3[]){
    int letra = letter;
    int alfaValor;
    int deciValor;
    if(letra >= 97) {
        alfaValor = letra - 97;
        deciValor = rot3[rot2[rot1[alfaValor]]];
        return (char)deciValor + 97;
    } else {
        alfaValor = letra-65;
        deciValor = rot3[rot2[rot1[alfaValor]]];
        return (char)deciValor + 65;
    }
}

void rotacionaRotor(int *rot){
	int ini = rot[0];
	for (int i = 0; i < 25; i++){
        rot[i] = rot[i+1];
	}
	rot[25] = ini;
}

int main() {
    int rotor1[26];
    int rotor2[26];
    int rotor3[26];
    int count = 0, countR1 = 0, countR2 = 0;
    char *mensagem = NULL;

    scanf("%*[^\r\n]s");
    digitaRotor(rotor1);
    digitaRotor(rotor2);
    digitaRotor(rotor3);
    scanf("%*[\r\n]s");
	scanf("%*[^\r\n]s");
	char tecla;
	scanf("%c", &tecla);

    while(scanf("%c", &tecla) != EOF) {
        int teclaASCII = (int)tecla;
        if((teclaASCII >= 65 && teclaASCII <= 90) || (teclaASCII >= 97 && teclaASCII <= 122)) {
            tecla = enigmaMachine(tecla, rotor1, rotor2, rotor3);
            rotacionaRotor(rotor1);
            countR1 += 1;
            if(countR1 == 26) {
                rotacionaRotor(rotor2);
                countR2 += 1;
                if(countR2 == 26) {
                    rotacionaRotor(rotor3);
                    countR2 = 0;
                }
                countR1 = 0;
            }
        }

        mensagem = realloc(mensagem, sizeof(char)*(count+1));
        mensagem[count] = tecla;
        count += 1;
    }
    mensagem[count] = '\0';
    printf("%s", mensagem);
    return 0;
}

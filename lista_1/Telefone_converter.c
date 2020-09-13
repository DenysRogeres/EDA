/*
Telefone
As primeiras redes públicas de telefonia foram construídas pela AT&T, no começo do século XX. Elas permitiam que seus
assinantes conversassem com a ajuda de uma telefonista, que conectava as linhas dos assinantes com um cabo especial.
Essas redes evoluíram muito desde então, com a ajuda de vários avanços tecnológicos. Hoje em dia, essas redes atendem
centenas de milhões de assinantes. Ao invés de falar diretamente com uma telefonista, você pode simplesmente discar o
número da pessoa desejada no telefone.
Cada assinante recebe um número de telefone - por exemplo, 55-98-234-5678. Qualquer pessoa que discar esse número
consegue então falar com a pessoa do outro lado da linha. Os hífens no número de telefone são só para facilitar a leitura, e
não são discados no telefone.
Para que fique mais fácil de se lembrar de um número de telefone, muitas companhias divulgam números que contém
letras no lugar de dígitos. Para convertê-los de volta para dígitos, a maioria dos telefones tem letras nas suas teclas:
Ao invés de discar uma letra, disca-se a tecla que contém aquela letra. Por exemplo, se você quiser discar o número
0800-FALE-SBC, você na realidade discaria 0800-3253-722.
A sua avó tem reclamado de problemas de vista - em particular, ela não consegue mais enxergar as letrinhas nas teclas do
telefone, e por isso queria que você fizesse um programa que convertesse as letras em um número de telefone para dígitos.
Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado).
A entrada é composta de apenas uma linha, contendo o número de telefone que deve ser traduzido. O número de telefone
contém entre 1 e 15 caracteres, que podem ser dígitos e ‘0’ a ‘9’, letras de ‘A’ a ‘Y’ e hífens (‘-’).
Saída
Seu programa deve imprimir, na saída padrão, uma única linha, contendo o número de telefone com as letras convertidas
para dígitos. Hífens no número telefone devem ser mantidos no número de telefone de saída.
Exemplo de Entrada 1
55-98-234-5678
Exemplo de Saída 1
55-98-234-5678
1
Exemplo de Entrada 2
0800-FALE-SBC
Exemplo de Saída 2
0800-3253-722
Exemplo de Entrada 3
M1S-TU-R4
Exemplo de Saída 3
617-88-74
*/

#include <stdio.h>
#include <string.h>

int main(){
	char telefone[15];
	scanf("%s", telefone);

	for(int i=0; i<15; i++){
		if(telefone[i]=='A' || telefone[i]=='B' || telefone[i]=='C'){
			telefone[i]='2';
		}

		else if(telefone[i]== 'D' || telefone[i]=='E' || telefone[i]=='F'){
			telefone[i]='3';
		}

		else if(telefone[i]=='G' || telefone[i]=='H' || telefone[i]=='I'){
			telefone[i]='4';
		}

		else if(telefone[i]=='J' || telefone[i]=='K' || telefone[i]=='L'){
			telefone[i]='5';
		}

		else if(telefone[i]=='M' || telefone[i]=='N' || telefone[i]=='O'){
			telefone[i]='6';
		}

		else if(telefone[i]=='P' || telefone[i]=='Q' || telefone[i]=='R' || telefone[i]=='S'){
			telefone[i]='7';
		}

		else if(telefone[i]=='T' || telefone[i]=='U' || telefone[i]=='V'){
			telefone[i]='8';
		}

		else if(telefone[i]=='W' || telefone[i]=='X' || telefone[i]=='Y' || telefone[i]=='Z'){
			telefone[i]='9';
		}

	}
	
	printf("%s\n", telefone);
	return 0;
}

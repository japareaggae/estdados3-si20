/*
 * 2014-02-26 - 04
 * Crie uma estrutura com entradas: nome, matrícula e sexo
 * Depois defina o percentual de alunos de cada sexo
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int quant_alunos = 10;

	struct aluno{
		int matricula;
		char* nome;
		char sexo;
	};

	struct aluno Alunos[quant_alunos];

	Alunos[0].sexo = 'm';
	Alunos[1].sexo = 'f';
	Alunos[2].sexo = 'm';
	Alunos[3].sexo = 'f';
	Alunos[4].sexo = 'm';
	Alunos[5].sexo = 'f';
	Alunos[6].sexo = 'f';
	Alunos[7].sexo = 'f';
	Alunos[8].sexo = 'f';
	Alunos[9].sexo = 'f';

	int i;
	int m_count = 0;
	int f_count = 0;

	for (i=0; i<quant_alunos; i++){
		if (Alunos[i].sexo == 'm') m_count++;
		if (Alunos[i].sexo == 'f') f_count++;
	}

	// m_count e quant_alunos são variáveis inteiras e no C,
	// divisões de números inteiros são arredondadas.
	// A divisão (m_count / quant_alunos) pode retornar 0 ou 1.
	// Para evitar isso, convertemos temporariamente as variáveis para float
	float m_perc = ( (float)m_count / (float)quant_alunos ) * 100;
	float f_perc = ( (float)f_count / (float)quant_alunos ) * 100;

	printf("  Homens: %d (%.3f%%)\n",  m_count, m_perc);
	printf("Mulheres: %d (%.3f%%)\n",  f_count, f_perc);

	exit(EXIT_SUCCESS);
}

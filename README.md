# -exercicio-struct-funcoes-c
Exercício de revisão sobre structs, funções e passagem de parâmetros em C

*Crie um programa em C que gerencie as informações de estudantes. O programa deve
permitir:
1. Inserir dados de um estudante (nome, idade e nota).
2. Atualizar a nota de um estudante.
3. Mostrar as informações de um estudante.
Detalhes:
1. Use uma struct chamada Estudante que contenha:
o Nome (string com no máximo 50 caracteres),
o Idade (inteiro),
o Nota (float).
2. Crie as seguintes funções:
o void inserirDados(Estudante *e): Insere os dados de um estudante.
(passagem por referência)
o void atualizarNota(Estudante *e, float novaNota): Atualiza a
nota de um estudante. (passagem por referência)
o void mostrarDados(Estudante e): Mostra os dados de um estudante.
(passagem por valor)
Regras:
 Utilize as funções para manipular a struct, evitando o uso direto das variáveis da
struct no main.
 Crie exemplos no main para testar o funcionamento do programa.


*Crie um programa em C que simule um sistema básico de gerenciamento de alunos, utilizando matrizes e structs. Cada aluno será representado por uma struct contendo nome, matrícula, data de nascimento e notas em 4 disciplinas. Os dados dos alunos serão armazenados em uma matriz de structs.Calcular a média geral de cada aluno e exibir. Verificar se o aluno foi aprovado (média >= 7.0) mostrando uma mensagem!

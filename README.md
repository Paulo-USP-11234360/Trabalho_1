# Como executar o programa do Trabalho 1

Este é um programa em C que soma,multiplica e subtrai 2 em cada elemento de um array

## Funcionalidades

O programa consiste em quatro arquivos principais e um arquivo de header:

1. 'main.c': Contém a função principal 'main', onde os arrays são inicializados e as funções são chamadas para realizar operações de soma, subtração e multiplicação.

2. 'soma2.c': Contém a função 'soma2', que adiciona 2 a cada elemento de um array.

3. 'subtrai2.c': Contém a função 'subtrai2', que subtrai 2 de cada elemento de um array.

4. 'multiplica2.c': Contém a função 'multiplica2', que multiplica cada elemento de um array por 2.

5. 'funcoes.h': arquivo de header para as funções

Cada função é definida em seu respectivo arquivo `.c` e é chamada a partir da função `main` no arquivo `main.c`.

## Como Executar

Para compilar e executar o programa no terminal, seguindo as seguintes etapas:

1. Certifique-se de que você tem um compilador C instalado, como o GCC.

2. Abra um terminal e navegue até a pasta onde estão localizados os arquivos do programa

3. Use o comando 'make' para compilar o programa. Isso criará um executável chamado 'main'.

4. Após a compilação bem-sucedida, execute o programa com o seguinte comando: './main'
OBS: Se houver erros de compilação, eles serão exibidos no terminal, e você precisará corrigi-los antes de poder executar o programa

5. O programa imprimirá os arrays antes e depois de realizar as operações de soma, subtração e multiplicação.

6. Você verá os resultados no terminal.

7. Após a execução bem-sucedida do programa, você pode usar o comando 'make clean' para remover os arquivos de objeto e o executável gerados, se desejar.






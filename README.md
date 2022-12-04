# Biblioteca arquivos
## O que é a biblioteca "arquivos.h"?

    A biblioteca "arquivos.h" é uma biblioteca com algumas funções que envolvem arquivos, como escrever, ler etc.

## Como usar a "arquivos.h"?
    Para usar você precisa adicionar o arquivo para a pasta do seu projeto e usar o comando #include "arquivos.h", lembrando que isso é uma referencia relativa então se estiver em uma pasta dentro da do seu arquivo é preciso colocar "nome da pasta"// e se estiver acima ..//

## Aviso! 
- Todas as funções dessa biblioteca começam com a abreviação "Arq".
- Algumas funções usam Structs então se for usar elas mude o tipo delas e se não for usar comente elas.

---

### ArqDeletarStc:
Sintaxe: ArqDeletarStc(**Tipo da struct** *Struct, **int** tamanho da struct, **int** posição para deletar, **FILE** *ponteiro do arquivo, **char** *nome e tipo do arquivo, **char** método para abri)

    Deleta uma struct de uma posição, retornando o novo tamanho da struct e escrevendo tudo no arquivo de texto.

### ArqEscreverStc:
 Sintaxe: ArqEscreverStc(**Tipo da struct** *Struct, **int** tamanho da struct, **FILE** *ponteiro do arquivo, **char** *nome e tipo do arquivo, **char** método para abri)

    Escreve toda a struct em um arquivo e retorna 1, caso o arquivo não exista ela retorna -1.

### ArqLerStc:
 Sintaxe: ArqEscreverStc(**Tipo da struct** *Struct, **FILE** *ponteiro do arquivo, **char** *nome e tipo do arquivo)

    Ler um arquivo que guarda uma struct o colocando na memória, retorna o tamanho da struct-1, caso de erro ou o arquivo não tiver nada ela retorna -1.

---

Eu ainda tenho muitas ideias para essa biblioteca e com o tempo vou coisas novas, e fiquem livres para poder dar sugestões de funções que vocês colocariam, lembrando que essa biblioteca é para a linguagem C/C++.
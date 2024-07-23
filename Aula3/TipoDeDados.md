## Aula 3: tipo de dados simples.

### Tabela de Tipos de Dados em C

| Tipo                | Total de bits | Intervalo mínimo      | Intervalo máximo      |   Formato    |
|---------------------|---------------|-----------------------|-----------------------|--------------|
| `char`              | 8             | -128                  | 127                   | `%c` ou `%d` |
| `unsigned char`     | 8             | 0                     | 255                   |     `%u`     |
| `signed char`       | 8             | -128                  | 127                   | `%i` ou `%d` |
| `int`               | 16            | -32.768               | 32.767                | `%i` ou `%d` |
| `unsigned int`      | 16            | 0                     | 65.535                |     `%u`     |
| `signed int`        | 16            | -32.768               | 32.767                | `%i` ou `%d` |
| `short int`         | 16            | -32.768               | 32.767                | `%i` ou `%d` |
| `unsigned short int`| 16            | 0                     | 65.535                |     `%u`     |
| `signed short int`  | 16            | -32.768               | 32.767                |              |
| `long int`          | 32            | -2.147.483.648        | 2.147.483.647         |              |
| `signed long int`   | 32            | -2.147.483.648        | 2.147.483.647         |              |
| `unsigned long int` | 32            | 0                     | 4.294.967.295         |              |
| `float`             | 32            | 3.4E-38               | 3.4E+38               |              |
| `double`            | 64            | 1.7E-308              | 1.7E+308              |              |
| `long double`       | 80            | 3.4E-4932             | 3.4E+4932             |              |


Quando o tipo do dado for um ponteiro, ele pod ser apresentado em hexadecimal com o uso do formato %p
Qualquer valor inteiro pode ser apresentado em hexadecimal com o uso do formato %x (letras minusculas) ou %X
(letras maiusculas).
Qualquer valor inteiro pode ser apresentado em octal com o uso do formato %o.


### FORMATOS USADOS em `printf` e `scanf`

| Código | Usado para                                           |
|--------|------------------------------------------------------|
| `%c`   | Ler ou escrever um caractere                         |
| `%d`   | Ler ou escrever inteiro em formato decimal           |
| `%i`   | Ler ou escrever um inteiro                           |
| `%e`   | Ler ou escrever um número em notação científica (com `e` minúsculo) |
| `%E`   | Ler ou escrever um número em notação científica (com `E` maiúsculo) |
| `%f`   | Ler ou escrever um ponto flutuante em formato decimal |
| `%g`   | Escreve um ponto flutuante com `%e` ou `%f`, o que for menor |
| `%G`   | O mesmo que `%g`, só que usa um `E` maiúsculo         |
| `%o`   | Ler ou escrever um número em notação octal           |
| `%s`   | Ler ou escrever uma string                           |
| `%u`   | Ler ou escrever um decimal sem sinal                 |
| `%x`   | Ler ou escrever um número em hexadecimal com letras minúsculas |
| `%X`   | Ler ou escrever um número em hexadecimal com letras maiúsculas |
| `%%`   | Escrever o símbolo `%`                               |
| `%p`   | Ler ou escrever um ponteiro                          |



### OPERADORES: usados para criar expressões aritméticas, expressões relacionais e expressões lógicas

#### OPERADORES ARITMÉTICOS

| Operador | Operação         |
|----------|------------------|
| `+`      | soma             |
| `-`      | subtração        |
| `*`      | multiplicação    |
| `/`      | divisão inteira  |
| `%`      | módulo           |
| `++`     | incremento       |
| `--`     | decremento       |


#### OPERADORES RELACIONAIS

Produz 1 (true) ou 0 (false)

| Operador | Operação          |
|----------|-------------------|
| `==`     | igual             |
| `!=`     | diferente         |
| `>`      | maior do que      |
| `<`      | menor do que      |
| `>=`     | maior ou igual    |
| `<=`     | menor ou igual    |


#### OPERADORES LÓGICOS

Usados para conectar valores lógicos (expressões lógicas). Produz 1 (true) ou 0 (false)

| Operador | Operação |
|----------|----------|
| `&&`     | AND (E)  |
| `\|\|`     | OR (OU)  |
| `!`      | NOT (NÃO)|


#### OPERADORES BITWISE

Operam diretamente sobre os bits (binários) de um valor inteiro armazenado na memória. São operadores aritméticos.

| Operador | Operação                                    |
|----------|---------------------------------------------|
| `&`      | AND aritmético                              |
| `\|`      | OR aritmético                               |
| `^`      | XOR aritmético                              |
| `~`      | NOT aritmético (unário)                     |
| `<<`     | Deslocamento (shift) de bits para esquerda  |
| `>>`     | Deslocamento (shift) de bits para direita   |




# Projeto de Estruturas de Repetição

- Aluna: Anna Clara Damasceno de Almeida
- Disciplina: Algoritmo e Pensamento Computacional
- Professora: **Profa. Karla Sartin**


## Monitoramento de Temperatura



**Limite de Temperatura**: O limite é lido no início do programa dentro de um bloco `do-while`, o valor digitado deve ser obrigatoriamente maior que zero, caso o usuário digite um número negativo ou qualquer coisa que não seja um número, o programa se repete ate receber um número válido.

**Leituras**: As leitura são feitas de forma contínua com um laço `while`, em cada repetição o programa solicita um novo valor e o armazena na variável `float temp`.

**Valores Inválidos**: Tanto na solicitação do limite de temperatura e nos valos da leitura, o programa verifica o retorno do `scanf`, caso o usuário digite uma letra ou um símbolo o `scanf` não retorna e exibe um mensagem de erro na tela. O programa utiliza do `while` ate o usuário inserir uma entrada válida.

**Temperaturas acima do Limite**: Após uma leitura válida da temperatura, o programa utiliza uma condicional `if (temp > limete_temp)`. Se a temperatura for acima do limite, o programa soma a temperatura ao total de leituras acima do limite `(acima_limte++)` e inicia a contagem de temperaturas altas acima do limite.

**Contagem de Temperaturas Consecutivas**: O programa utiliza a variável `consecutivas_acima`, caso o usuário digite uma temperatura maior que a do limite estabelecido no início do programa, é adicionado +1 na contagem e um alerta é exibido na tela ( 1/3, 2/3, 3/3). O contador zera caso uma temperatura menor for menor ou igual ao limite, reiniciando a sequencia.

**Encerramento do Monitoramento**: O monitoramento pode se encerrar manualmente caso o usuário digite `000`, ou pode se encerrar automaticamente se a variável `consecutivas_acima` atingir o valor de 3 leituras acima do limite estabelecido, o programa ativa o desligamento e interrompe o laço com `break`.


## Estrutura de Repetição

O laço `do-while` foi escolhido para garantir que o programa peça o limite de temperatura assim que for iniciado, ele força o usuário a fornecer uma valor válido, caso não seja válido, o programa se repete.

O laço `while` foi utilizado na coleta das temperaturas. O `while (1)` cria um laço infinito, pois o número 1 representa uma condição sempre verdadeira em C, o programa lê o valor digitado pelo usuário, e caso ele seja verdadeiro o programa continua solicitando por mais valores ate ser quebrado (manualmente ou automaticamente), caso a temperatura digitada seja não seja um valor numérico, o programa exibe uma mensagem e solicita novamente por um valor verdadeiro.


## Como executar 

Execute o código em um **Compilador C**, como  `Online GDB`

## Testes

**Teste 1**: Validação de entradas inválidas

 - Entrada: `abc`
 - Saída: Entrada Inválida! Digite um valor numérico

 - O programa capturou o erro de digitação, limpou o buffer e solicitou uma nova leitura válida sem quebrar o loop

**Teste 2**: Temperaturas acima do limite, porém não consecutivas

 - Limite de temperatura: `80`
 - Entradas: `70`, `89`, `68`, `90`, `45`, `100`.

 - O programa leu três temperaturas acima do limite, porém não são consecutivas, então o programa roda normalmente

**Teste 3**: Três temperaturas consecutivas acima do limite

 - Limite de temperatura: `80`
 - Entradas: `45`, `87`, `90`, `120`

 - O programa leu três temperatura consecutivas acima do limite o programa então se encerra automaticamente.





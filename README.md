# Projeto-de-Estruturas-de-Repeticao


- Aluna: Anna Clara Damasceno de Almeida
- Disciplina: Algoritmo e Pensamento Computacional
- Professora: Profa. Karla Sartin


## Monitoramento de Temperatura##



**Limite de Temperatura**: O limite é lido no início do programa dentro de um bloco `do-while`, o valor digitado deve ser obrigatoriamente maior que zero, caso o usuário digite um número negativo ou qualquer coisa que não seja um número, o programa se repete ate receber um número válido.

**Leituras**: As leitura são feitas de forma contínua com um laço `while`, em cada repetição o programa solicita um novo valor e o armazena na variável `float temp`.

**Valores Inválidos**: Tanto na solicitação do limite de temperatura e nos valos da leitura, o programa verifica o retorno do `scanf`, caso o usuário digite uma letra ou um símbolo o `scanf` não retorna e exibe um mensagem de erro na tela. O programa utiliza do `while` ate o usuário inserir uma entrada válida.

**Temperaturas acima do Limite**: Após uma leitura válida da temperatura, o programa utiliza uma condicional `if (temp > limete_temp)`. Se a temperatura for acima do limite, o programa soma a temperatura ao total de leituras acima do limite `(acima_limte++)` e inicia a contagem de temperaturas altas acima do limite.

**Contagem de Temperaturas Consecutivas**: O programa utiliza a variável `consecutivas_acima`, caso o usuário digite uma temperatura maior que a do limite estabelecido no início do programa, é adicionado +1 na contagem e um alerta é exibido na tela ( 1/3, 2/3, 3/3). O contador zera caso uma temperatura menor for menor ou igual ao limite, reiniciando a sequencia.

**Encerramento do Monitoramento**: O monitoramento pode se encerrar manualmente caso o usuário digite `000`, ou pode se encerrar automaticamente se a variável `consecutivas_acima` atingir o valor de 3 leituras acima do limite estabelecido, o programa ativa o desligamento e interrompe o laço com `break`.

/*

Planejamento Jogo Paciência

Participantes: Gabriel Mendes Albuquerque; Carine Arantes e Silva Nunes; Hugo Soares Pizzo; José Adolpho Dóra Brandão

Paciência é um jogo de cartas (52) divididas em 4 naipes(Paus, Ouros, Espadilha e Copas), sendo 13 para cada naipe. Cada naipe tem uma cor específica, Paus e Espadilha são preto, Copas e Ouros são vermelho. <-- ISSO É ESSENCIAL PARA A LÓGICA DO JOGO!!
As 13 cartas mencionadas acima são A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K (Sequência organizada)

O jogo começa distribuindo em 7 colunas(mas usaremos em linhas para facilitar) as cartas, sendo 1 única aparecendo (mostrando seu naipe e número ou letra) e as outras escondidas. Ex.:
9E
# QP
# # 2C
# # # KP
# # # # AE
# # # # # 10O
# # # # # # JP

O objetivo é criar 4 sequencias(mencionadas acima) completas alternando as cores, vermelho e preto, o jogador que fizer isso em menos tempo é melhor classificado.
O jogador pode comprar cartas do baralho (Aparecem 3, mas ele pode apenas escolher a primeira, se ele pedir outra do baralho ele não pode pegar a anterior), ele pode também mover cartas de uma pilha para a outra desde que siga a lógica da sequência e cor.

Sequência do que fazer:
#Lembrando, todos os comandos serão digitados pelo jogador, nada de menu, sem switch case.
Tudo que o jogador realizar deve ser salvo e lido quando ele pedir, deve haver a opção de reiniciar o jogo.

1º Criar o baralho com a divisão de cartas, naipes e cores;

2º Distribuir as 7 pilhas iniciais com as cartas cobertas e descobertas de forma aleatória, como se fosse embaralhado;

3ºRealizar uma ação que consegue transferir as cartas entre as pilhas, de acordo com a vontade do jogador, seguindo a lógica;

4ºAdicionar a função de escolher a carta do monte e proíbir a escolha da anterior;

5ºAdicionar a função de transferir uma pilha inteira, ou cartas para o local final

6º Fazer uma função que marque o tempo de jogo e classifique o jogador no final baseado no tempo.
*/



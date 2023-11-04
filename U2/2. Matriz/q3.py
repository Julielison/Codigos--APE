# Escreva um programa que gere aleatoriamente uma matriz quadrada A (cuja ordem será lida) e gere uma matriz B (da mesma ordem de A), onde cada elemento de B corresponderá ao respectivo elemento de A somado a ele os seus índices, sendo que se o elemento for de alguma diagonal (principal ou secundária) deverá ser colocado 0 (zero).
# Veja o exemplo a seguir:
#...
# Ao final, imprima as duas matrizes (no formato de matriz).
#feito: ok
#corrigido: 
import random
o = int(input('Ordem da matriz: '))
matriz_a = [[None]*o for i in range(o)]
matriz_b = [[None]*o for i in range(o)]
print('Matriz A:')
for i in range(o):
    for j in range(o):
        matriz_a[i][j] = random.randint(1,30)
        if (i == j) or (i + j == o - 1):
            matriz_b[i][j] = 0
        else:
            matriz_b[i][j] = matriz_a[i][j] + j+i
        print(f'{matriz_a[i][j]:4}', end='')
    print()
print('Matriz B:')
for i in range(o):
    for j in range(o):
        print(f'{matriz_b[i][j]:4}', end='')
    print()
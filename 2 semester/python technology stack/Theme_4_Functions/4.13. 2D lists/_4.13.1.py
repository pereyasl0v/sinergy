import random 

def el(tmp):
    for i in tmp:
        print(*i)

    return ''
def sum_matr(first,second):

   matrix_3=[[(first[i][j]+second[i][j]) for j in range(n)] for i in range(m)]

            
   return matrix_3

n=int(input('Enter matrix size n\t-\t'))
m=int(input('Enter matrix size m\t-\t'))
print('\n')
matrix_1= [[random.randint(0,10) for j in range(n)]  for i in range(m)]
matrix_2= [[random.randint(0,10) for j in range(n)]  for i in range(m)] 



el(matrix_1)
print("\n\tIt's second matrix\n")
el(matrix_2)
print("\n\tIt's first matrix\n")
print(el(sum_matr(matrix_1,matrix_2)),"\n\tIt's third matrix")
def bhaskara (a,b,c):


    if a == 0:
        print("O valor de a, deve ser diferente de 0")
        #return 1
    delta = (b ** 2) - 4 * a * c

    if delta < 0:
        print("Sem raízes reais")
        #return -1
    else:
        x1 = (-b + delta ** (1 / 2)) / (2 * a)
        x2 = (-b - delta ** (1 / 2)) / (2 * a)
        print("x1: {}, x2: {}".format(x1, x2))
        #return 2

a = float(input('Entre com o valor de a: '))
b = float(input('Entre com o valor de b: '))
c = float(input('Entre com o valor de c: '))

bhaskara (a,b,c)

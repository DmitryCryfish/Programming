print('Введите 2 числа в одну строчку два числа разделенных нужной операндой:')
a,z,b = input().split()
a = int(a)
oper = str(z)
b = int(b)

if oper ==('+'):
    c = a + b
    print('Сумма =',c)
elif oper ==('-'):
    c = a - b
    print('Разность=',c)
elif oper ==('*'):
    c = a * b
    print('Произведение =',c)
elif oper ==('/'):
    c = a / b
    print ==('Частное =',c)
else:
    print('Вы ввели что-то не так попробуйте еще раз')

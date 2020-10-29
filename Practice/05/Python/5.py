print('Введите x0:')
x0 = int(input())

print('Введите v0:')
v0 = int(input())

print('Введите t:')
t = int(input())


g = 9.81
xt = x0 + (v0 * t) -  ((g * t**2) / 2)
print('Растояние преодолевшее объект = ',xt)


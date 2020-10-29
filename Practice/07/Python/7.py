import math
print ("Выберите способ")
x = int(input())
p = float
s = float
if x == 1:
    print('Введите длины сторон')
    a = int(input())
    b = int(input())
    c = int(input())
    p=(a*b*c)/2
    s=math.sqrt(p*(p-a)*(p-b)*(p-c))
    print (s)
elif x == 2:
    print('Введите координаты вершин')
    x1, y1, x2, y2, x3, y3 = list(map(int, input().split()))
    a = math.sqrt((x2 - x1) * 2 + (y2 - y1) * 2)
    b = math.sqrt((x3 - x1) * 2 + (y3 - y1) * 2)
    c = math.sqrt((x2 - x3) * 2 + (y2 - y3) * 2)
    p = (a + b + c) / 2
    if p <= 0:
         print ("Ошибочный ввод")
    else:
        s = math.sqrt(p * (p - a) * (p - b) * (p - c))
        print (s)
else:
    print('Ошибочный ввод')
    

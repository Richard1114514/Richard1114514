import 
d = 0
c = input('转来多少同学')
c = int(c)
a = ['小明', '傻逼']
print('现在只有', a)
while (d <= c):
    b = input('请问要加入谁')
    a.append(b)
    print('现在有', a)
    d = (d + 1)
f = input('现在转走了多少人?')
f = int(f)
d = 0
while (d <= f):
    sb = input('请问转走了谁?')
    a.remove(sb)
    print('现在只有', a)
    d = (d + 1)
import random
import easygui


#a = random.randint(1, 10)
#b = random.randint(1, 10)
d = easygui.ynbox('你可以试试')
abc=0
if d == True:
    while True:
        
        a = random.randint(1, 10)
        b = random.randint(1, 10)
        c = easygui.codebox('%s+%d=?' % (a,b))
        if int(c)==(a+b):
            easygui.msgbox('对')
            abc=abc+1
        else:
            easygui.msgbox('错')
            easygui.msgbox("你对了%s道题"%abc)
            break

import easygui
import random
sp=0
sb=easygui.ynbox('这一次是1~10的乘法')
if sb==True:
    while True:
        a=random.randint(1,10)
        b=random.randint(1,10)
        #c=a+b
        d=easygui.codebox("%sX%d=?"%(a,b))
        if int(d)==a*b:
            easygui.msgbox("对了")
            sp=sp+1
        else:
            easygui.msgbox("错了")
            easygui.msgbox("你对了%s道题"%sp)
            break



import easygui
import random
easygui.msgbox("这一次你必须挑战，失败你电脑完了")
while True:
    a=random.randint(1,10000)
    b=random.randint(1,10000)
    c=easygui.codebox("%s+%s=?"%(a,b))
    if c==a+b:
        continue
    else:
        while True:
            easygui.msgbox("你完了")

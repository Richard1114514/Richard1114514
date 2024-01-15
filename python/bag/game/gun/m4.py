a=9
def fire(self):
    a=a-1
    print("*")
    print("还剩%s个子弹"%(a))
    
    
a = 9


def fire():
    print("*")
    print("还剩%s个子弹" % (a))


while True:
    b = input("发射吗？(y/n)")
    if b == "y":
        a = a-1
        fire()
    else:
        print("你被熊1巴掌呼死了")
        exit()
    if a < 0 or a == 0:
        print("没子弹了")
        break


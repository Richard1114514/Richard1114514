a = 3
while True:
    b = input('吃饭吗(y/n)')
    if b=="y":
        int(a)
        a=a-1
        print("还剩%s碗饭"%(a))
    if a<1:
        print("吃完了")
        break
    if b=="n":
        print("你饿死了")
        exit()

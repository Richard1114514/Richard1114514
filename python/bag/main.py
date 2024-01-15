print("你遇到了熊!!!")
from game.gun import m4
print("熊被打死了，你饿了")
from game.food import eat
print("你觉得需要出发了")
print("你到了丛林")
from game.jianggou import thing
sd=input("继续前进吗?(y/n)")
if sd=="y":
    print("你到了腐化")
if sd=="n":
    print("坐着等死不如冒险，你被腐化杀死了!")
    exit()
from game.fuhua import fuha
print("这是地牢吗?")


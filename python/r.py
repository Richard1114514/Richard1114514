import easygui
while True:
    a=easygui.codebox("输入结束即可结束")
    easygui.msgbox(a)
    if a=="结束":
        break

def getHexSum(s):
    num = 0
    for x in s:
        num+=ord(x)
    return num
print(getHexSum("PINK-MANS-OLUT-IONS"))

import random
def getHexSum(s):
    num = 0
    for x in s:
        num+=ord(x)
    return num
key = ""
while True:
    key += random.choice("asdfghjklqwertyuiopzxcvbnmASDFGHJKLZXCVBNMQWERTYUIOP0987654321-!@#$%^&*()-_+=")
    if getHexSum(key) > 1381:
        key=""
    elif getHexSum(key) == 1381:
        print("Found Possible key: ", key)

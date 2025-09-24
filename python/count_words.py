text=input("enter a line of text: ")
words=text.split()
for i in set(words):
    print(i," :",words.count(i))

with open("input.txt","r") as fin,open("output.txt","w") as fout:
    for i,line in enumerate(fin,start=1):
        if i%2!=0:
            fout.write(line)

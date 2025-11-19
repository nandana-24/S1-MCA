import csv
with open("jumna.csv",newline="") as f:
    row=csv.reader(f)
    for i in row:
        print([i[0],i[2],i[3]])
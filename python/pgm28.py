import csv
with open("jumna.csv",newline="") as fin:
    reader=csv.reader(fin)
    for row in reader:
        print (row)
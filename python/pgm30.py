import csv
data=[
        {"name":"jumna","age":"22","place":"delhi"},
        {"name":"nandana","age":"21","place":"trivandrum"},
        {"name":"ansaf","age":"22","place":"chennai"}
]

with open("people.csv","w",newline="") as fout:
    field=["name","age","place"]
    writer=csv.DictWriter(fout,fieldnames=field)
    writer.writeheader()
    writer.writerows(data)

with open("people.csv","r",newline="") as fin:
    reader=csv.reader(fin)
    for row in reader:
        print(row)
    
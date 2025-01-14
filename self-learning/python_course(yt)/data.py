import csv

with open("datas.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row[3])

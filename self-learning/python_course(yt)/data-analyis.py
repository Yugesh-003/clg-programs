import csv

with open("datas.csv", "r") as file:
    reader = csv.DictReader(file)
    count = {}      #an empty dict
    for row in reader:
        gender = row["Gender"]
        if gender in count:
            count[gender] += 1
        else:
            count[gender] = 1
for gender in count:
    print(f"{gender} : {count[gender]}")
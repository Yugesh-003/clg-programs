# 1 kg = 2.20462 lbs

#input : kg or lbs,  output : converted to other weighting measure

weight = int(input("Weight : "))

unit = input("(L)bs or (K)g :")

if unit.lower() == 'k':
    result = weight / 0.45
    print(f"You are {result} lbs.")

    #to limit the numbers after decimal points
    print("Your are %.2f lbs"%result)

elif unit.lower() == 'l':
    result = 0.45 * weight
    print(f"You are {result} kg") 

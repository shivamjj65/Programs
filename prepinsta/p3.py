# find smallest, largest in list

n = eval(input("Enter size of list: "))
list1 = []
print("Fill list : ")
i = 0
while i < n:
    list1.append(int(input()))  # append will set i/p value to every i
    i += 1
print("The list is: ", list1, "and smallest is:", min(list1), "and max is: ", max(list1))

# find second smallest
list1.sort()
print("Second smallest in list is: ", list1[1])

# find sum of elements
sum = 0
for i in range(0, len(list1)):
    sum = sum + list1[i]
print(sum)

# reverse of list
print("Reverse of list is: ",list1.reverse())


# find frequency of elements
no = int(input("Enter no: "))
count = 0
for i in range(0,len(list1)):
    if list1[i] == no:
        count = count+1
print("Count is: ",count)
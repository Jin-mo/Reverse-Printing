num = 123
reverse_num = ""
reverse_num += str(num % 10)
reverse_num += str((num // 10) % 10)
reverse_num += str((num // 10) // 10)


print(reverse_num)
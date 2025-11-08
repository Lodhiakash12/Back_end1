file = open("example.txt", "w")
lines = ["Hello\n", "Welcome to Python\n", "File handling is easy!\n"]
file.writelines(lines)
file.close()
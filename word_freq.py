input_line = input("Enter a string : ")

words = {}

for word in input_line.split():
    words[word] = words.get(word,0) + 1

for key in sorted(words):
  print("{} : {}".format(key,words[key]))

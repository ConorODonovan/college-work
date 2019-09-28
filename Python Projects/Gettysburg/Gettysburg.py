import string

speech_words_unique = []

speech_file = open("C:/Users/Conor/Desktop/GettysburgSpeech.txt","r")
speech_str = speech_file.read()

speech_words = speech_str.split()

print(speech_words)

speech_length = len(speech_words)

print("There are {} words in this speech.".format(speech_length))

speech_words_unique.append(speech_words[0])

for element in speech_words:
    if element not in speech_words_unique:
        speech_words_unique.append(element)

print(speech_words_unique)

speech_length_unique = len(speech_words_unique)

print("There are {} unique words in this speech.".format(speech_length_unique))

for element in speech_words:
    print(speech_words.count(element))


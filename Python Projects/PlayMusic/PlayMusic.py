try:
    music_file_text = open('C:/Users/Conor/Desktop/Song.txt', 'r')
except IOError as e:
    print(e)
    quit()

music_file_str = music_file_text.read().replace('\n', '')

music_file_text.close()

import string

notes_list = []
default_note_length = 300

music_file_str_trim = music_file_str.replace(" ", "")
translator = str.maketrans('', '', string.punctuation)
music_str_ready = music_file_str_trim.translate(translator)

print(music_str_ready)

notes = "abcdefgABCDEFG"
int_strings = "0123456789"
notes_freq = {"A": 110, "B": 123, "C": 130, "D": 146, "E": 164, "F": 174, "G": 196, "a": 220, "b": 246, "c": 261,
              "d": 293, "e": 329, "f": 349, "g": 392}

i = 0

while i < len(music_str_ready) - 1:
    if music_str_ready[i] in notes:
        if music_str_ready[i + 1] in int_strings:
            note_play_time = int(music_str_ready[i + 1]) * default_note_length
            note_freq_value = notes_freq.get(music_str_ready[i])
            notes_list.append(note_freq_value)
            notes_list.append(note_play_time)
        else:
            note_freq_value = notes_freq.get(music_str_ready[i])
            notes_list.append(note_freq_value)
            notes_list.append(default_note_length)
    i = i + 1

print(notes_list)

import winsound

a = 0

while a <= len(notes_list) - 2:
    winsound.Beep(notes_list[a],notes_list[a + 1])
    a = a + 2

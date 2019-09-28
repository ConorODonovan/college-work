try:
    music_file = open('C:/Users/Conor/Desktop/MusicData.txt', 'r')
except IOError as e:
    print(e)
    quit()

lines = music_file.readlines()
music_file.close()


music_id = ""
music_title = ""

for line in lines:
    line.strip()
    if line[0] == "X":
        music_id = line[2:]
    elif line[0] == "T":
        music_title = line[2:]

    print(music_id, "...", music_title, "...")
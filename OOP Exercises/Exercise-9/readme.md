# Problem 1

Define a class Song that stores:

- Song name (dynamically allocated char array)
- Song duration in minutes
- Song type, which can be pop, rap, or rock (enum type)

Provide all required methods for correct class behavior.

Additionally, implement:

- print() - prints the song name in quotes and the duration with min suffix, separated by a dash

Then create a class CD that stores:

- An array of songs recorded on the CD (maximum 10 Song objects)
- Number of songs currently recorded
- Maximum total duration allowed on the CD (in minutes)

Provide all required methods for correct class behavior.

Additionally, implement:

- addSong(Song s) - adds a song only if there is remaining duration capacity and fewer than 10 songs are stored
- printSongsByType(type t) - prints all songs of the requested type (pop, rap, or rock)

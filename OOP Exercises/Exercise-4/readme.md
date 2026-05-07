# Problem 5 - Song and CD

Define class Song that stores:

- song name (dynamically allocated char array)
- song duration in minutes
- song type: pop, rap, or rock (enum)

Provide all required methods for correct class behavior.

Additionally, implement:

- print() - prints song name in quotes and duration with min suffix, separated by a dash

Create class CD that stores:

- array of recorded songs (maximum 10 Song objects)
- number of songs currently recorded
- maximum total duration allowed on the CD

Provide all required methods for correct class behavior.

Additionally, implement:

- addSong(Song s) - adds s only if there is enough remaining duration and fewer than 10 songs
- printSongsByType(type t) - prints all songs of type t (pop, rap, rock)

Example input and output are shown in main/testing.

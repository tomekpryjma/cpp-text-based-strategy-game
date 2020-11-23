// Using include guards along with pragma once seems to be recommended.
#ifndef WAR_ROOM_H
#define WAR_ROOM_H
#define WAR_ROOM_VOWEL_COUNT 5
#define WAR_ROOM_CONS_COUNT 21
#pragma once

#include <string>

char vowels[WAR_ROOM_VOWEL_COUNT] { 'A', 'E', 'I', 'O', 'U' };
char consonants[WAR_ROOM_CONS_COUNT] { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z', 'Y' };

char pickRandomCharacter(char *arr, int numOfItems) {
	return arr[rand() % numOfItems];
}

std::string randomNameGenerator() {
	std::string name;

	char* vowelsPtr;
	char* consonantsPtr;
	vowelsPtr = vowels;
	consonantsPtr = consonants;

	char firstLetter = pickRandomCharacter(vowels, WAR_ROOM_VOWEL_COUNT);
	char secondLetter = pickRandomCharacter(consonants, WAR_ROOM_CONS_COUNT);
	char thirdLetter = pickRandomCharacter(vowels, WAR_ROOM_VOWEL_COUNT);
	char fourthLetter = pickRandomCharacter(consonants, WAR_ROOM_CONS_COUNT);

	name += firstLetter;
	name += secondLetter;
	name += thirdLetter;
	name += fourthLetter;

	return name;
}

#endif

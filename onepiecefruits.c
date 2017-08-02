#include <stdio.h>
#include <string.h>

int main(void)
{
	char vowel[] = "aeiou";
	int alphabet[26] = {0};

	//Mark 1-Vowels; 0-Consonants
	int i;
	for(i=0; i<strlen(vowel); ++i)
		alphabet[vowel[i]-'a'] = 1;

	//Form a 4 letter word - [one consonant][one vowel][another consonant][another vowel]
	//Pick two consonants and two vowels
	int j, k, l;
	char word[5];
	for(i=0; i<26; ++i) {
		if(alphabet[i] == 0) {
			for(j=0; j<26; ++j) {
				if(j != i && alphabet[j] == 0) {
					for(k=0; k<strlen(vowel); ++k) {
						for(l=0; l<strlen(vowel); ++l) {
							word[0] = i + 'a';
							word[1] = vowel[k]; 
							word[2] = j + 'a';
							word[3] = vowel[l];
							word[4] = 0;
							printf("%s %s\n", word, word);
						}
					}
				}
			}
		}
	}

	//Form a 3 letter word - [one consonant][one vowel][any alphabet] 
	//or [one vowel][one conso][any vowel]
	for(i=0; i<26; ++i) {
		if(alphabet[i] == 0) {
			for(j=0; j<strlen(vowel); ++j) {
				for(k=0; k<26; ++k) {
					word[0] = i + 'a';
					word[1] = vowel[j];
					word[2] = k + 'a';
					word[3] = 0;
					printf("%s %s\n", word, word);
				}
			}
		}
	}
	for(i=0; i<strlen(vowel); ++i) {
		for(j=0; j<26; ++j) {
			if(alphabet[j] == 0) {
				for(k=0; k<strlen(vowel); ++k) {
					word[0] = vowel[i];
					word[1] = j + 'a';
					word[2] = vowel[k];
					word[3] = 0;
					printf("%s %s\n", word, word);
				}
			}
		}
	}

	return 0;
}

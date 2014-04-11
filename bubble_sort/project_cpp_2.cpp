#include <iostream>
#include <conio.h>
#include <random>
#include "project_h.h"

char* rand_char_array(int size)
{
	char* char_array=new char[size];

	for(int i = 0; i < size; i++)
		char_array[i] = rand() % 26 + 'a';

	return char_array;
}


char** rand_string_array(int size) 
{
	char** string_array = new char*[size];

	for(int i = 0; i < size; i++) 
	{
		int new_size = rand() % 10 + 5;
		string_array[i] =rand_char_array(new_size);
		string_array[i][new_size - 1] = '\0';
	}

	return string_array;
}





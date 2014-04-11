char* rand_char_array(int size);
char** rand_string_array(int size);

template < class T >
void select_sort(T* p, int size) 
{
	for(int i = 0; i < size; i++) 
	{
		int min = i;
		for(int j = i; j < size; j++)
			if(p[min] > p[j])
				min = j;
		if(min != i)
		{
			T tmp = p[min];
			p[min] = p[i];
			p[i] = tmp;
		}
	}
}

template < class T >
void select_sort(T** p, int size) 
{
	for(int i = 0; i < size; i++)
	{
		int min = i;
		for(int j = i; j < size; j++)
			if(strcmp(p[min],p[j]) == 1)
				min = j;
		if(min != i)
		{
			T* tmp = p[min];
			p[min] = p[i];
			p[i] = tmp;
		}
	}
}


template < class T >
void print(T* p, int size) 
{
	for(int i = 0; i < size; i++)
		cout << p[i] << " \n";
	cout << "\n\n";
}


template <class T>
void print(T** p, int size)
{
	for(int i = 0; i < size; i++)
		cout << p[i] << "\n";
	cout << "\n\n";
}

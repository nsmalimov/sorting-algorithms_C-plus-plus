char* rand_char_array(int size);
char** rand_string_array(int size);

template < class T >
void quick_sort(T* p, int size) 
{
	qs(p, 0, size - 1);
}

template < class T >
void qs(T* p, int left, int right)
{
	  int i=left;
      int j=right;
     T x=p[(left+right)/2];
      do {
          while(p[i]<x)
			  ++i;
          while(p[j]>x) 
			  --j;
          if(i<=j)
		  {
              T tmp=p[i];
              p[i]=p[j];
              p[j]=tmp;
              i++; j--;
          }
      } while(i<=j);
 
      if(left<j) 
		  qs(p,left,j);
      if(i<right) 
		  qs(p,i,right);
}

template < class T >
void quick_sort(T** p, int size) 
{
	qs(p, 0, size - 1);
}

template < class T >
void qs(T** p, int left, int right) 
{
	int new_left = left;
	int new_right = right;
	T* middle = p[(left + right) / 2];

	do {
		while((strcmp(p[new_left], middle) == -1) && (new_left < right))
			new_left++;
		
		while((strcmp(middle, p[new_right]) == -1) && (new_right > left))
			new_right--;

		if(new_left <= new_right) 
		{
			T* tmp = p[new_left];
			p[new_left] = p[new_right];
			p[new_right] = tmp;
			new_left++;
			new_right--;
		}
	} while(new_left <= new_right);

	if(left < new_right)
		qs(p, left, new_right);

	if(new_left < right)
		qs(p, new_left, right);
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

char *rand_char_array(int size);

char **rand_string_array(int size);

template<class T>
void bubble_sort(T *p, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 1; j < size - i; j++)
            if (p[j - 1] > p[j]) {
                T tmp = p[j - 1];
                p[j - 1] = p[j];
                p[j] = tmp;
            }
}

template<class T>
void bubble_sort(T **p, int size) {
    for (int i = 0; i < size; i++)
        for (int j = 1; j < size - i; j++)
            if (strcmp(p[j - 1], p[j]) == 1) {
                T *tmp = p[j - 1];
                p[j - 1] = p[j];
                p[j] = tmp;
            }
}

template<class T>
void print(T *p, int size) {
    for (int i = 0; i < size; i++)
        cout << p[i] << " \n";
    cout << "\n\n";
}


template<class T>
void print(T **p, int size) {
    for (int i = 0; i < size; i++)
        cout << p[i] << "\n";
    cout << "\n\n";
}

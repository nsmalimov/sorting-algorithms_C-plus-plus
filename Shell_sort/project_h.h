char *rand_char_array(int size);

char **rand_string_array(int size);

template<class T>
void shell_sort(T *p, int size) {
    for (int n = size / 2; n > 0; n /= 2)
        for (int k = 0; k < n; k++)
            for (int i = n + k; i < size; i += n)
                for (int j = i; j - n >= 0 && p[j - n] > p[j]; j -= n) {
                    T tmp = p[j - n];
                    p[j - n] = p[j];
                    p[j] = tmp;
                }
}

template<class T>
void shell_sort(T **p, int size) {
    for (int n = size / 2; n > 0; n /= 2)
        for (int k = 0; k < n; k++)
            for (int i = n + k; i < size; i += n)
                for (int j = i; j - n >= 0 && (strcmp(p[j - n], p[j]) == 1); j -= n) {
                    T *tmp = p[j - n];
                    p[j - n] = p[j];
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

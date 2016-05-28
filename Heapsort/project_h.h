char *rand_char_array(int size);

char **rand_string_array(int size);

template<class T>
void heap_sort(T *p, int size) {
    int k = size / 2;
    for (int j = k - 1; j >= 0; j--) {
        T tmp = p[j];
        int i = j;
        while (i < k) {
            int imax = 2 * i + 1;
            if (2 * i + 2 < size && p[2 * i + 2] > p[2 * i + 1]) imax = 2 * i + 2;
            if (tmp > p[imax]) break;
            p[i] = p[imax];
            i = imax;
        }
        p[i] = tmp;
    }

    for (int j = 1; j < size; j++) {
        T tmp = p[size - j];
        p[size - j] = p[0];
        int k = (size - j) / 2;
        int i = 0;
        while (i < k) {
            int imax = 2 * i + 1;
            if (2 * i + 2 < size - j && p[2 * i + 2] > p[2 * i + 1]) imax = 2 * i + 2;
            if (tmp > p[imax])
                break;
            p[i] = p[imax];
            i = imax;
        }
        p[i] = tmp;
    }
}

template<class T>
void heap_sort(T **p, int size) {
    int k = size / 2;
    for (int j = k - 1; j >= 0; j--) {
        T *tmp = p[j];
        int i = j;
        while (i < k) {
            int imax = 2 * i + 1;
            if (2 * i + 2 < size && (strcmp(p[2 * i + 2], p[2 * i + 1]) == 1)) imax = 2 * i + 2;
            if (tmp > p[imax]) break;
            p[i] = p[imax];
            i = imax;
        }
        p[i] = tmp;
    }

    for (int j = 1; j < size; j++) {
        T *tmp = p[size - j];
        p[size - j] = p[0];
        int k = (size - j) / 2;
        int i = 0;
        while (i < k) {
            int imax = 2 * i + 1;
            if (2 * i + 2 < size - j && (strcmp(p[2 * i + 2], p[2 * i + 1]) == 1)) imax = 2 * i + 2;
            if (tmp > p[imax]) break;
            p[i] = p[imax];
            i = imax;
        }
        p[i] = tmp;
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

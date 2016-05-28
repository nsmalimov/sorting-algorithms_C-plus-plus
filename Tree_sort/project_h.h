char *rand_char_array(int size);

char **rand_string_array(int size);

template<class T>
void binary_sort(T *p, int size) {
    for (int i = 1; i < size; i++) {
        T tmp = p[i];

        int left = 0;
        int right = i;

        if (p[0] > tmp)
            right = 0;
        else if (p[i - 1] < tmp)
            right = i;
        else {
            while (left < right) {
                int middle = (left + right) / 2;

                if (tmp <= p[middle])
                    right = middle;
                else
                    left = middle + 1;
            }
        }
        for (int j = i; j > right; j--)
            p[j] = p[j - 1];

        p[right] = tmp;
    }
}

template<class T>
void binary_sort(T **p, int size) {
    for (int i = 1; i < size; i++) {
        T *tmp = p[i];

        int left = 0;
        int right = i;

        if (strcmp(p[0], tmp) == 1)
            right = 0;
        else if (strcmp(p[i - 1], tmp) == -1)
            right = i;
        else
            while (left < right) {
                int middle = (left + right) / 2;

                if (strcmp(tmp, p[middle]) == 0 || strcmp(tmp, p[middle]) == -1)
                    right = middle;
                else
                    left = middle + 1;
            }

        for (int j = i; j > right; j--)
            p[j] = p[j - 1];

        p[right] = tmp;
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

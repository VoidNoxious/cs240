#include <stdlib.h>
#include <stdio.h>

typedef struct string {
    char *s;
    int len, cap;
} String;


String *append_string(String *s, char c) {
    if (s->cap == s->len) {
        s->cap <<= 1;
        s->s = (char *) realloc(s->s, s->cap);
    }
    s->s[s->len++] = c;
    s->s[s->len] = 0;
    return s;
}

char *getLine(String *s) {
    s->len = 0;
    char c;
    while (1) {
        c = getchar();
        if (c == -1 || c == '\n') return s->s;
        append_string(s, c);
    }
}


int solution(char *S, char *F) {
    /*Complete this function*/

        int array[26], operations = 0, i; // Create Array to Represent Lowercase Letters ('a' to 'z')

        for (i = 0; i < 26; i++) {
            array[i] = 0; // Initialize Array to 0
        }

        i = 0;
        while (F[i] != '\0') { // Go Through Characters in String F
            array[F[i] - 97] = 1; // Set Array to 1 for Each Character Contained in String F
            i++;
        }

        i = 0;
        while (S[i] != '\0') { // Go Through Characters in String S
            int current = S[i] - 97, counter1 = 0, counter2 = 0, j;  // Create Int Variable to Retrieve Character in String S

            // Check Characters (Left to Right)
            j = current;
            do {
                if (array[j] == 1) { // If Characters Match...
                    break;
                }
                counter1++;
                j++;
                if (j > 25) { // If Reaching to Last Index...
                    j = 0; // Reset to First Index
                }
            } while (j != current);

            // Check Characters (Right to Left)
            j = current;
            do {
                if (array[j] == 1) { // If Characters Match...
                    break;
                }
                counter2++;
                j--;
                if (j < 0) { // If Reaching to First Index...
                    j = 25; // Reset to Last Index
                }
            } while (j != current);

            // Retrieve the Smallest Number of Operations
            if (counter1 < counter2) {
                operations += counter1;
            } else {
                operations += counter2;
            }
            i++;
        }
        return operations;

}

int main(int argc, char *argv[]) {
    int t;
    String s1 = {malloc(10), 0, 10},
            s2 = {malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);

        if (argc == 1) {
            printf("Case #%d: %d\n", i, solution(s1.s, s2.s));
        } else if (atoi(argv[1]) == i) {
            printf("s1: %s\n", s1.s);
            printf("s2: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    return 0;
}

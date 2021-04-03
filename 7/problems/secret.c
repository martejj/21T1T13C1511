int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if(word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

int ch = 'a';
printf("%c", ch); // putchar(ch);

scanf("%c", &ch); // ch = getchar();

scanf("%s", string); // Technically work - but is extremely bad

fgets();

stdin

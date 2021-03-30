

int count_lower(char word[]) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
            /// i < length
        if(word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

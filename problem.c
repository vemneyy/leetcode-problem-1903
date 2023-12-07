char* largestOddNumber(char* num) {
    int length = strlen(num);
    static char answer[100001];
    answer[0] = '\0';

    if ((num[length - 1] - '0') % 2 != 0) {
        return num;
    }

    for (int i = length - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) {
            num[i + 1] = '\0';
            strcpy(answer, num);
            return answer;
        }
    }

    return "";
}

/* You are given two integers a and b.
Your task is to determine whether they share the same last digit.

Bonus Challenge: Try approach of not using modulo operator.*/

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int lastA = a - (a / 10) * 10;
    int lastB = b - (b / 10) * 10;

    if (lastA == lastB)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

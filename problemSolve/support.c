/*
    Ali Baba: One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
*/ 
// --------- Wrong answer on test 4

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if ((a + b + c == d) ||
        (a + b - c == d) ||
        (a + b * c == d) ||
        (a - b + c == d) ||
        (a - b - c == d) ||
        (a - b * c == d) ||
        (a * b + c == d) ||
        (a * b - c == d) ||
        (a * b * c == d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
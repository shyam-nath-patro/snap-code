/* You are given an integer age.
Your task is to check whether the person is eligible to vote.

A person is eligible to vote if:

age ≥ 18 */

int main() {

    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}

#include<stdio.h>

void suggestAlgorithm()
{
    int x,y,z,a;

    printf("\nEnter Problem Size (numeric value): ");
    scanf("%d",&x);

    if(x<=0)
    {
        printf("Invalid Input!\n");
        return;
    }

    printf("Overlapping Problems (1.YES / 2.NO): ");
    scanf("%d",&y);

    printf("Greedy Choice Property (1.YES / 2.NO): ");
    scanf("%d",&z);

    printf("Divisible Problem (1.YES / 2.NO): ");
    scanf("%d",&a);

    printf("\n===================================\n");
    printf("            RESULT\n");
    printf("====================================\n");


    if(x<50)
        printf("Problem Size: Small\n");
    else if(x<100)
        printf("Problem Size: Medium\n");
    else
        printf("Problem Size: Large\n");


    if(y==1 && x>=100)
    {
        printf("\nSuggested Algorithm: Dynamic Programming\n");
        printf("Reason: Problem has overlapping subproblems and large input size.\n");
        printf("Example: Fibonacci Series, 0/1 Knapsack\n");
        printf("Time Complexity: O(n) to O(n^2)\n");
    }
    else if(y==1)
    {
        printf("\nSuggested Algorithm: Brute Force\n");
        printf("Reason: Overlapping exists but input size is small.\n");
        printf("Example: Linear Search, Simple Recursion\n");
        printf("Time Complexity: O(n^2) or higher\n");
    }
    else if(z==1)
    {
        printf("\nSuggested Algorithm: Greedy Algorithm\n");
        printf("Reason: Greedy choice property is satisfied (local optimum = global optimum).\n");
        printf("Example: Kruskal’s Algorithm, Prim’s Algorithm\n");
        printf("Time Complexity: O(n log n)\n");
    }
    else if(a==1)
    {
        printf("\nSuggested Algorithm: Divide and Conquer\n");
        printf("Reason: Problem can be divided into smaller independent subproblems.\n");
        printf("Example: Merge Sort, Quick Sort, Binary Search\n");
        printf("Time Complexity: O(n log n)\n");
    }
    else
    {
        printf("\nSuggested Algorithm: Brute Force\n");
        printf("Reason: No optimization property found.\n");
        printf("Example: Naive String Matching\n");
        printf("Time Complexity: O(n^2) or worse\n");
    }
}

void learnAlgorithms()
{
    printf("\n========== LEARN ALGORITHMS ==========\n");

    printf("\n1. Brute Force\n");
    printf("    ->Tries all possible solutions\n");
    printf("    ->Example: Linear Search\n");
    printf("    ->Time Complexity: O(n^2)\n");

    printf("\n2. Greedy Algorithm\n");
    printf("    ->Chooses best option at each step\n");
    printf("    ->Example: Kruskal, Prim\n");
    printf("    ->Time Complexity: O(n log n)\n");

    printf("\n3. Dynamic Programming\n");
    printf("    ->Solves overlapping subproblems efficiently\n");
    printf("    ->Example: Fibonacci, Knapsack\n");
    printf("    ->Time Complexity: O(n) / O(n^2)\n");

    printf("\n4. Divide and Conquer\n");
    printf("    ->Breaks problem into smaller parts\n");
    printf("    ->Example: Merge Sort, Quick Sort\n");
    printf("    ->Time Complexity: O(n log n)\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf(" ALGORITHM RECOMMENDATION SYSTEM\n");
        printf("====================================\n");

        printf("1. Suggest Algorithm\n");
        printf("2. Learn Algorithms\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                suggestAlgorithm();
                break;

            case 2:
                learnAlgorithms();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice!=3);

    return 0;
}

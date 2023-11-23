#include<stdio.h>

int main() {
    int i, score = 0, points = 0, ans;


    printf("\n\n    Weclome to the Game!!\n\n");
    printf("> Enter 9 to start the Game\n");
    printf("> Enter 0 to exit the Game\n");
    scanf("%d", &i);
    
    if(i == 9) printf("\n The Game has been started!!\n\n");
    else if(i == 0) printf("\n Game Ended!!\n\n");
    else printf("\n Invalid!!\n\n");

    if(i == 9) {
        // 1st Question
        printf("1) What is the largest planet in our solar system?\n\n");
        printf("    1) Earth.\n");
        printf("    2) Mars.\n");
        printf("    3) Jupiter.\n");
        printf("    4) Venus.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 3) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;

        // 2nd Question
        printf("2) Which of the following is a greenhouse gas?\n\n");
        printf("    1) Oxygen.\n");
        printf("    2) Nitrogen.\n");
        printf("    3) Carbon Dioxide.\n");
        printf("    4) Helium.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 3) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 3rd Question
        printf("3) Who was the leader of the Civil Rights Movement in the United States during the 1960s?\n\n");
        printf("    1) Martin Luther King Jr.\n");
        printf("    2) Malcolm X.\n");
        printf("    3) Rosa Parks.\n");
        printf("    4) Nelson Mandela.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 1) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 4th Question
        printf("4) Which programming language is commonly used for developing mobile apps?\n\n");
        printf("    1) Java.\n");
        printf("    2) Python.\n");
        printf("    3) Swift.\n");
        printf("    4) C#.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 3) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 5th Question
        printf("5) Who wrote the novel \"To Kill a Mockingbird\"?\n\n");
        printf("    1) J.K. Rowling.\n");
        printf("    2) Harper Lee.\n");
        printf("    3) George Orwell.\n");
        printf("    4) Ernest Hemingway.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 2) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 6th Question
        printf("6) Which mountain range spans seven countries in Southern Europe?\n\n");
        printf("    1) Andes.\n");
        printf("    2) Himalayas.\n");
        printf("    3) Alps.\n");
        printf("    4) Rockies.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 3) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 7th Question
        printf("7) What is the value of π (pi) to two decimal places?\n\n");
        printf("    1) 3.14.\n");
        printf("    2) 3.16.\n");
        printf("    3) 3.18.\n");
        printf("    4) 3.20.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 1) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 8th Question
        printf("8) Who directed the film \"The Shawshank Redemption\"?\n\n");
        printf("    1) Steven Spielberg.\n");
        printf("    2) Quentin Tarantino.\n");
        printf("    3) Christopher Nolan.\n");
        printf("    4) Frank Darabont.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 4) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 9th Question
        printf("9) Which instrument does Yo-Yo Ma play?\n\n");
        printf("    1) Piano.\n");
        printf("    2) Violin.\n");
        printf("    3) Cello.\n");
        printf("    4) Flute.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 3) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        // 10th Question
        printf("10) In which sport would you perform a slam dunk?\n\n");
        printf("    1) Soccer.\n");
        printf("    2) Basketball.\n");
        printf("    3) Tennis.\n");
        printf("    4) Golf.\n");
        printf("\nEnter your answer : \n");
        scanf("%d", &ans);
        if(ans == 2) {
            printf("Correct answer!\n");
            points = 5;
        } else {
            printf("Wrong answer!\n");
            points = 0;
        }
        printf("You have scored %d points\n\n", points);
        score += points;
        

        printf("Yoo!! You successfully completed The Game your total score is %d / 50\n\n", score);
        printf("Thenks for playing the game....\n\n");
    }
    return 0;
}
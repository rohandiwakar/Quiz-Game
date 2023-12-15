#include<stdio.h>
#include<conio.h>
int main() {
    char name;
    char ans,A,B,C,D,go;
    int total=0;
    printf("\nHello ,Welcome to Quiz_Maina\n");
    printf("\n");
    printf("Instruction of Quiz :\n");
    printf("1. 5 Marks are awarded for Correct Answer \n2. 0 Marks are Awarded for Wrong Answer\n");
    printf("\nEnter Your Name  : ");
    scanf("%s",&name);
    printf("\nEnter 'N' to Start the Quiz \n");
    scanf("%s",&go);
    if (go=='N') {
    printf("\nQues 1. Which Player Play All season for Single Franchise in IPL ?\n");
    printf("A. Rohit Sharma\tB. Ravindra Jadeja\nC. Virat Kholi \tD. MS Dhoni\n");
    printf("Enter Your Answer: ");
    scanf("%s",&ans);
    if(ans=='C') {
    printf("Yes , Your Answer is Correct.\nYou Got 5 Points\n");
     }
    else 
    printf("wrong Answer\n");
    }
    else
    printf("Quiz is Over");
    printf("\nEnter 'N' for next Question\n");
    scanf("%s",&go);
    if (go=='N') {
    printf("\nQues 2. Which Team Has Won Most Title in IPL ?\n");
    printf("A. Mumbai Indians\tB.Chenai Super King\nC.Rajasthan Royal\tD.Royal Challenger Bangolore\n");
    printf("Enter Your Answer: ");
    scanf("%s",&ans);
    if(ans=='B') {
        printf("Yes , Your Answer is Correct.\nYou Got 5 Points\n");
         }
    else
    printf("Wrong Answer\n"); }
    else
    printf("Quiz is Over");
    printf("\nEnter 'N' for next Question\n");
    scanf("%s",&go);
    if (go=='N')
    printf("\nQues 3. Which team has the record of Highest Total in IPL ?\n");
    printf("A. Royal Challenger Bangolore\tB. Mumbai Indians\nC. Chennai Super King         \tD. Kolkata Knight Rider\n");
    printf("Enter Your Answer: ");
    scanf("%s",&ans);
    if(ans=='A') {
        printf("Yes , Your Answer is Correct.\nYou Got 5 Points\n");
         }
    else
    printf("Wrong Answer\n");
    printf("\nEnter 'N' for next Question\n");
    scanf("%s",&go);
    if (go=='N')
    printf("\nQues 4. Which Player Has Scored 1st Century of IPL ?\n");
    printf("A. Virat Kholi\tB. Manish Pandey\nC. Chris Gyale\tD. Sachin Tendulkar\n");
    printf("Enter Your Answer: ");
    scanf("%s",&ans);
    if(ans=='B') {
        printf("Yes , Your Answer is Correct.\nYou Got 5 Points\n");
         }
    else
    printf("Wrong Answer\n");
    printf("\nEnter 'N' for next Question\n");
    scanf("%s",&go);
    if (go=='N')
    printf("\nQues 5. Which Player Has Score the Most Runs in IPL ?\n");
    printf("A. David Warner \tB. MS Dhoni\nC. Shikhar Dhawan\tD. Virat Kholi\n");
    printf("Enter Your Answer: ");
    scanf("%s",&ans);
    if(ans=='D')  {
        printf("Yes , Your Answer is Correct.\nYou Got 5 Points\n");
         }
    else
    printf("Wrong Answer\n");
    printf("Quiz are over ");
    return 0;
    }

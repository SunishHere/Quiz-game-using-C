#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void start();
void SciTech();
void History();
void Entertainment();
void CurrAff();
void Sports();
void Wild();

struct Board
{
    int score;
    char name[50];
    char *subject;
};
struct Board s; //declaration

int main()
{
int n;
system("color 70"); //background and font color
printf("\n\t\t\tWELCOME!!\t\t\t\n\n");
printf("\n\tTHIS IS A QUIZ GAME MADE BY SUNISH PAL  !!!\t\t\t\n\n");
printf("*MENU*\n\n");
printf("Start the Quiz:\t\t Press 1\n");
printf("Check Scoreboard:\t Press 2\n\n");
printf("ENTER: ");
scanf("%d",&n);
printf("\n**\n\n");
switch(n)
    {
        case 1: printf("\t\t\tINSTRUCTIONS FOR PLAYING!\n\n");
        printf(" - After you enter your name,you will be asked to choose from any 1 of the given 6 topics\n");
        printf(" - Choose the subject that interests you the most\n");
        printf(" - Each subject will have 10 questions\n");
        printf(" - You will be given 4 options to choose from\n");
        printf(" - For every correct answer you will score +10 points\n");
        printf(" - There will be no negative marking\n");
        printf("\n Press 1 to Continue\n");
        printf(" Press 2 to Exit\n");
        int n1;
        printf("\n ENTER: ");
        scanf("%d" ,&n1);
        printf("\n**\n\n");
        getchar();
        switch(n1)
            {
                case 1: system("CLS");
                        printf("\n LETS BEGIN!!\n");
                        printf(" Enter your name:");
                        gets(s.name);
                        start();
                        break;

                case 2: system("CLS");
                        printf("\n You have successfully exited the game!\n\n");
                        break;
                default: printf("ERROR: Enter a correct option!!!");
            }
        break;

    case 2: printf("NAME\t\t\tSUBJECT\t\t\t\tSCORE\n");
            FILE *fp;
            char d;
            int count=0;
            fp=fopen("Scoreboard.txt", "r");

            if(fp==NULL)
            {
                printf("ERROR: Could not find file!");
            }
            d=fgetc(fp);
            while (d != EOF)
            {
                printf("%c", d);
                d=fgetc(fp);
                if(d=='\n')
                {
                    count++;
                }
            }
            printf("\n\nTotal Number of times quiz was played = %d\n\n" ,count);
            fclose(fp);
            getch();
            break;
     default: printf("ERROR: Enter a correct option!!!");
    }
    return 0;
}

void start()
{
    int n;
    printf("\n*CHOOSE A SUBJECT*\n");
    printf(" 1. Science and Technology\n");
    printf(" 2. History\n");
    printf(" 3. Entertainment\n");
    printf(" 4. Current Affairs\n");
    printf(" 5. Sports\n");
    printf(" 6. Wildlife\n");
    printf("\n ENTER: ");
    scanf("%d" ,&n);
    printf("\n**\n");
    switch(n)
    {
        case 1: system("CLS");
                SciTech();
                break;

        case 2: system("CLS");
                History();
                break;

        case 3: system("CLS");
                Entertainment();
                break;

        case 4: system("CLS");
                CurrAff();
                break;

        case 5: system("CLS");
                Sports();
                break;

        case 6: system("CLS");
                Wild();
                break;
        default: printf("ERROR: Enter a correct option!");
    }
}

void SciTech()
{
    s.subject="Science and Technology";
    printf("\n WELCOME TO SCIENCE AND TECHNOLOGY QUIZ\n\n");
    printf("\nQuestion 1: Who was the first man to place his foot on the moon?\n");
    printf("\n a. Leonov \t\t\t b. Neil Armstrong \n\n c. Michael Collins \t\t d. James Van Allen\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='b'||a1=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10; //s.score=s.score+10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Neil Armstrong");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: Pedology is the science related to the study of ?\n");
    printf("\n a. Atmosphere \t\t b. Soil \n\n c. Pollutants \t\t d. Seeds\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='b'||a2=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Soil");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: What is the abbreviation of WWW ?\n");
    printf("\n a. World Wide Web \t\t b. World World Web \n\n c. World Wide World \t\t d. World Web Wide\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='a'||a3=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. World Wide Web");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4: Which country in the world has maximum number of working robots ?\n");
    printf("\n a. America \t\t b.India \n\n c. Japan \t\t d. Indonesia\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='c'||a4=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Japan");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: Which country first reached the 'Dark Side' of the Moon ?\n");
    printf("\n a. India \t\t b. USA \n\n c. Russia \t\t d. China\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='d'||a5=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d.China");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Zika Virus was named after the Zika Forest of which country ?\n");
    printf("\n a. Nigeria \t\t b. Angola \n\n c. Nicaragua \t\t d. Uganda\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='d'||a6=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Uganda");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: Who is largely responsible for breaking the German Enigma codes , creating a test that provided a foundation for artificial intelligence?\n");
    printf("\n a. Alan Turing \t\t b. Jeff Bezos \n\n c. George Boole \t\t d. Charles Babbage\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='a'||a7=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Alan Turing");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 8: After the first photons of light are produced, which process is responsible for the amplification of light? \n");
    printf("\n a. Blackbody Radiation \t b. Stimulated emission \n\n c. Planck's radiation \t\t d. Einstein Oscillation\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='b'||a8=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b.Stimulated Emission");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9: Where is the pharynx located? \n");
    printf("\n a. Legs \t\t b. Arms \n\n c. Brain \t\t d. Throat\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='d'||a9=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Pharynx");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10: Optical Fiber Technology works on which one of these principles?\n");
    printf("\n a. Bernoulli's Principle \t\t\t b. Newton's Law of Motion\n\n c. Total Internal Reflection of Light \t\t d. Photoelectric Effect C\n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='c'||a10=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Total Internal Reflection of Light");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n");
    }

    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL) //to check whether the file we're opening exists or doesn't exist
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t\t%s\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

void History()
{
    s.subject="History";
    s.score=0;
 	printf("\n WELCOME TO HISTORY QUIZ\n\n");
 	printf("\nQuestion 1: Who is the longest serving Chief Minister of Maharashtra ?\n");
    printf("\n a. Vasantrao Naik \t\t\t b. Sharad Pawar \n\n c. Yashwantrao Chavhan \t\t d. Vasantrao Patil\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='a'||a1=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Vasantrao Naik");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: Who is the only female Muslim Ruler of Delhi ?\n");
    printf("\n a. Chand bibi \t\t\t b. Fatima B \n\n c. Shajar al-dur \t\t d. Razia Sultana\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='d'||a2=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Razia Sultana");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: Which countries had cold war conflicts ?\n");
    printf("\n a. United States and Germany \t\t b. China and United States \n\n c. China and Soviet Union \t\t d. United States and Soviet Union\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='d'||a3=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. United States and Soviet Union");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4:Who built The Great Stupa of Sanchi ?\n");
    printf("\n a. Chandragupta Maurya \t b. Bindusara \n\n c. Emperor Ashoka \t\t d. King Dashratha\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='c'||a4=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Emperor Ashoka");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: When was East  India Company established ?\n");
    printf("\n a. 1700 \t\t b. 1800 \n\n c. 1600 \t\t d. 1900\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='c'||a5=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. 1600");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Ayurveda has its origin in ?\n");
    printf("\n a. Rig Veda \t\t b. Atharva Veda \n\n c. Sama Veda \t\t d. Yajur Veda\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='b'||a6=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Atharva Veda");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: When did The Second World War end ?\n");
    printf("\n a. 1st Sept.1939 \t\t b. 3rd March 1939 \n\n c. 4th March1945 \t\t d. 2nd Sept,1945\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='d'||a7=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d.2nd Sept,1945");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 8: Who is the founder of Maratha Empire ?\n");
    printf("\n a. Chhatrapati Sambhaji Maharaj \t b. Chhatrapati Rajaram Maharaj \n\n c. Chhatrapati Shahu Maharaj \t\t d. Chhatrapati Shivaji Maharaj\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='d'||a8=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is d. Chhatrapati Shivaji Maharaj");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9: Who was the third Mughal Emperor to rule Delhi? \n");
    printf("\n a. Babar \t\t b. Humayun \n\n c. Akbar \t\t d. Shahajahan\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='c'||a9=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c. Akbar");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10:Who rose the power as leader of Nazi Party ?\n");
    printf("\n a. Sir Adolf Hitler \t\t b. Bonito Mussolini \n\n c. Joseph Stalin \t\t d. Mustafa Kemal Ataturk\n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='a'||a10=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is a. Sir Adolf Hitler");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n");
    }

    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL)
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t%s\t\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

void Entertainment()
{
    s.subject="Entertainment";
    s.score=0;
    printf("\n WELCOME TO ENTERTAINMENT QUIZ\n\n");
    printf("\nQuestion 1: What movie does NOT have Brad Pitt in it ?\n");
    printf("\n a. Oceans 13 \t\t b. Burn After Reading \n\n c. 300 \t\t d. Troy\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='c'||a1=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c.300");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: Which book is NOT a title of a book in the Twilight series ?\n");
    printf("\n a. New Moon \t\t b. Midnight \n\n c. Twilight \t\t d. Eclipse\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='b'||a2=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Midnight");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: Which one is the highest-grossing film ever?\n");
    printf("\n a. Harry Potter and the Sorcerers Stone \t b. Lord of the Rings \n\n c. Dark Knight \t\t\t\t d. Titanic\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='d'||a3=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Titanic");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4:Which NFL team has won the most Super Bowls?\n");
    printf("\n a. Pittsburgh Steelers \t b. Dallas Cowboys \n\n c. San Fransico 49ers \t\t d.Green Bay Packers\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='a'||a4=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Pittsburgh Steelers");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: Which Artist(s) has had the most #1 hits on the American Music Billboard charts?\n");
    printf("\n a.The Beatles \t\t\t b. Elvis Presley \n\n c.Enrique Iglesias \t\t d.George Strait\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='d'||a5=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. George Strait");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Which athlete makes the most money?\n");
    printf("\n a. Alex Rodriguez \t\t b. Shaquille O'Neal \n\n c. Peyton Manning \t\t d. Tiger Woods\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='d'||a6=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Tiger Woods");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: How many seasons of the TV show 'FRIENDS' were there?\n");
    printf("\n a. 9 \t\t b. 10 \n\n c. 11 \t\t d. 12\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='b'||a7=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. 10");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion8:Who was the first country music artist to sell over 10 million copies of an album?\n");
    printf("\n a.Garth Brooks \t\t b. Alan Jackson \n\n c.George Strait \t\t d. Hank Williams\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='a'||a8=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Garth Brooks");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9:  Which is not a Pixar movie?\n");
    printf("\n a. Toy Story \t\t b. Shrek \n\n c. Cars \t\t d. Finding Nemo\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='b'||a9=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Shrek");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10: How old was Harry Potter in the first book, Harry Potter and the Sorcerers Stone?\n");
    printf("\n a. 9 \t\t b. 10 \n\n c. 11 \t\t d. 12 \n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='c'||a10=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c. 11");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
   printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n");
    }
    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL)
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t%s\t\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

void CurrAff()
{
    s.subject="Current Affairs";
    s.score=0;
    printf("\n WELCOME TO CURRENT AFFAIRS QUIZ\n\n");
    printf("\nQuestion 1: Name the famous politician who was banned on Twitter and other social media platforms recently?\n");
    printf("\n a. Donald Trump \t\t b. Angela Merkel \n\n c. Emmanuel Macron \t\t d. Justin Trudeau\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='a'||a1=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Donald Trump");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: Which state government has recently launched the 'Launch Pad scheme'?\n");
    printf("\n a. Maharashtra \t\t b. Kerala \n\n c. Uttar Pradesh \t\t d. Madhya Pradesh\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='d'||a2=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Madhya Pradesh");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: India has approved which of the following COVID19 vaccine brand for emergency use recently ?\n");
    printf("\n a. Coronil \t\t b. COVAXIN \n\n c. Covishield \t\t d. Both b and c\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='d'||a3=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Both b and c");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4: Who among the following business personalities topped the Chronicle of Philanthropy's annual list of top donations in the year 2020  ?\n");
    printf("\n a. Azim Premji \t b. Elon Musk \n\n c. Jeff Bezos \t\t d. Bill Gates\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='c'||a4=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Jeff Bezos");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: Name the world’s first and India's only Hospital Train ?\n");
    printf("\n a. JeevanDayani \t\t b. Life Saver Express \n\n c. Lifeline Express \t\t d. Life provider Express\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='c'||a5=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c.Lifeline Express");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Which of the following personalities has become the 1st celebrity to hit 250 million followers on Instagram ?\n");
    printf("\n a. Virat Kohli \t\t b. Cristiano Ronaldo \n\n c. Ariana Grande \t\t d. Dwayne Johnson\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='b'||a6=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Cristiano Ronaldo");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: Which of the following Country has recently modified their national anthem ?\n");
    printf("\n a. India \t\t b. New Zealand \n\n c. Australia \t\t d. Japan\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='c'||a7=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c. Australia");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 8: Which state’s chief minister launched the mobile app named 'DigiNest'? \n");
    printf("\n a. Punjab \t\t b. Haryana \n\n c. Uttarakhand \t d. Tamil Nadu\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='a'||a8=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is a. Punjab");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9: Recently, the USA announces the designation of which of the following countries as a State Sponsor of Terrorism? \n");
    printf("\n a. Pakistan \t\t b. Israel \n\n c. Cuba \t\t d. Afghanistan\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='c'||a9=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c. Cuba");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10: Which Indian state has recently inaugurated a 'Fire Park', the first in the country to bring awareness on fire safety measures ?\n");
    printf("\n a. Odisha \t\t b. West Bengal \n\n c. Assam \t\t d. Himachal Pradesh\n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='a'||a10=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
    printf("\nINCORRECT\nThe Answer is a. Odisha");
    printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n");
    }
    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL)
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t%s\t\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

void Sports()
{
    s.subject="Sports";
    s.score=0;
    printf("\n------------WELCOME TO SPORTS QUIZ------------\n\n");
    printf("\nQuestion 1: Who was the winner of the orange cap in IPL 2014?\n");
    printf("\n a. Chris Gayle \t\t b. Sachin Tendulkar \n\n c. Virat Kohli \t\t d. Robin Uthappa\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='d'||a1=='D')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Robin Uthappa\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: Who defeated Usain Bolt in 100m finals which was Usain Bolt's last race?\n");
    printf("\n a. Yohan Blake \t\t b. Tyson Gay \n\n c. Justin Gatlin \t\t d. Christian Coleman\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='c'||a2=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Justin Gatlin\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: Who is the greatest singles badminton player among men till date?\n");
    printf("\n a. Taufik Hidayat \t\t b. Lin Dan \n\n c. Rudy Hartono \t\t d. Han Aiping\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='b'||a3=='B')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b. Lin Dan\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4: Who has s.scored most number of international goals in football till the date 11th April,2021?\n");
    printf("\n a. Christiano Ronaldo \t\t b. Lionel Messi \n\n c. Ali Daei \t\t\t d. Pele\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='c'||a4=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Ali Daei\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: Which player has the most number of titles to his name in Tennis in open category among men?\n");
    printf("\n a. Rafael Nadal \t\t b.Jimmy Connors \n\n c. Roger Federer \t\t d. John McEnroe\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='d'||a5=='D')
    {
         printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. John McEnroe\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Who holds the record for longest distance in Javelin throw?\n");
    printf("\n\n a. Thomas Rohler \t\t b. Raymond Hecht \n\n c. Magnus Kirt \t\t d. Jan Zelezny\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='d'||a6=='D')
    {
         printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is d. Jan Zelezny\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: Who is also known as the Lightning Kid?\n");
    printf("\n\n a. Shoaib Akhtar \t\t b. PT Usha \n\n c. Vishwanathan Anand \t\t d. Sunil Gavaskar\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='c'||a7=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Vishwanathan Anand\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 8: Which wrestler has the most victories in WWE?\n");
    printf("\n\n a. Kane \t\t b. Undertaker \n\n c. John Cena \t\t d. Goldberg\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='c'||a8=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. John Cena\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9: Who is the best female badminton player as of 30th March,2021?\n");
    printf("\n\n a. Carolina Marin \t\t b. PV Sindhu \n\n c. Tai-Tzu-ying \t\t d. Nozomi Okuhara\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='c'||a9=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Tai-Tzu-ying\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10: Who is the fastest swimmer in the world?\n");
    printf("\n\n a. Michael Phelps \t\t b. Cesar Cielo \n\n c. Sun Yang \t\t\t d. Adam Peaty\n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='a'||a10=='A')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score = %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a. Michael Phelps\n");
        printf("\nYour score = %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n");
    }

    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL)
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t%s\t\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

void Wild()
{
    s.subject="Wildlife";
    s.score=0;
    printf("\n WELCOME TO WILDLIFE QUIZ\n\n");
    printf("\nQuestion 1: When did World Wild Fund for Nature-India established ?\n");
    printf("\n a. 1956 \t\t b. 1969 \n\n c. 1976 \t\t d. 1997\n\n");
    char a1;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a1);
    if(a1=='b'||a1=='b')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is b.1969");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 2: How can we preserve viable material of endangered species?\n");
    printf("\n a. by mutation \t\t b. by cloning \n\n c. by gene bank \t\t d. by gene pool\n\n");
    char a2;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a2);
    if(a2=='c'||a2=='c')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c.by gene bank");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 3: Some of the most threatened species are found in Asia.\n");
    printf("\n a. True \t\t b. False\n\n");
    char a3;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a3);
    if(a3=='a'||a3=='a')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is a.True");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 4:Which year Wildlife Protection Act was implemented in India?\n");
    printf("\n a. 1970 \t\t b. 1971 \n\n c. 1972 \t\t d. 1973\n\n");
    char a4;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a4);
    if(a4=='c'||a4=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c.1972");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 5: In which of the following states Nagarhole National Park located?\n");
    printf("\n a. Karnataka \t\t b. Kerala \n\n c. Assam \t\t d. Tamil Nadu\n\n");
    char a5;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a5);
    if(a5=='a'||a5=='a')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is a. Karnataka");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 6: Which is the natural habitat of Indian lion?\n");
    printf("\n a. Western Ghats \t\t b. Sunderban Delta \n\n c. Gir Forest \t\t\t d. Himalayas\n\n");
    char a6;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a6);
    if(a6=='c'||a6=='c')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Correct Answer is c. Gir forest");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 7: Which type of wildlife found in Ganga-Bramhaputra delta?\n");
    printf("\n a. Lions \t\t b. Yak \n\n c. Royal Bengal Tiger \t d. Sheep\n\n");
    char a7;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a7);
    if(a7=='c'||a7=='C')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is c. Royal Bengal Tiger");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 8: Red Data Book provides data on \n");
    printf("\n a. red flower plants \t\t\t b. red colored fishes \n\n c. list of plants and animals \t\t d. Endangered plants and animals\n\n");
    char a8;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a8);
    if(a8=='d'||a8=='d')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is d. Endangered plants and animals");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 9: When was Indian Board for Wildlife constituted? \n");
    printf("\n a. 1952 \t\t b. 1950 \n\n c. 1949 \t\t d. 1948\n\n");
    char a9;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a9);
    if(a9=='a'||a9=='a')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is a. 1952");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nQuestion 10: In which of the following states is Periyar Tiger reserves located?\n");
    printf("\n a. Rajasthan \t\t b. Assam\n\n c. Bihar \t\t d. Kerala\n\n");
    char a10;
    getchar();
    printf("\nEnter your ans: ");
    scanf("%c",&a10);
    if(a10=='d'||a10=='d')
    {
        printf("\nCORRECT ANSWER!");
        s.score+=10;
        printf("\nYour score= %d\n\n",s.score);
    }
    else
    {
        printf("\nINCORRECT\nThe Answer is a. Kerala");
        printf("\nYour score= %d\n\n",s.score);
    }
    system("pause");
    system("CLS");
    printf("\nYou scored: %d\n",s.score);
    if(s.score==100)
    {
        printf("\n\nCONGRATULATIONS!!!!\nYOU HAVE ANSWERED ALL QUESTIONS CORRECTLY!!!!\n\n");
    }
    else if (s.score>=70 && s.score<=90)
    {
        printf("\n\nGREAT JOB!!!\n\n");
    }
    else if (s.score>=30 && s.score<=60)
    {
        printf("\n\nBETTER LUCK NEXT TIME!\n\n");
    }
    else
    {
        printf("\n\nYOU CAN DO BETTER!\n\n");
    }

    FILE *fp;
    fp=fopen("Scoreboard.txt", "a");
    if(fp==NULL)
    {
        printf("ERROR: Could not find file!");
    }
    fprintf(fp,"%s\t\t%s\t\t\t%d\n",s.name,s.subject,s.score);
    fclose(fp);
}

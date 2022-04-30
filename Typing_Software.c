#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> 
void Paragraph1();
void Paragraph2();
void Paragraph3();
void Paragraph4();
void Paragraph5();
void compare(char[]);
int time(int, int, int, int, int, int);
int Minute(int, int);
int Seconds(int, int);
int Milliseconds(int, int);
float Accuracy(float, float); // To find accuracy

int main()
{
    int choice;
    do
    {
        printf("\n\t\t\t\t\t\t <<<---||| What you want to type |||--->>>\n\n"); 
        printf("\t\t\t\t\t\tTyping Test 1  =>  \"Social Media\"  -->  Press 1\n");
        printf("\t\t\t\t\t\tTyping Test 2  =>  \" Spider Man \"  -->  Press 2\n");
        printf("\t\t\t\t\t\tTyping Test 3  =>  \" Techology  \"  -->  Press 3\n");
        printf("\t\t\t\t\t\tTyping Test 4  =>  \" Biogragphy \"  -->  Press 4\n");
        printf("\t\t\t\t\t\tTyping Test 5  =>  \"  Business  \"  -->  Press 5\n");
        printf("\t\t\t\t\t\t         Exit  =>  \"    QUIT    \"  -->  Press 6\n");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            Paragraph1();
            break;
        case 2:
            Paragraph2();
            break;
        case 3:
            Paragraph3();
            break;
        case 4:
            Paragraph4();
            break;
        case 5:
            Paragraph5();
            break;
        case 6:
            exit(1);
        default:
            printf("Please enter the valid number:\n");
            printf("Enter number form 1 to 6\n");
            break;
        }
    } while (choice != 6);
    return 0;
}
void Paragraph1()
{
    char s10[507] = "The term social media refers to a computer-based technology that facilitates the sharing of ideas, thoughts, and information through virtual networks and communities. Social media is internet-based and gives users quick electronic communication of content, such as personal information, documents, videos, and photos. Users engage with social media via a computer, tablet, or smartphone via web-based software or applications. While social media is ubiquitous in America and Europe, Asian .......";
    printf("\t\t\t\t\t\t\t\t<=Start Typing=>\n\n");
    puts(s10);
    printf("\n");
    compare(s10);
}
void Paragraph2()
{
    char s20[501] = "Spider-Man: No Way Home is a 2021 American superhero film based on the Marvel Comicscharacter Spider-Man, co-produced by Columbia Pictures and Marvel Studios and distributed by Sony Pictures Releasing. It is the sequel to Spider-Man: Homecoming (2017) and Spider-Man: Far From Home (2019), and the 27th film in the Marvel Cinematic Universe (MCU). The film was directed by Jon Watts and written by Chris McKenna and Erik Sommers. It stars Tom Holland as Peter Parker / Spider-Man alongside Zendaya";
    printf("\t\t\t\t\t\t\t\t<=Start Typing=>\n\n");
    puts(s20);
    printf("\n");
    compare(s20);
}
void Paragraph3()
{
    char s30[501] = "Inforre and processes to create, process, store, secure and exchange all forms of electronic data. Typically,mation technology (IT) is the use of any computers, storage, networking and other physical devices, infrastructu IT is used in the context of business operations, as opposed to technology used for personal or entertainment purposes. The commercial use of IT encompasses both computer technology and telecommunications.The IT department ensures that the organization's systems, networks....";
    printf("\t\t\t\t\t\t\t\t<=Start Typing=>\n\n");
    puts(s30);
    printf("\n");
    compare(s30);
}
void Paragraph4()
{
    char s40[501] = "Cristiano Ronaldo, in full Cristiano Ronaldo dos Santos Aveiro, (born February 5, 1985, Funchal, Madeira, Portugal), Portuguese football (soccer) forward who was one of the greatest players of his generation.Ronaldo’s father, José Dinis Aveiro, was the equipment manager for the local club Andorinha. (The name Ronaldo was added to Cristiano’s name in honour of his father’s favourite movie actor, Ronald Reagan, who was U.S. president at the time of Cristiano’s birth.A tall player at 6 .";
    printf("\t\t\t\t\t\t\t\t<=Start Typing=>\n\n");
    puts(s40);
    printf("\n");
    compare(s40);
}
void Paragraph5()
{
    char s50[501] = "Business is the activity of making one's living or making money by producing or buying and selling products (such as goods and servicesHaving a business name does not separate the business entity from the owner, which means that the owner of the business is responsible and liable for debts incurred by the business. If the business acquires debts, the creditors can go after the owner's personal possessions. A business structure does not allow for corporate tax rate.The proprietor is personally)";
    printf("\t\t\t\t\t\t\t\t<=Start Typing=>\n\n");
    puts(s50);
    printf("\n");
    compare(s50);
}
void compare(char c1[]) // compare function copares the system string and user string.
{
    int Right = 0, Wrong = 0, i, Total, M;
    SYSTEMTIME T, s;
    char c2[501], ch1 = 'R', ch2 = 'W';
    GetSystemTime(&T);
    gets(c2);
    GetSystemTime(&s);
    fflush(stdin);
    printf("\n\t\t\t\tPosition of Right and Wrong character - Here R=>Right and W=>Wrong :-\n\n");
    for (i = 0; c1[i] != '\0' && c2[i] != '\0'; i++)
    {
        if (c1[i] == c2[i])
        {
            ++Right;
            printf("%d%c ", Right, 'R');
        }
        else
        {
            ++Wrong;
            printf("%d%c ", Wrong, 'W');
        }
    }
    Total = strlen(c2);
    printf("\n\n\t\t\t\t\t\t\t<<<<<====RESULTS====>>>>>\n\n");
    printf("\t\t\t\t\t\t\t *  TOTAL CHARACTER = %d\n", strlen(c1));
    printf("\t\t\t\t\t\t\t *  TYPED CHARACTER = %d\n", strlen(c2));
    printf("\t\t\t\t\t\t\t *  RIGHT CHARACTER = %d\n", Right);
    printf("\t\t\t\t\t\t\t *  WRONG CHARACTER = %d\n", Wrong);
    M = time(T.wMinute, s.wMinute, T.wSecond, s.wSecond, T.wMilliseconds, s.wMilliseconds);
    printf("\t\t\t\t\t\t\t *     GROSS  SPEED = %d WPM\n", Total / 5 / M);
    printf("\t\t\t\t\t\t\t *       NET  SPEED = %d WPM\n", (Total - Wrong) / 5 / M);
    printf("\t\t\t\t\t\t\t *         ACCURACY = %.2f %%\n", Accuracy(Total, Right));
}

int time(int TwMinute, int swMinute, int TwSecond, int swSecond, int TwMilliseconds, int swMilliseconds)
{
    int M;
    printf("\t\t\t\t\t\t\t *       TIME TAKEN = %d Min :%d Sec:%d Millisec\n", Minute(TwMinute, swMinute), Seconds(TwSecond, swSecond), Milliseconds(TwMilliseconds, swMilliseconds));
    M = Minute(TwMinute, swMinute);
    return M;
}
int Minute(int Minute1, int Minute2)
{
    int Time_diff;
    if (Minute1 < Minute2)
        for (Time_diff = 0; Minute1 < Minute2; Time_diff++)
            Minute1++;
    else if (Minute1 == Minute2)
        Time_diff = 0;
    else if (Minute1 > Minute2)
    {
        for (Time_diff = 0; Minute1 < 60; Time_diff++)
            Minute1++;
        for (Time_diff; Minute1 < Minute2; Time_diff++)
            Minute1++;
    }
    return Time_diff;
}
int Seconds(int Second1, int Second2)
{
    int Time_diff;
    if (Second1 < Second2)
        for (Time_diff = 0; Second1 < Second2; Time_diff++)
            Second1++;
    else if (Second1 == Second2)
        Time_diff = 0;
    else if (Second1 > Second2)
    {
        for (Time_diff = 0; Second1 < 60; Time_diff++)
            Second1++;
        for (Time_diff; Second1 < Second2; Time_diff++)
            Second1++;
    }
    return Time_diff;
}
int Milliseconds(int Milliseconds1, int Milliseconds2)
{
    int Time_diff;
    if (Milliseconds1 < Milliseconds2)
        for (Time_diff = 0; Milliseconds1 < Milliseconds2; Time_diff++)
            Milliseconds1++;
    else if (Milliseconds1 == Milliseconds2)
        Time_diff = 0;
    else if (Milliseconds1 > Milliseconds2)
    {
        for (Time_diff = 0; Milliseconds1 < 1000; Time_diff++)
            Milliseconds1++;
        for (Time_diff; Milliseconds1 < Milliseconds2; Time_diff++)
            Milliseconds1++;
    }
    return Time_diff;
}
float Accuracy(float Total, float Right)
{
    float accuracy;
    accuracy = (float)(Right / Total) * 100;
    return accuracy;
}
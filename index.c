#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

char p1Eg1()
{
    int inputValue;
    
    printf("Please enter any integer: ");
    scanf("%d", &inputValue);
    if(inputValue > 0) return printf("%d is a positive number", inputValue);
    if(inputValue < 0) return printf("%d is a negative number", inputValue);
    return printf("The number entered is zero");
}

char p1Eg2()
{
    double inputValue;
    double returnValue;

    printf("Please enter any integer: ");
    scanf("%lf", &inputValue);
    if(inputValue < 0) return printf("Accept positive number only!");
    returnValue = sqrt(inputValue);
    return printf("Square root of %lf is %lf", inputValue, returnValue);
}

char p1Eg3()
{
    int firstVar, secondVar;
    double returnValue;

    printf("Please enter numerator: ");
    scanf("%d", &firstVar);
    printf("Please enter denominator: ");
    scanf("%d", &secondVar);
    if(secondVar == 0) return printf("The denominator can't be zero!");
    returnValue = (double) firstVar/secondVar;
    return printf("Result: %d / %d = %lf", firstVar, secondVar, returnValue);
}

char p1Eg4()
{
    int firstVar, secondVar;
    char prefixText[] = "Comparison results:";

    printf("Please enter the first number: ");
    scanf("%d", &firstVar);
    printf("Please enter the second number: ");
    scanf("%d", &secondVar);
    if(firstVar > secondVar) return printf("%s %d is greater than %d", prefixText, firstVar, secondVar);
    if(firstVar < secondVar) return printf("%s %d is less than %d", prefixText, firstVar, secondVar);
    return printf("%s both numbers are equal", prefixText);
}

char p1Eg6()
{
    int widthValue, heightValue;

    printf("Please enter the width of the rectangle: ");
    scanf("%d", &widthValue);
    printf("Please enter the height of the rectangle: ");
    scanf("%d", &heightValue);
    if(!(widthValue > 0 && heightValue > 0)) return printf("The edge of rectangle must be a positive number!");
    return printf("The perimeter of the rectangle is %d\nThe area of the rectangle is %d", (2 * (widthValue + heightValue)), (widthValue * heightValue));
}

char p1Eg9()
{
    int heightValue, radiusValue;
    double pi = 4.0 * atan(1.0);
    double pb, ab, tsa, v;

    printf("Please enter the base's radius of the cylinder: ");
    scanf("%d", &radiusValue);
    printf("Please enter the height of the cylinder: ");
    scanf("%d", &heightValue);
    if(!(radiusValue > 0 && heightValue > 0)) return printf("The height and radius of cylinder must be a positive number!");
    pb = 2 * pi * radiusValue;
    ab = pi * radiusValue * radiusValue;
    tsa = heightValue * pb + 2 * ab;
    v = heightValue * ab;
    return printf("The total surface area of the cylinder is %lf\nThe volume of the cylinder is %lf", tsa, v);
}

char p1Eg16()
{
    int i, length;
    char input[4];

    printf("Please enter 4-digit positive integer: ");
    scanf("%s", &input);
    length = strlen(input);
    if(length != 4)
        return printf("Accept integer from 1000 to 9999 only!");
    for(i = length - 1; i >= 0; i--)
        printf("%c", input[i]);
}

char p1Eg16_mathway()
{
    int input;

    printf("Press your 4 number: ");
    scanf("%d", &input);
    printf("Reserved: %d%d%d%d", input % 10, (input/10) % 10, (input / 100) % 10, input / 1000);
}

char p1Eg16_open()
{
    int input, iDiv = 1, iReverse = 0;
    char string[100];

    printf("Press your number: ");
    scanf("%d", &input);
    sprintf(string, "%d", input);
    while(input){
        iReverse++;
        printf("%d", (input/iDiv) % 10);
        iDiv *= 10;
        if(iReverse == strlen(string)) break;
    }
}

char p2_switchEg()
{
    double n1, n2;
    char opr;
    int result;

    printf("Type input: ");
    scanf("%lf%c%lf", &n1, &opr, &n2);
    switch(opr)
{
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
        case '/':
            result = n1 / n2;
        default:
            return printf("Op is not supported");
    }
    printf("%lf", result);
}

char p2_forEg()
{
    int result = 0;

    for(int i = 1; i <= 10; i++)
        result += i;
    printf("%d", result);
}

char p2Eg1()
{
    int input;

    printf("How many number that you want to display: ");
    scanf("%d", &input);
    if(input <= 0)
        return printf("Accept positive number only!");
    for(int i = 1; i <= input; i++)
        printf((i == input ? "%d" : "%d, "), i);
}

char p2Eg2()
{
    int min, max;

    printf("Type min & max: ");
    scanf("%d %d", &min, &max);
    for(int i = min; (min <= max ? i <= max : i >= max); (min <= max ? i++ : i--))
        printf((i == max ? "%d" : "%d, "), i);
}

char p2Eg6()
{
    char target[5];
    int arm;

    for(int i = 100; i <= 999; i++){
        sprintf(target, "%d", i);
        arm = (int)pow(target[0] - '0', 3)
            + (int)pow(target[1] - '0', 3)
            + (int)pow(target[2] - '0', 3);
        if(arm == i)
            printf("%d\n", arm);
    }
}

char p2Eg6m()
{
    int arm = 0;

    for(int i = 100; i <= 999; i++){
        arm = pow(i % 10, 3)
            + pow((i / 10) % 10, 3)
            + pow(i / 100, 3);
        if(arm == i)
            printf("%d\n", i);
    }
}

char *d230524Eg1_extension(char *str)
{
    str[0] = toupper((unsigned char)str[0]);
}

char d230524Eg1()
{
    int students, day;
    char month[5];
    char *results[100] = {};
    char *astro[1000] =  {
        "Capricorn",
        "Aquarius",
        "Pisec",
        "Aries",
        "Taurus",
        "Gemini",
        "Cancer",
        "Leo",
        "Virgo",
        "Libra",
        "Scorpio",
        "Sagittarius",
        "Capricorn"
    };

    scanf("%d", &students);
    for(int i = 1; i <= students; i++)
    {
        scanf("%d %s", &day, &month);
        if(strcmp(d230524Eg1_extension(month), "Jan") == 0){
            if(day <= 20){
                results[i - 1] = astro[0];
            } else results[i - 1] = astro[1];
        } else if(strcmp(d230524Eg1_extension(month), "Feb") == 0){
            if(day <= 19){
                results[i - 1] = astro[1];
            } else results[i - 1] = astro[2];
        } else if(strcmp(d230524Eg1_extension(month), "Mar") == 0){
            if(day <= 20){
                results[i - 1] = astro[2];
            } else results[i - 1] = astro[3];

        } else if(strcmp(d230524Eg1_extension(month), "Apr") == 0){
            if(day <= 20){
                results[i - 1] = astro[3];
            } else results[i - 1] = astro[4];

        } else if(strcmp(d230524Eg1_extension(month), "May") == 0){
            if(day <= 20){
                results[i - 1] = astro[4];
            } else results[i - 1] = astro[5];

        } else if(strcmp(d230524Eg1_extension(month), "Jun") == 0){
            if(day <= 21){
                results[i - 1] = astro[5];
            } else results[i - 1] = astro[6];

        } else if(strcmp(d230524Eg1_extension(month), "Jul") == 0){
            if(day <= 22){
                results[i - 1] = astro[6];
            } else results[i - 1] = astro[7];

        } else if(strcmp(d230524Eg1_extension(month), "Aug") == 0){
            if(day <= 22){
                results[i - 1] = astro[7];
            } else results[i - 1] = astro[8];

        } else if(strcmp(d230524Eg1_extension(month), "Sep") == 0){
            if(day <= 21){
                results[i - 1] = astro[8];
            } else results[i - 1] = astro[9];

        } else if(strcmp(d230524Eg1_extension(month), "Oct") == 0){
            if(day <= 22){
                results[i - 1] = astro[9];
            } else results[i - 1] = astro[10];

        } else if(strcmp(d230524Eg1_extension(month), "Nov") == 0){
            if(day <= 22){
                results[i - 1] = astro[10];
            } else results[i - 1] = astro[11];

        } else {
            if(day <= 21){
                results[i - 1] = astro[11];
            } else results[i - 1] = astro[12];
        }
    }

    for(int j = 0; j < students; j++) printf((j == students - 1 ? "%s" : "%s\n"), results[j]);
}

char p3Menu()
{
    int i, option;
    do {
        system("cls");
        for(i = 1; i <= 4; i++)
            printf("%d. Select 1.%d\n", i, i);
        printf("0. Exit menu\n");
        printf("Your option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                p1Eg1();
                break;
            case 2:
                p1Eg2();
                break;
            case 3:
                p1Eg3();
                break;
            case 4:
                p1Eg4();
                break;
            default:
                printf("Function invalid");
                break;
        }
    } while(option != 0);
}

char egFactorial()
{
    int number, result = 1;
    printf("Press a number of factorial: ");
    scanf("%d", &number);
    if(number == 0) return printf("Result: %d", result);
    for(int i = number; i > 0; i--)
        result *= i;
    return printf("Result: %d", result);
}

int main()
{
    system("cls");
    
    return 0;
}
//revise deya hoy nai


#include <stdio.h>
void matrix(char p1, char p2, char p3, char p4, char p5, char p6, char p7, char p8, char p9) {
    printf("\n%c | %c | %c", p1, p2, p3);
    printf("\n---------");
    printf("\n%c | %c | %c", p4, p5, p6);
    printf("\n---------");
    printf("\n%c | %c | %c", p7, p8, p9);
}
int main() {
    int hum, i;
    char p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
    for (i = 1; i <= 5; i++) {
        matrix(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        printf("\nEnter your position:");
        scanf("%d", &hum);
        if (hum == 1) {
            if (p1 != 'x' && p1 != 'o') {
                p1 = 'x';
            }
            else {
                printf("Wrong position.1 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 2) {
            if (p2 != 'x' && p2 != 'o') {
                p2 = 'x';
            }
            else {
                printf("Wrong position.2 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 3) {
            if (p3 != 'x' && p3 != 'o') {
                p3 = 'x';
            }
            else {
                printf("Wrong position.3 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 4) {
            if (p4 != 'x' && p4 != 'o') {
                p4 = 'x';
            }
            else {
                printf("Wrong position.4 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 5) {
            if (p5 != 'x' && p5 != 'o') {
                p5 = 'x';
            }
            else {
                printf("Wrong position.5 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 6) {
            if (p6 != 'x' && p6 != 'o') {
                p6 = 'x';
            }
            else {
                printf("Wrong position.6 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 7) {
            if (p7 != 'x' && p7 != 'o') {
                p7 = 'x';
            }
            else {
                printf("Wrong position.7 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 8) {
            if (p8 != 'x' && p8 != 'o') {
                p8 = 'x';
            }
            else {
                printf("Wrong position.8 is used.Try again!");
                i--;
                continue;
            }
        }
        else if (hum == 9) {
            if (p9 != 'x' && p9 != 'o') {
                p9 = 'x';
            }
            else {
                printf("Wrong position.9 is used.Try again!");
                i--;
                continue;
            }
        }
        else {
            printf("Invalid input.Valid inputs are (1-9)");
            i--;
            continue;
        }
        if ((p1 == 'x' && p2 == 'x' && p3 == 'x') || (p4 == 'x' && p5 == 'x' && p6 == 'x') || (p7 == 'x' && p8 == 'x' && p9 == 'x') || (p1 == 'x' && p4 == 'x' && p7 == 'x') || (p2 == 'x' && p5 == 'x' && p8 == 'x') || (p3 == 'x' && p6 == 'x' && p9 == 'x') || (p1 == 'x' && p5 == 'x' && p9 == 'x') || (p3 == 'x' && p5 == 'x' && p7 == 'x')) {
            matrix(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("\nYou win!!!");
            break;
        }
        if (p5 != 'x' && p5 != 'o') {
            p5 = 'o';
            printf("\nBot's position is 5");
        }
        else {
            if (((p1 == 'x' && p9 == 'x') || (p3 == 'x' && p7 == 'x')) && ((p2 != 'x' && p2 != 'o') && (p4 != 'x' && p4 != 'o') && (p6 != 'x' && p6 != 'o') && (p8 != 'x' && p8 != 'o'))) {
                if (p2 != 'x' && p2 != 'o') {
                    p2 = 'o';
                    printf("\nBot's position is 2");
                }
                else if (p4 != 'x' && p4 != 'o') {
                    p4 = 'o';
                    printf("\nBot's position is 4");
                }
                else if (p6 != 'x' && p6 != 'o') {
                    p6 = 'o';
                    printf("\nBot's position is 6");
                }
                else if (p8 != 'x' && p8 != 'o') {
                    p8 = 'o';
                    printf("\nBot's position is 8");
                }
            }
            else if (((p1 == 'o' && p2 == 'o') || (p9 == 'o' && p6 == 'o') || (p7 == 'o' && p5 == 'o')) && (p3 != 'x' && p3 != 'o')) {
                p3 = 'o';
                printf("\nBot's position is 3");
            }
            else if (((p1 == 'o' && p3 == 'o') || (p8 == 'o' && p5 == 'o')) && (p2 != 'x' && p2 != 'o')) {
                p2 = 'o';
                printf("\nBot's position is 2");
            }
            else if (((p3 == 'o' && p2 == 'o') || (p7 == 'o' && p4 == 'o') || (p9 == 'o' && p5 == 'o')) && (p1 != 'x' && p1 != 'o')) {
                p1 = 'o';
                printf("\nBot's position is 1");
            }
            else if (((p4 == 'o' && p5 == 'o') || (p3 == 'o' && p9 == 'o')) && (p6 != 'x' && p6 != 'o')) {
                p6 = 'o';
                printf("\nBot's position is 6");
            }
            else if (((p6 == 'o' && p5 == 'o') || (p1 == 'o' && p7 == 'o')) && (p4 != 'x' && p4 != 'o')) {
                p4 = 'o';
                printf("\nBot's position is 4");
            }
            else if (((p7 == 'o' && p8 == 'o') || (p3 == 'o' && p6 == 'o') || (p1 == 'o' && p5 == 'o')) && (p9 != 'x' && p9 != 'o')) {
                p9 = 'o';
                printf("\nBot's position is 9");
            }
            else if (((p7 == 'o' && p9 == 'o') || (p2 == 'o' && p5 == 'o')) && (p8 != 'x' && p8 != 'o')) {
                p8 = 'o';
                printf("\nBot's position is 8");
            }
            else if (((p9 == 'o' && p8 == 'o') || (p1 == 'o' && p4 == 'o') || (p3 == 'o' && p5 == 'o')) && (p7 != 'x' && p7 != 'o')) {
                p7 = 'o';
                printf("\nBot's position is 7");
            }
            else {
                if (((p1 == 'x' && p2 == 'x') || (p9 == 'x' && p6 == 'x') || (p7 == 'x' && p5 == 'x')) && (p3 != 'x' && p3 != 'o')) {
                    p3 = 'o';
                    printf("\nBot's position is 3");
                }
                else if (((p1 == 'x' && p3 == 'x') || (p8 == 'x' && p5 == 'x')) && (p2 != 'x' && p2 != 'o')) {
                    p2 = 'o';
                    printf("\nBot's position is 2");
                }
                else if (((p2 == 'x' && p3 == 'x') || (p7 == 'x' && p4 == 'x') || (p9 == 'x' && p5 == 'x')) && (p1 != 'x' && p1 != 'o')) {
                    p1 = 'o';
                    printf("\nBot's position is 1");
                }
                else if (((p4 == 'x' && p5 == 'x') || (p3 == 'x' && p9 == 'x')) && (p6 != 'x' && p6 != 'o')) {
                    p6 = 'o';
                    printf("\nBot's position is 6");
                }
                else if (((p6 == 'x' && p5 == 'x') || (p1 == 'x' && p7 == 'x')) && (p4 != 'x' && p4 != 'o')) {
                    p4 = 'o';
                    printf("\nBot's position is 4");
                }
                else if (((p7 == 'x' && p8 == 'x') || (p3 == 'x' && p6 == 'x') || (p1 == 'x' && p5 == 'x')) && (p9 != 'x' && p9 != 'o')) {
                    p9 = 'o';
                    printf("\nBot's position is 9");
                }
                else if (((p7 == 'x' && p9 == 'x') || (p2 == 'x' && p5 == 'x')) && (p8 != 'x' && p8 != 'o')) {
                    p8 = 'o';
                    printf("\nBot's position is 8");
                }
                else if (((p9 == 'x' && p8 == 'x') || (p1 == 'x' && p4 == 'x') || (p3 == 'x' && p5 == 'x')) && (p7 != 'x' && p7 != 'o')) {
                    p7 = 'o';
                    printf("\nBot's position is 7");
                }
                else {
                    if ((p2 == 'x' || p4 == 'x') && (p1 != 'x' && p1 != 'o')) {
                        p1 = 'o';
                        printf("\nBot's position is 1");
                    }
                    else if ((p2 == 'x' || p6 == 'x') && (p3 != 'x' && p3 != 'o')) {
                        p3 = 'o';
                        printf("\nBot's position is 3");
                    }
                    else if ((p4 == 'x' || p8 == 'x') && (p7 != 'x' && p7 != 'o')) {
                        p7 = 'o';
                        printf("\nBot's position is 7");
                    }
                    else if ((p6 == 'x' || p8 == 'x') && (p9 != 'x' && p9 != 'o')) {
                        p9 = 'o';
                        printf("\nBot's position is 9");
                    }
                    else {
                        if (p1 != 'x' && p1 != 'o') {
                            p1 = 'o';
                            printf("\nBot's position is 1");
                        }
                        else if (p3 != 'x' && p3 != 'o') {
                            p3 = 'o';
                            printf("\nBot's position is 3");
                        }
                        else if (p7 != 'x' && p7 != 'o') {
                            p7 = 'o';
                            printf("\nBot's position is 7");
                        }
                        else if (p9 != 'x' && p9 != 'o') {
                            p9 = 'o';
                            printf("\nBot's position is 9");
                        }
                        else if (p2 != 'x' && p2 != 'o') {
                            p2 = 'o';
                            printf("\nBot's position is 2");
                        }
                        else if (p4 != 'x' && p4 != 'o') {
                            p4 = 'o';
                            printf("\nBot's position is 4");
                        }
                        else if (p6 != 'x' && p6 != 'o') {
                            p6 = 'o';
                            printf("\nBot's position is 6");
                        }
                        else if (p8 != 'x' && p8 != 'o') {
                            p8 = 'o';
                            printf("\nBot's position is 8");
                        }
                    }
                }
            }
        }
        if ((p1 == 'o' && p2 == 'o' && p3 == 'o') || (p4 == 'o' && p5 == 'o' && p6 == 'o') || (p7 == 'o' && p8 == 'o' && p9 == 'o') || (p1 == 'o' && p4 == 'o' && p7 == 'o') || (p2 == 'o' && p5 == 'o' && p8 == 'o') || (p3 == 'o' && p6 == 'o' && p9 == 'o') || (p1 == 'o' && p5 == 'o' && p9 == 'o') || (p3 == 'o' && p5 == 'o' && p7 == 'o')) {
            matrix(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("\nYou lost!!!");
            break;
        }
        else {
            if (i == 5) {
                matrix(p1, p2, p3, p4, p5, p6, p7, p8, p9);
                printf("\nDraw");
                break;
            }
        }
    }
    return 0;
}
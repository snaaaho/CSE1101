// pori nai, porle bujhar kotha.
// bujhchi maybe...


#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define total_word 20
#define max_word_length 20

char dictionary[total_word][max_word_length] = { "elephabt", "sunshine", "football", "chocolate", "butterfly", "mountain", "rainbow", "umbrella", "television", "hospital", "airplane", "satellite", "sandwich", "astronaut", "bicycle", "dinosaur", "fireworks", "penguin", "watermelon", "lightning"};

void selectRandomWord(char selectedWord[]){
	srand(time(0));
        int index = rand() % total_word;
        strcpy(selectedWord, dictionary[index]);
}

void print(int a){
        char m = ' ', n = ' ', o = ' ', p = ' ', q = ' ', r = ' ';
        switch(a){
                case 6:break;
                case 0:r = '\\';
                case 1:q = '/';
                case 2:p = '\\';
                case 3:o = '/';
                case 4:n = '|';
                case 5:m = '0';
        }
        printf(" +---+\n");
        printf(" |   |\n");
        printf(" %c   |\n", m);
        printf("%c%c%c  |\n", o, n, p);
        printf("%c %c  |\n", q, r);
        printf("     |\n");
        printf("=========\n");
}

int main(){
        char start_choice;
        while(1){
                printf("If you want to play, press 's' otherwise press 'e': ");
                scanf(" %c", &start_choice);        
                if (start_choice == 's' || start_choice == 'S') {
                        printf("\nThanks for starting the game :)\n");
                	break;
                }
                else if (start_choice == 'e' || start_choice == 'E') {
                        printf("You left the game without playing a match :(\n");
                        return 0;
                }
                else {
                        printf("\nInvalid input! Please press 's' to start or 'e' to exit.\n");
                }
        }
        char restart;
        do{
                char random_word[max_word_length];
                selectRandomWord(random_word);
                int n = strlen(random_word);
                printf("\nThe word's length is %d\n", n);
                char guessingword[n+1];
                for(int m = 0; m < n; m++){
                        guessingword[m] = '_';
                }
                guessingword[n] = '\0';
                char used[50] = "";
                int n_used = strlen(used);
                char inp;
                for(int i = 0 ; i <= 6 ; i++){
                        printf("\nAttepts Left: %d\n", 6-i);
                        printf("Hidden Word: %s\n", guessingword);
                        print(6-i);
                        if (strcmp(random_word, guessingword) == 0) {
                                printf("You won :)\n");
                                break;
                        }
                        if(i < 6){
                                printf("Enter a letter(small letter):\n");
                                scanf(" %c", &inp);
                                if (inp < 'a' || inp > 'z') {
                                        printf("Invalid input! Please enter a lowercase letter (a-z).\n");
                                        i--;
                                        continue;
                                }
                                int already_used = 0;
                                for(int s = 0; s < n_used; s++){
                                        if(inp == used[s]){
                                                printf("Wrong input. Try again.\n");
                                                already_used = 1;
                                                i--;
                                                break;
                                        }
                                }
                                if(!already_used){
                                        used[n_used] = inp;
                                        n_used++;
                                        used[n_used] = '\0';
                                        int match_found = 0;
                                        for(int j = 0; j < n; j++){
                                                if(random_word[j] == inp){
                                                        guessingword[j] = inp;
                                                        match_found = 1;
                                                }
                                        }
                                        if(match_found){
                                                i--;
                                        }
                                }
                        }
                        else{
                                printf("You lost :(\n");
                                printf("Right answer is: %s\n\n", random_word);
                        }
                }
                printf("\nDo you want to play again? (y for play again & any other key for exit): ");
                scanf(" %c", &restart);
        }
        while(restart == 'y' || restart == 'Y');
        printf("The game is ended :(");
        return 0;
}
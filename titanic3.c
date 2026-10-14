// same as titanic.c


#include <stdio.h>
#include <string.h>

int main(){

    FILE *f = fopen("titanic_updated.csv", "r");

    int i = 0;
    char row[1024];
    char str[1024];

    int survived, pclass, ageCategory;
    float age = 0;
    char sex[20];

    int total;
    int survivedCount;

    if(f == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    fscanf(f, " %1023[^\n]", row);

    for(int category = 1; category <= 3; category++){

        for(int gender = 1; gender <= 2; gender++){

            for(int class = 1; class <= 3; class++){

                total = 0;
                survivedCount = 0;

                rewind(f);

                fscanf(f, " %1023[^\n]", row);

                for(i = 0; i < 891; i++){

                    fscanf(f, " %1023[^\n]", str);

                    age = 0;
                    sex[0] = '\0';
                    ageCategory = 0;

                    int result = sscanf(str, "%*d,%d,%d,\"%*[^\"]\",%[^,],%f,%d",
                                        &survived, &pclass, sex, &age, &ageCategory);

                    if(result != 5)
                        continue;

                    if(ageCategory != category)
                        continue;

                    if(pclass != class)
                        continue;

                    if(gender == 1 && strcmp(sex, "male") != 0)
                        continue;

                    if(gender == 2 && strcmp(sex, "female") != 0)
                        continue;

                    total++;

                    if(survived == 1)
                        survivedCount++;
                }

                if(total > 0){

                    printf("Age Category: %d\n", category);

                    if(gender == 1)
                        printf("Sex: male\n");
                    else
                        printf("Sex: female\n");

                    printf("Pclass: %d\n", class);

                    printf("Total: %d\n", total);
                    printf("Survived: %d\n", survivedCount);

                    printf("Survival Rate: %.2f%%\n\n",
                           survivedCount * 100.0 / total);
                }
            }
        }
    }

    fclose(f);

    return 0;
}
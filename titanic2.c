// same as titanic.c


#include <stdio.h>
#include <string.h>

int main(){
    FILE *f1 = fopen("titanic.csv", "r");
    FILE *f2 = fopen("titanic_updated.csv", "w");

    int i = 0;
    char row[1024];
    char str[1024];

    int survived, pclass;
    float age = 0;
    char sex[20];

    int ageCategory;

    if(f1 == NULL){
        printf("File could not be opened.\n");
        return 1;
    }

    if(f2 == NULL){
        printf("Output file could not be created.\n");
        fclose(f1);
        return 1;
    }


    fscanf(f1, " %1023[^\n]", row);

    fprintf(f2, "%s,AgeCategory\n", row);

    for(i = 0; i < 891; i++){
        fscanf(f1, " %1023[^\n]", str);

        age = 0;
        sex[0] = '\0';

        int result = sscanf(str, "%*d,%d,%d,\"%*[^\"]\",%[^,],%f", &survived, &pclass, sex, &age);


        if(result != 4){


            continue;
        }


        if(age >= 0 && age <= 18){
            ageCategory = 1;
        }
        else if(age >= 19 && age <= 40){
            ageCategory = 2;
        }
        else{
            ageCategory = 3;
        }



        fprintf(f2, "%s,%d\n", str, ageCategory);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
// bujha lagbe, ai mara...


#include<stdio.h>
#include<string.h>

int main()
{
    FILE *f = fopen("titanic.csv", "r");

    int i = 0;
    char row[1024];
    char str[1024];

    int survived, pclass;
    float age = 0;
    char sex[20];

    int male = 0, female = 0;
    int male_survived = 0, female_survived = 0;

    if(f == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fscanf(f, " %1023[^\n]", row);

    for(i = 0; i < 891; i++)
    {
        fscanf(f, " %1023[^\n]", str);

        age = 0;
        sex[0] = '\0';

        int result = sscanf(str, "%*d,%d,%d,\"%*[^\"]\",%[^,],%f",
                            &survived, &pclass, sex, &age);

        if(result != 4)
            continue;

        if(age <= 0)
            continue;

        if(pclass < 1 || pclass > 3)
            continue;

        if(survived != 0 && survived != 1)
            continue;

        if(strcmp(sex, "male") == 0)
        {
            male++;

            if(survived == 1)
                male_survived++;
        }

        else if(strcmp(sex, "female") == 0)
        {
            female++;

            if(survived == 1)
                female_survived++;
        }
    }

    printf("Total Male: %d\n", male);
    printf("Male Survived: %d\n", male_survived);

    printf("Total Female: %d\n", female);
    printf("Female Survived: %d\n", female_survived);

    printf("\nMale Survival Percentage: %.2f%%",
           male_survived * 100.0 / male);

    printf("\nFemale Survival Percentage: %.2f%%",
           female_survived * 100.0 / female);

    fclose(f);

    return 0;
}
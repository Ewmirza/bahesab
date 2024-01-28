#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define RED_TEXT "\x1b[31m"
#define WHITE_BACKGROUND "\x1b[47m"
#define UNDERLINE "\x1b[4m"
#define RESET "\x1b[0m"
#define ITALIC "\x1b[3m"
#define BLACK_TEXT "\x1b[30m"

void taghvim()
{
    int mah, sal;
    printf("[0]:Back to Menu\n--------------------\n");
    printf("enter year: ");
    scanf("%d", &sal);
    if (sal == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    while (sal < 1206)
    {
        system("cls");
        printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        printf("enter year: ");
        scanf("%d", &sal);
        if (sal == 0)
        {
            system("cls");
            return;
        }
    }
    printf("enter month: ");
    scanf("%d", &mah);
    if (mah == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    while (mah > 12 || mah < 0)
    {
        system("cls");
        printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        printf("enter month: ");
        scanf("%d", &mah);
        if (mah == 0)
        {
            system("cls");
            return;
        }
    }
    system("cls");
    if (mah == 1)
    {
        printf("        %s%s                      Frvardi                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 2)
    {
        printf("        %s%s                      Ordibeh                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 3)
    {
        printf("        %s%s                      Mordad                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 4)
    {
        printf("        %s%s                      Tir                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 5)
    {
        printf("        %s%s                      Mordad                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 6)
    {
        printf("        %s%s                    shahrivar                     %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 7)
    {
        printf("        %s%s                      Mehr                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 8)
    {
        printf("        %s%s                      Aban                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 9)
    {
        printf("        %s%s                      Azar                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 10)
    {
        printf("        %s%s                      Dey                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 11)
    {
        printf("        %s%s                      Bahman                       %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    else if (mah == 12)
    {
        printf("        %s%s                      Esfand                 %s\n", RED_TEXT, WHITE_BACKGROUND, RESET);
    }
    int jam, jam2;
    jam = ((1206 - 1) * 365) + (1);
    int kabise = 0, kabise2 = 0;
    for (int k = 1; k < 1206; k++)
    {
        if (k % 33 == 1)
        {
            kabise++;
        }
        else if (k % 33 == 5)
        {
            kabise++;
        }
        else if (k % 33 == 9)
        {
            kabise++;
        }
        else if (k % 33 == 13)
        {
            kabise++;
        }
        else if (k % 33 == 17)
        {

            kabise++;
        }
        else if (k % 33 == 22)
        {
            kabise++;
        }
        else if (k % 33 == 26)
        {
            kabise++;
        }
        else if (k % 33 == 30)
        {
            kabise++;
        }
    }
    for (int j = 1; j < sal; j++)
    {
        if (j % 33 == 1)
        {
            kabise2++;
        }
        else if (j % 33 == 5)
        {
            kabise2++;
        }
        else if (j % 33 == 9)
        {
            kabise2++;
        }
        else if (j % 33 == 13)
        {
            kabise2++;
        }
        else if (j % 33 == 17)
        {
            kabise2++;
        }
        else if (j % 33 == 22)
        {
            kabise2++;
        }
        else if (j % 33 == 26)
        {
            kabise2++;
        }
        else if (j % 33 == 30)
        {
            kabise2++;
        }
    }
    // tedad rooz az mabda ke (1206/4) hamon sal haye kabise hast
    if (mah <= 6)
    {
        jam2 = ((sal - 1) * 365) + ((mah - 1) * 31);
    }
    else if (mah > 6)
    {
        jam2 = ((sal - 1) * 365) + ((6) * 31) + ((mah - 1 - 6) * 30);
    }
    jam += kabise;
    jam2 += kabise2;
    int ekhtelaf = jam2 - jam;

    if (mah < 12)
    {
        if (mah <= 6)
        {
            printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
            for (int i = 1; i < 32; i++)
            {
                int num, bg;
                num = i + ekhtelaf;
                bg = num % 7;
                if (i == 1)
                {
                    if (bg == 0)
                    {
                        printf("\t\t\t\t\t\t%d", i);
                    }
                    else if (bg == 1)
                    {
                        printf("\t\t\t\t\t\t\t%d\n", i);
                    }
                    else if (bg == 2)
                    {
                        printf("\t%d", i);
                    }
                    else if (bg == 3)
                    {
                        printf("\t\t%d", i);
                    }
                    else if (bg == 4)
                    {
                        printf("\t\t\t%d", i);
                    }
                    else if (bg == 5)
                    {
                        printf("\t\t\t\t%d", i);
                    }
                    else if (bg == 6)
                    {
                        printf("\t\t\t\t\t%d", i);
                    }
                }
                else
                {
                    if (bg == 1)
                    {
                        printf("\t%d\n", i);
                    }
                    else
                    {
                        printf("\t%d", i);
                    }
                }
            }
        }
        else if (mah > 6 && mah < 12)
        {
            printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
            for (int i = 1; i < 31; i++)
            {
                int num, bg;
                num = i + ekhtelaf;
                bg = num % 7;
                if (i == 1)
                {
                    if (bg == 0)
                    {
                        printf("\t\t\t\t\t\t%d", i);
                    }
                    else if (bg == 1)
                    {
                        printf("\t\t\t\t\t\t\t%d\n", i);
                    }
                    else if (bg == 2)
                    {
                        printf("\t%d", i);
                    }
                    else if (bg == 3)
                    {
                        printf("\t\t%d", i);
                    }
                    else if (bg == 4)
                    {
                        printf("\t\t\t%d", i);
                    }
                    else if (bg == 5)
                    {
                        printf("\t\t\t\t%d", i);
                    }
                    else if (bg == 6)
                    {
                        printf("\t\t\t\t\t%d", i);
                    }
                }
                else
                {
                    if (bg == 1)
                    {
                        printf("\t%d\n", i);
                    }
                    else
                    {
                        printf("\t%d", i);
                    }
                }
            }
        }
        else if (mah == 12)
        {
            if (sal % 4 == 0)
            {
                printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
                for (int i = 1; i < 31; i++)
                {
                    int num, bg;
                    num = i + ekhtelaf;
                    bg = num % 7;
                    if (i == 1)
                    {
                        if (bg == 0)
                        {
                            printf("\t\t\t\t\t\t%d", i);
                        }
                        else if (bg == 1)
                        {
                            printf("\t\t\t\t\t\t\t%d\n", i);
                        }
                        else if (bg == 2)
                        {
                            printf("\t%d", i);
                        }
                        else if (bg == 3)
                        {
                            printf("\t\t%d", i);
                        }
                        else if (bg == 4)
                        {
                            printf("\t\t\t%d", i);
                        }
                        else if (bg == 5)
                        {
                            printf("\t\t\t\t%d", i);
                        }
                        else if (bg == 6)
                        {
                            printf("\t\t\t\t\t%d", i);
                        }
                    }
                    else
                    {
                        if (bg == 1)
                        {
                            printf("\t%d\n", i);
                        }
                        else
                        {
                            printf("\t%d", i);
                        }
                    }
                }
            }
            else
            {
                printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
                for (int i = 1; i < 30; i++)
                {
                    int num, bg;
                    num = i + ekhtelaf;
                    bg = num % 7;
                    if (i == 1)
                    {
                        if (bg == 0)
                        {
                            printf("\t\t\t\t\t\t%d", i);
                        }
                        else if (bg == 1)
                        {
                            printf("\t\t\t\t\t\t\t%d\n", i);
                        }
                        else if (bg == 2)
                        {
                            printf("\t%d", i);
                        }
                        else if (bg == 3)
                        {
                            printf("\t\t%d", i);
                        }
                        else if (bg == 4)
                        {
                            printf("\t\t\t%d", i);
                        }
                        else if (bg == 5)
                        {
                            printf("\t\t\t\t%d", i);
                        }
                        else if (bg == 6)
                        {
                            printf("\t\t\t\t\t%d", i);
                        }
                    }
                    else
                    {
                        if (bg == 1)
                        {
                            printf("\t%d\n", i);
                        }
                        else
                        {
                            printf("\t%d", i);
                        }
                    }
                }
            }
        }
    }
    else if (mah == 12)
    {
        if (sal % 33 == 1 || sal % 33 == 5 || sal % 33 == 9 || sal % 33 == 13 || sal % 33 == 17 || sal % 33 == 22 || sal % 33 == 26 || sal % 33 == 30)
        {
            printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
            for (int i = 1; i < 31; i++)
            {
                int num, bg;
                num = i + ekhtelaf;
                bg = num % 7;
                if (i == 1)
                {
                    if (bg == 0)
                    {
                        printf("\t\t\t\t\t\t%d", i);
                    }
                    else if (bg == 1)
                    {
                        printf("\t\t\t\t\t\t\t%d\n", i);
                    }
                    else if (bg == 2)
                    {
                        printf("\t%d", i);
                    }
                    else if (bg == 3)
                    {
                        printf("\t\t%d", i);
                    }
                    else if (bg == 4)
                    {
                        printf("\t\t\t%d", i);
                    }
                    else if (bg == 5)
                    {
                        printf("\t\t\t\t%d", i);
                    }
                    else if (bg == 6)
                    {
                        printf("\t\t\t\t\t%d", i);
                    }
                }
                else
                {
                    if (bg == 1)
                    {
                        printf("\t%d\n", i);
                    }
                    else
                    {
                        printf("\t%d", i);
                    }
                }
            }
        }
        else
        {
            printf("\tsh\tyk\tdo\tse\tch\tpa\tjo\n");
            for (int i = 1; i < 30; i++)
            {
                int num, bg;
                num = i + ekhtelaf;
                bg = num % 7;
                if (i == 1)
                {
                    if (bg == 0)
                    {
                        printf("\t\t\t\t\t\t%d", i);
                    }
                    else if (bg == 1)
                    {
                        printf("\t\t\t\t\t\t\t%d\n", i);
                    }
                    else if (bg == 2)
                    {
                        printf("\t%d", i);
                    }
                    else if (bg == 3)
                    {
                        printf("\t\t%d", i);
                    }
                    else if (bg == 4)
                    {
                        printf("\t\t\t%d", i);
                    }
                    else if (bg == 5)
                    {
                        printf("\t\t\t\t%d", i);
                    }
                    else if (bg == 6)
                    {
                        printf("\t\t\t\t\t%d", i);
                    }
                }
                else
                {
                    if (bg == 1)
                    {
                        printf("\t%d\n", i);
                    }
                    else
                    {
                        printf("\t%d", i);
                    }
                }
            }
        }
    }
}

void Age()
{
    printf("[0]:Back to menu:\n-------------------\n");
    char *monthnames_miladi[] = {"", "januare", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char *monthnames_shamsi[] = {"", "Farvardin", "Ordibehesht", "Khordad", "Tir", "Mordad", "Shahrivar", "Mehr", "Aban", "Azar", "Dey", "Bahman", "Esfand"};
    char *daynames[] = {"Jome", "Shanbe", "Yekshanbe", "Doshanbe", "Seshanbe", "Chaharshanbe", "Panjshanbe"};
    int emsal, emah, emroz;
    printf("emsal che salie: ");
    scanf("%d", &emsal);
    if (emsal == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    while (emsal > 1402)
    {
        system("cls");
        printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        printf("emsal che salie:");
        scanf("%d", &emsal);
        if (emsal == 0)
        {
            system("cls");
            return;
        }
    }
    system("cls");
    printf("[0]:Back to menu:\n-------------------\n");
    printf("dar che mah hastim: ");
    scanf("%d", &emah);
    if (emah == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }

    while (emah > 12 || emah < 1)
    {
        system("cls");
        printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        printf("dar che mah hastim: ");
        scanf("%d", &emah);
        if (emah == 0)
        {
            system("cls");
            return;
        }
    }
    system("cls");
    printf("[0]:Back to menu:\n-------------------\n");
    printf("emroz che roozi hast: ");
    scanf("%d", &emroz);
    if (emroz == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    if (emah < 7)
    {
        while (emroz > 31)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            printf("emroz che roozi hast: ");
            scanf("%d", &emroz);
            if (emroz == 0)
        {
            system("cls");
            return;
        }
        }
    }
    else
    {
        while (emroz > 30)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            printf("emroz che roozi hast: ");
            scanf("%d", &emroz);
            if (emroz == 0)
        {
            system("cls");
            return;
        }
        }
    }
    system("cls");
    printf("[0]:Back to menu:\n-------------------\n");
    int salt, maht, rozt;
    printf("sal tavalod: ");
    scanf("%d", &salt);
    if (salt == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    while (salt > emsal)
    {
        system("cls");
        printf("%s%starikh tavalod nemitavanad az tarikh emsal bishtar bashad%s\n", RED_TEXT, UNDERLINE, RESET);
        printf("sal tavalod: ");
        scanf("%d", &salt);
    }
    system("cls");
    printf("[0]:Back to menu:\n-------------------\n");
    printf("mah tavalod: ");
    scanf("%d", &maht);
    if (maht == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    while (maht > 12 || maht < 1)
    {
        system("cls");
        printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        printf("mah tavalod: ");
        scanf("%d", &maht);
        if (maht == 0)
        {
            system("cls");
            return;
        }
    }
    system("cls");
    printf("[0]:Back to menu:\n-------------------\n");
    printf("rooz tavlod: ");
    scanf("%d", &rozt);
    if (rozt == 0)
    {
        system("cls");
        printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
        return;
    }
    if (maht < 7)
    {
        while (rozt > 31)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            printf("rooz tavlod: ");
            scanf("%d", &rozt);
            if (rozt == 0)
        {
            system("cls");
            return;
        }
        }
    }
    else
    {
        while (rozt > 30)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            printf("rooz tavlod: ");
            scanf("%d", &rozt);
            if (rozt == 0)
        {
            system("cls");
            return;
        }
        }
    }
    if (salt == emsal)
    {
        while (maht > emah)
        {
            system("cls");
            printf("%s%starikh tavalod(mah tavalod) nemitavanad az tarikh emsal bishtar bashad%s\n", RED_TEXT, UNDERLINE, RESET);
            printf("mah tavalod:");
            scanf("%d", &maht);
        }
        if (maht == emah)
        {
            while (rozt > emroz)
            {
                system("cls");
                printf("%s%starikh tavalod(rooz tavalod) nemitavanad az tarikh emsal bishtar bashad%s\n", RED_TEXT, UNDERLINE, RESET);
                scanf("%d", &rozt);
            }
        }
    }
    system("cls");
    int jam, jam2;
    if (emah <= 6)
    {
        jam2 = ((emsal - 1) * 365) + ((emah - 1) * 31) + (emroz);
    }
    else if (emah > 6)
    {
        jam2 = ((emsal - 1) * 365) + ((6) * 31) + ((emah - 1 - 6) * 30) + (emroz);
    }
    if (maht <= 6)
    {
        jam = ((salt - 1) * 365) + ((maht - 1) * 31) + (rozt);
    }
    else if (maht > 6)
    {
        jam = ((salt - 1) * 365) + ((6) * 31) + ((maht - 1 - 6) * 30) + (rozt);
    }
    int kabise = 0, kabise2 = 0;
    for (int k = 1; k < salt; k++)
    {
        if (k % 33 == 1)
        {
            kabise++;
        }
        else if (k % 33 == 5)
        {
            kabise++;
        }
        else if (k % 33 == 9)
        {
            kabise++;
        }
        else if (k % 33 == 13)
        {
            kabise++;
        }
        else if (k % 33 == 17)
        {
            kabise++;
        }
        else if (k % 33 == 22)
        {
            kabise++;
        }
        else if (k % 33 == 26)
        {
            kabise++;
        }
        else if (k % 33 == 30)
        {
            kabise++;
        }
    }
    for (int j = 1; j < emsal; j++)
    {
        if (j % 33 == 1)
        {
            kabise2++;
        }
        else if (j % 33 == 5)
        {
            kabise2++;
        }
        else if (j % 33 == 9)
        {
            kabise2++;
        }
        else if (j % 33 == 13)
        {
            kabise2++;
        }
        else if (j % 33 == 17)
        {
            kabise2++;
        }
        else if (j % 33 == 22)
        {
            kabise2++;
        }
        else if (j % 33 == 26)
        {
            kabise2++;
        }
        else if (j % 33 == 30)
        {
            kabise2++;
        }
    }

    jam += kabise;
    jam2 += kabise2;
    int a;
    a = jam2 - jam;
    // tedad rooz haye omr karde
    // salt,maht,rozt
    // emsal,emah,emroz
    int sal, mah, rooz = 0;
    sal = emsal - salt;
    if (emah > maht)
    {
        mah = emah - maht;
    }
    else
    {
        sal--;
        emah += 12;
        mah = emah - maht;
    }
    if (emroz > rozt)
    {
        rooz = emroz - rozt;
    }
    else
    {
        if (mah == 12)
        {
            emroz += 29;
        }
        else if (mah < 12 && mah > 6)
        {
            emroz += 30;
        }
        else if (mah < 6)
        {
            emroz += 31;
        }
        mah--;
        rooz = emroz - rozt;
    }

    printf("                    %s%ssen shoma matabegh tarikh shamsi:%s\n", WHITE_BACKGROUND, RED_TEXT, RESET);
    printf("                        %s%d sal v %d mah v %d rooz%s \n", ITALIC, sal, mah, rooz, RESET);
    printf("                           %smoadel ba %d roz%s\n ", ITALIC, a, RESET);
    printf("              %s%s--------------tarikh tavalod-------------%s\n", WHITE_BACKGROUND, BLACK_TEXT, RESET);
    int bgi;
    jam -= 2;
    bgi = jam % 7;
    printf("\t\t\t%s,%d %s %d", daynames[bgi], rozt, monthnames_shamsi[maht], salt);
    int miladi_year, miladi_month, miladi_day;
    miladi_year = salt + 621;
    miladi_month = maht + 2;
    miladi_day = rozt + 22;
    if (miladi_day > 31)
    {
        miladi_day -= 31;
        miladi_month++;
    }
    if (miladi_month > 12)
    {
        miladi_month -= 12;
        miladi_year++;
    }

    printf("\n\t\t\t    %d %s %d\n\t\t\t    ", miladi_year, monthnames_miladi[miladi_month], miladi_day);
    MiladiToLunar(miladi_year, miladi_month, miladi_day);
    printf("\n---------------------------------------");
}

void tabdil()
{
    int mabda;
    printf("[0]:exit to menu\n----------------------\n");
    printf("[1]:shamsi\n[2]:miladi\n----------------------\n");
    printf("tarikh mabda ra vared konid: ");
    scanf("%d", &mabda);
    if (mabda > 2 || mabda < 1)
    {
        if (mabda == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }
        else
        {
            while (mabda > 2 || mabda < 0)
            {
                system("cls");
                printf("%sinvalid%s\n", RED_TEXT, RESET);
                printf("[0]:exit to menu\n----------------------\n");
                printf("[1]:shamsi\n[2]:miladi\n----------------------\n");
                printf("tarikh mabda ra vared konid: ");
                printf("enter tarikh mabda:");
                scanf("%d", &mabda);
            }
        }
    }

    system("cls");
    if (mabda == 1)
    {
        int shamsi_year, shamsi_month, shamsi_day;
        int miladi_year, miladi_month, miladi_day;
        printf("[0]:exit to menu\n----------------------\n");
        printf("enter years: ");
        scanf("%d", &shamsi_year);
        if (shamsi_year == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }

        system("cls");
        printf("[0]:exit to menu\n----------------------\n");
        printf("enter month: ");
        scanf("%d", &shamsi_month);
        if (shamsi_month == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }
        while (shamsi_month > 12 || shamsi_month < 1)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            scanf("%d", &shamsi_month);
            if (shamsi_month == 0)
        {
            system("cls");
            return;
        }
        }

        system("cls");
        printf("[0]:exit to menu\n----------------------\n");
        printf("enter days: ");
        scanf("%d", &shamsi_day);
        if (shamsi_day == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }

        while (shamsi_day > 31 || shamsi_day < 1)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            scanf("%d", &shamsi_day);
            if (shamsi_day == 0)
        {
            system("cls");
            return;
        }
        }
        miladi_year = shamsi_year + 621;
        miladi_month = shamsi_month + 2;
        miladi_day = shamsi_day + 22;
        if (miladi_day > 31)
        {
            miladi_day -= 31;
            miladi_month++;
        }
        if (miladi_month > 12)
        {
            miladi_month -= 12;
            miladi_year++;
        }
        system("cls");
        printf("%s%smiladi date:%s\n", WHITE_BACKGROUND, RED_TEXT, RESET);
        printf("%d/%d/%d\n", miladi_year, miladi_month, miladi_day);
        printf("%s%sgamari date:%s\n", WHITE_BACKGROUND, RED_TEXT, RESET);
        MiladiToLunar(miladi_year, miladi_month, miladi_day);
        printf("\n---------------------------------------");
    }

    else if (mabda == 2)
    {
        int miladi_year, miladi_month, miladi_day;
        int shamsi_year, shamsi_month, shamsi_day;
        printf("enter years: ");
        scanf("%d", &miladi_year);
        if (miladi_year == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }

        printf("enter month: ");
        scanf("%d", &miladi_month);
        if (miladi_month == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }
        while (miladi_month > 12 || miladi_month < 1)
        {
            system("cls");
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
            printf("enter month: ");
            scanf("%d", &miladi_month);
            if (miladi_month == 0)
        {
            system("cls");
            return;
        }
        }

        printf("enter days: ");
        scanf("%d", &miladi_day);
        if (miladi_day == 0)
        {
            system("cls");
            printf("%s%sAya motmaen hastid?%s", RED_TEXT, UNDERLINE, RESET);
            return;
        }
        if (miladi_month < 7)
        {
            while (miladi_day > 32 || miladi_day < 1)
            {
                system("cls");
                printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
                printf("enter days: ");
                scanf("%d", &miladi_day);
                if (miladi_day == 0)
        {
            system("cls");
            return;
        }
            }
        }
        else
        {
            while (miladi_day > 31 || miladi_day < 1)
            {
                system("cls");
                printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
                printf("enter days: ");
                scanf("%d", &miladi_day);
                if (miladi_day == 0)
        {
            system("cls");
            return;
        }
            }
        }

        shamsi_year = miladi_year - 621;
        shamsi_month = miladi_month - 2;
        shamsi_day = miladi_day - 22;
        if (shamsi_day < 1)
        {
            miladi_month--;
            shamsi_day += 31;
        }
        if (shamsi_month < 1)
        {
            shamsi_month += 12;
            shamsi_year--;
        }
        system("cls");
        printf("%s%sshamsi date:%s\n", WHITE_BACKGROUND, RED_TEXT, RESET);
        printf("%d/%d/%d\n", shamsi_year, shamsi_month, shamsi_day);
        printf("%s%sgamri date is:%s\n", WHITE_BACKGROUND, RED_TEXT, RESET);
        MiladiToLunar(miladi_year, miladi_month, miladi_day);
        printf("\n---------------------------------------\n");
    }
}

int intPart(double value)
{
    if (value < 0)
    {
        return (int)(value - 0.5);
    }
    else
    {
        return (int)(value + 0.5);
    }
}

void MiladiToLunar(int year, int month, int day)
{
    int juliandate;
    char *monthnames_gamri[] = {"", "Maharam", "Safar", "Rabie1", "Rabie2", "Jamadi1", "jamadi2", "Rajab", "Shaban", "Ramazan", "Shaval", "Zigade", "Zihaje"};

    if (year > 1582 || (year == 1582 && (month > 10 || (month == 10 && day >= 15))))
    {
        juliandate = intPart((1461 * (year + 4800 + intPart((month - 14) / 12))) / 4) + intPart((367 * (month - 2 - 12 * intPart((month - 14) / 12))) / 12) - intPart((3 * intPart((year + 4900 + intPart((month - 14) / 12)) / 100)) / 4) + day - 32075;
    }
    else
    {
        juliandate = 367 * year - intPart((7 * (year + 5001 + intPart((month - 9) / 7))) / 4) + intPart((275 * month) / 9) + day + 1729777;
    }

    int l = juliandate - 1948440 + 10632;
    int n = intPart((l - 1) / 10631);
    l = l - 10631 * n + 354;

    int j = (intPart((10985 - l) / 5316)) * (intPart((50 * l) / 17719)) + (intPart(l / 5670)) * (intPart((43 * l) / 15238));

    l = l - (intPart((30 - j) / 15)) * (intPart((17719 * j) / 50)) - (intPart(j / 16)) * (intPart((15238 * j) / 43)) + 29;

    int lMonth = intPart((24 * l) / 709);
    int lDay = l - intPart((709 * lMonth) / 24);
    int lYear = 30 * n + j - 30;
    printf("%d/%d,%s/%d", lYear, lMonth, monthnames_gamri[lMonth], lDay);
}

int main()
{

    int a;
    do
    {

        printf("[0] Quit \n[1] Calendar\n[2] Age\n[3] Conversion\n");
        printf("----------------------------------");
        printf("\nselect option: ");
        scanf("%d", &a);
        system("cls");
        if (a > 3 || a < 0)
        {
            printf("%sinvalid inputs%s\n", RED_TEXT, RESET);
        }
        else if (a == 1)
        {
            int option;
            do
            {
                system("cls");
                taghvim();
                printf("\n------------------------\n");
                printf("[1]: edame\n[0]: khoroj\n");
                printf("-----------------------------\n");
                printf("select option: ");
                scanf("%d", &option);
                if (option == 0)
                    system("cls");
                if (option < 0 || option > 1)
                {
                    system("cls");
                    printf("\n%sinvalid inputs%s\n", RED_TEXT, RESET);
                    break;
                }
            } while (option == 1);
        }
        else if (a == 2)
        {
            int option;
            do
            {
                system("cls");
                Age();
                printf("\n------------------------\n");
                printf("[1]: edame\n[0]: khoroj\n");
                printf("-----------------------------\n");
                printf("select option: ");
                scanf("%d", &option);
                if (option == 0)
                    system("cls");
                else if (option > 1 || option < 0)
                {
                    system("cls");
                    printf("\n%sinvalid inputs%s\n", RED_TEXT, RESET);
                }

            } while (option == 1);
        }
        else if (a == 3)
        {
            int option;
            do
            {
                system("cls");
                tabdil();
                printf("\n------------------------\n");
                printf("[1]: edame\n[0]: khoroj\n");
                printf("-----------------------------\n");
                printf("select option: ");
                scanf("%d", &option);
                if (option == 0)
                    system("cls");
                else if (option > 1 || option < 0)
                {
                    system("cls");
                    printf("\n%sinvalid inputs%s\n", RED_TEXT, RESET);
                }

            } while (option == 1);
        }

    } while (a != 0);
    printf("By!");

    return 0;
}
#pragma warning(disable : 4996)
#include<stdio.h>   
#include<stdlib.h>
#include<string.h>
read_text(char str[], int size, int flag)
{
    int len;
    if (fgets(str, size, stdin) == NULL) {
        printf("Error: fgets() failed\n");
        exit(EXIT_FAILURE);
    }
    len = strlen(str);
    if (len > 0)
    {
        if (flag && (str[len - 1] == '\n'))
        {
            str[len - 1] = '\0';
            len--;
        }
    }
    else
    {
        printf("Error: No input\n");
        exit(EXIT_FAILURE);
    }
    return len;
}
void main()
{   // dilwsh olon twn metablitwn:
    char mak[7][7], mak1[8][8], s1, s2, ap;
    char player1[30], player2[30];
    int i, j, f, won, turn, age1, age2, count, epaikse, gematos;
    int move, move2, valid_move1 = 1, valid_move2 = 1;
    //ekxwrhsh arxikwn timwn se pinaka  kai metablites
    won = 0;
    gematos = 0;
    count = 0;
    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 6; j++) {
            mak[i][j] = '-';
        }
    }
    for (i = 0; i <= 7; i++) {
        for (j = 0; j <= 7; j++) {
            mak1[i][j] = '-';
        }
    }
    //arxh paixnidou
    //task 1 enarksi
    printf("\t\tWelcome to Score-4 Game for 2\n");
    printf("   0  1  2  3  4  5  6");
    for (i = 0; i <= 6; i++) {
        printf("\n %d", i);
        for (j = 0; j <= 6; j++) {
            printf(" %c ", mak[i][j]);
        }
    }
    //dilwsh idiotitwn paixth:
    printf("\n  Please insert player names \nPlayer 1: \n");
    read_text(player1, sizeof(player1), 1);
    printf("Player 2: \n");

    read_text(player2, sizeof(player2), 1);
    // elenxos gia idio onoma
    f = strcmp(player1, player2);
    if (f == 0) {
        strcat(player2, "2");
        printf("\n!!!Names are identical setting automatically player2 name to %s \n\n", player2);
    }
    //elenxos egkirwthtas gia swsth hlikia
    do {
        printf("\nPlease insert ages of %s and %s\n", player1, player2);
        scanf("%i %i", &age1, &age2);
    } while ((age1 <= 0 || age1 >= 120) || (age2 <= 0 || age2 >= 120));


    // epilogh prwtou paikth
    if (age2 < age1) {
        turn = 1;
    }
    else {
        turn = 0;
    }
    printf("\nWelcome %s, %s\n\n", player1, player2);
    //task 1 telos
    //task 2
    // epilogh simbolou apo player1  kai aftomati epilogh gia player2
    if (turn == 0) {
        printf("\n%s selects symbol ('x' or 'o'): \n", player1);
        do {
            scanf(" %c", &s1);
        } while (s1 != 'x' && s1 != 'o');
        if (s1 == 'x') {
            s2 = 'o';
        }
        else {
            s2 = 'x';
        }
    }
    else {
        printf("\n%s selects symbol ('x' or 'o'): \n", player2);
        do {
            scanf(" %c", &s2);
        } while (s2 != 'x' && s2 != 'o');
        if (s2 == 'x') {
            s1 = 'o';
        }
        else {
            s1 = 'x';
        }
    }
    //arxh prwtou paixnidioy me pinaka 7x7 
    //task 3 arxh
    while (won == 0) {
        // allagh seiras kathe fora pou paizei enas paikths
        if (turn == 0) {

            epaikse = 0;
            //elenxws egkirwthtas kathe kinish paikth kai elenxos gia gemato pinka
            gematos = 0;
            for (i = 0; i <= 6; i++) {
                if (mak[0][i] != '-') {
                    gematos = gematos + 1;
                }
            }
            if (gematos == 7) {
                won = 3;
            }
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ", player1, s1);
                scanf(" %d", &move);
                if (move < 0 || move > 6) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
                else {
                    for (i = 6; i >= 0; i--) {
                        if (mak[i][move] == 'x' || mak[i][move] == 'o') {
                            count = count + 1;
                        }
                        else {
                            if (epaikse == 0) {
                                mak[i][move] = s1;
                                mak1[i][move] = s1;
                                epaikse = 1;
                            }
                        }
                    }
                    if (count > 6) {
                        printf("Collumn is full\n");
                        valid_move1 = 0;
                    }
                    count = 0;

                }
            } while (valid_move1 == 0 || won == 3);
            //task2 telos

            // ektipwsh pinaka paixnidioy
            printf("   0  1  2  3  4  5  6");
            for (i = 0; i <= 6; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 6; j++) {
                    printf(" %c ", mak[i][j]);
                }
            }
            //elenxos nikhs prwtou paikth
            // elnxos gia orizontia
            for (i = 0; i < 7; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s1 && mak[i][j + 1] == s1 &&
                        mak[i][j + 2] == s1 && mak[i][j + 3] == s1) {
                        won = 1;
                    }
                }
            }
            // elenxos gia katheta
            for (i = 0; i <= 3; i++) {
                for (j = 0; j < 7; j++) {
                    if (mak[i][j] == s1 && mak[i + 1][j] == s1 &&
                        mak[i + 2][j] == s1 && mak[i + 3][j] == s1) {
                        won = 1;
                    }
                }
            }

            //diagwnios panwAristera-katwDeksia
            for (i = 0; i <= 3; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s1 && mak[i + 1][j + 1] == s1 &&
                        mak[i + 2][j + 2] == s1 && mak[i + 3][j + 3] == s1) {
                        won = 1;
                    }
                }
            }
            //diagwnios katwDeksia-PanwAristera
            for (i = 3; i < 7; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s1 && mak[i - 1][j + 1] == s1 &&
                        mak[i - 2][j + 2] == s1 && mak[i - 3][j + 3] == s1) {
                        won = 1;
                    }
                }
            }

            turn = 1;

        }
        else {
            // elenxws egkirwthas paixth 2
            epaikse = 0;
            //elenxws gia isopalia
            for (i = 0; i <= 6; i++) {
                if (mak[0][i] != '-') {
                    gematos = gematos + 1;
                }
            }
            if (gematos == 7) {
                won = 3;
            }
            //elenxws egkirwthtas kathe kinish paikth
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ", player2, s2);
                scanf(" %d", &move);
                if (move < 0 || move > 6) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
                else {
                    for (i = 6; i >= 0; i--) {
                        if (mak[i][move] == 'x' || mak[i][move] == 'o') {
                            count = count + 1;
                        }
                        else {
                            if (epaikse == 0) {
                                mak[i][move] = s2;
                                mak1[i][move] = s2;
                                epaikse = 1;
                            }
                        }

                    }
                    if (count > 6) {
                        printf("Collumn is full\n");
                        valid_move1 = 0;
                    }

                    count = 0;

                }
            } while (valid_move1 == 0 || won == 3);
            // ektipwsh pinaka paixnidiou
            printf("   0  1  2  3  4  5  6");
            for (i = 0; i <= 6; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 6; j++) {
                    printf(" %c ", mak[i][j]);
                }
            }
            //elenxos nikhs defterou paikth
            // elnxos gia orizontia
            for (i = 0; i < 7; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s2 && mak[i][j + 1] == s2 &&
                        mak[i][j + 2] == s2 && mak[i][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            // elenxos gia katheta
            for (i = 0; i <= 3; i++) {
                for (j = 0; j < 7; j++) {
                    if (mak[i][j] == s2 && mak[i + 1][j] == s2 &&
                        mak[i + 2][j] == s2 && mak[i + 3][j] == s2) {
                        won = 2;
                    }
                }
            }

            //diagwnios panwAristera-katwDeksia
            for (i = 0; i <= 3; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s2 && mak[i + 1][j + 1] == s2 &&
                        mak[i + 2][j + 2] == s2 && mak[i + 3][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            //diagwnios katwDeksia-PanwAristera
            for (i = 3; i < 7; i++) {
                for (j = 0; j <= 3; j++) {
                    if (mak[i][j] == s2 && mak[i - 1][j + 1] == s2 &&
                        mak[i - 2][j + 2] == s2 && mak[i - 3][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            turn = 0;
        }


    }
    //task 3 telos
    if (won == 3) {
        printf("\nDraw\n");
        printf("Epithimite na sinexisete to paixnidi? (n/o)\n");
        scanf(" %c", &ap);
        if (ap == 'n') {
            printf("to paixnidi sinexizete\n");
            printf("   0  1  2  3  4  5  6  7");
            for (i = 0; i <= 7; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 7; j++) {
                    printf(" %c ", mak1[i][j]);
                }
            }
            won = 4;
        }
        else {
            printf("Thanks for playing Score 4 game for 2!!!!\n");
        }
    }
    //task 4 arxh
    while (won == 4) {
        // allagh seiras kathe fora pou paizei enas paikths
        if (turn == 0) {

            epaikse = 0;
            //elenxws egkirwthtas kathe kinish paikth
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ", player1, s1);
                scanf(" %d", &move);
                if (move < 0 || move > 6) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
                else {
                    for (i = 7; i >= 0; i--) {
                        if (mak1[i][move] == 'x' || mak1[i][move] == 'o') {
                            count = count + 1;
                        }
                        else {
                            if (epaikse == 0) {
                                mak1[i][move] = s1;
                                epaikse = 1;
                            }
                        }
                    }
                    if (count > 7) {
                        printf("Collumn is full\n");
                        valid_move1 = 0;
                    }
                    count = 0;

                }
            } while (valid_move1 == 0);

            // ektipwsh pinaka paixnidioy
            printf("   0  1  2  3  4  5  6  7");
            for (i = 0; i <= 7; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 7; j++) {
                    printf(" %c ", mak1[i][j]);
                }
            }
            //elenxos nikhs prwtou paikth
            // elnxos gia orizontia
            for (i = 0; i < 8; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s1 && mak1[i][j + 1] == s1 &&
                        mak1[i][j + 2] == s1 && mak1[i][j + 3] == s1) {
                        won = 1;
                    }
                }
            }
            // elenxos gia katheta
            for (i = 0; i <= 4; i++) {
                for (j = 0; j < 8; j++) {
                    if (mak1[i][j] == s1 && mak1[i + 1][j] == s1 &&
                        mak1[i + 2][j] == s1 && mak1[i + 3][j] == s1) {
                        won = 1;
                    }
                }
            }

            //diagwnios panwAristera-katwDeksia
            for (i = 0; i <= 4; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s1 && mak1[i + 1][j + 1] == s1 &&
                        mak1[i + 2][j + 2] == s1 && mak1[i + 3][j + 3] == s1) {
                        won = 1;
                    }
                }
            }
            //diagwnios katwDeksia-PanwAristera
            for (i = 3; i < 8; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s1 && mak1[i - 1][j + 1] == s1 &&
                        mak1[i - 2][j + 2] == s1 && mak1[i - 3][j + 3] == s1) {
                        won = 1;
                    }
                }
            }

            turn = 1;

        }
        else {
            // elenxws egkirwthas paixth 2
            epaikse = 0;
            //elenxws egkirwthtas kathe kinish paikth
            do {
                valid_move1 = 1;
                printf("\n%s's (%c) turn: ", player2, s2);
                scanf(" %d", &move);
                if (move < 0 || move > 7) {
                    printf("Out of bounds\n");
                    valid_move1 = 0;
                }
                else {
                    for (i = 7; i >= 0; i--) {
                        if (mak[i][move] == 'x' || mak[i][move] == 'o') {
                            count = count + 1;
                        }
                        else {
                            if (epaikse == 0) {
                                mak1[i][move] = s2;
                                epaikse = 1;
                            }
                        }

                    }
                    if (count > 7) {
                        printf("Collumn is full\n");
                        valid_move1 = 0;
                    }

                    count = 0;

                }
            } while (valid_move1 == 0);
            // ektipwsh pinaka paixnidiou
            printf("   0  1  2  3  4  5  6  7");
            for (i = 0; i <= 7; i++) {
                printf("\n %d", i);
                for (j = 0; j <= 7; j++) {
                    printf(" %c ", mak1[i][j]);
                }
            }
            //elenxos nikhs defterou paikth
            // elnxos gia orizontia
            for (i = 0; i < 8; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s2 && mak1[i][j + 1] == s2 &&
                        mak1[i][j + 2] == s2 && mak1[i][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            // elenxos gia katheta
            for (i = 0; i <= 4; i++) {
                for (j = 0; j < 8; j++) {
                    if (mak1[i][j] == s2 && mak1[i + 1][j] == s2 &&
                        mak1[i + 2][j] == s2 && mak1[i + 3][j] == s2) {
                        won = 2;
                    }
                }
            }

            //diagwnios panwAristera-katwDeksia
            for (i = 0; i <= 4; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s2 && mak1[i + 1][j + 1] == s2 &&
                        mak1[i + 2][j + 2] == s2 && mak1[i + 3][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            //diagwnios katwDeksia-PanwAristera
            for (i = 3; i < 8; i++) {
                for (j = 0; j <= 4; j++) {
                    if (mak1[i][j] == s2 && mak1[i - 1][j + 1] == s2 &&
                        mak1[i - 2][j + 2] == s2 && mak1[i - 3][j + 3] == s2) {
                        won = 2;
                    }
                }
            }
            turn = 0;
        }
        //elenxos gia isopalia
        gematos = 0;
        for (i = 0; i <= 7; i++) {
            for (j = 0; j <= 7; j++) {
                if (mak1[0][i] != '-') {
                    gematos = gematos + 1;

                }
            }
        }
        if (gematos == 64) {
            won = 5;
        }


    }

    if (won == 1) {
        printf("\nCongratulations %s is the winner!!!\n", player1);
        printf("Thanks for playing Score 4 game for 2!!!!\n");
    }
    else if (won == 2) {
        printf("\nCongratulations %s is the winner!!!\n", player2);
        printf("Thanks for playing Score 4 game for 2!!!!\n");
    }
    else {
        printf("\nCongratulations for players %s, %s for draw!!!", player1, player2);
        printf("Thanks for playing Score 4 game for 2!!!!\n");
    }
    //task 4 telos



}

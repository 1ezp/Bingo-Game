#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

int main()
{



    
    

    char s1[] = { 'o','o','o','o','o','o','o','o','o','o','o','o' };
    char s2[] = { 'o','o','o','o','o','o','o','o','o','o','o','o' };
    char s3[] = { 'o','o','o','o','o','o','o','o','o','o','o','o' };
    string o;

    string PlayerList1[25] = { "1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25" };
    
    
    random_shuffle(PlayerList1, PlayerList1 + 25);
    int PlayerSecore1 = 0;

    string PleyerName1;
    cout << "Player 1 Name: ";
    cin >> PleyerName1;
    
   
 
    string PlayerList2[25] = { "1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25" };
    random_shuffle(PlayerList2, PlayerList2 + 25);
    
    int PlayerSecore2 = 0;
    string PleyerName2;
    cout << "Player 2 Name: ";
    cin >> PleyerName2;


    string PlayerList3[25] = { "1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25" };
    random_shuffle(PlayerList3, PlayerList3 + 25);
    
    int PlayerSecore3 = 0;
    string PleyerName3;
    cout << "Player 3 Name: ";
    cin >> PleyerName3;
    
    
    
    


    
    

    for (;;) {




        system("cls");

        cout <<
            PleyerName1 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList1[0] << " | " << PlayerList1[1] << " | " << PlayerList1[2] << " | " << PlayerList1[3] << " | " << PlayerList1[4] << " |" << endl <<
            "| " << PlayerList1[5] << " | " << PlayerList1[6] << " | " << PlayerList1[7] << " | " << PlayerList1[8] << " | " << PlayerList1[9] << " |" << endl <<
            "| " << PlayerList1[10] << " | " << PlayerList1[11] << " | " << PlayerList1[12] << " | " << PlayerList1[13] << " | " << PlayerList1[14] << " | " << "Score: " << PlayerSecore1 << endl <<
            "| " << PlayerList1[15] << " | " << PlayerList1[16] << " | " << PlayerList1[17] << " | " << PlayerList1[18] << " | " << PlayerList1[19] << " |" << endl <<
            "| " << PlayerList1[20] << " | " << PlayerList1[21] << " | " << PlayerList1[22] << " | " << PlayerList1[23] << " | " << PlayerList1[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName2 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList2[0] << " | " << PlayerList2[1] << " | " << PlayerList2[2] << " | " << PlayerList2[3] << " | " << PlayerList2[4] << " |" << endl <<
            "| " << PlayerList2[5] << " | " << PlayerList2[6] << " | " << PlayerList2[7] << " | " << PlayerList2[8] << " | " << PlayerList2[9] << " |" << endl <<
            "| " << PlayerList2[10] << " | " << PlayerList2[11] << " | " << PlayerList2[12] << " | " << PlayerList2[13] << " | " << PlayerList2[14] << " | " << "Score: " << PlayerSecore2 << endl <<
            "| " << PlayerList2[15] << " | " << PlayerList2[16] << " | " << PlayerList2[17] << " | " << PlayerList2[18] << " | " << PlayerList2[19] << " |" << endl <<
            "| " << PlayerList2[20] << " | " << PlayerList2[21] << " | " << PlayerList2[22] << " | " << PlayerList2[23] << " | " << PlayerList2[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName3 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList3[0] << " | " << PlayerList3[1] << " | " << PlayerList3[2] << " | " << PlayerList3[3] << " | " << PlayerList3[4] << " |" << endl <<
            "| " << PlayerList3[5] << " | " << PlayerList3[6] << " | " << PlayerList3[7] << " | " << PlayerList3[8] << " | " << PlayerList3[9] << " |" << endl <<
            "| " << PlayerList3[10] << " | " << PlayerList3[11] << " | " << PlayerList3[12] << " | " << PlayerList3[13] << " | " << PlayerList3[14] << " | " << "Score: " << PlayerSecore3 << endl <<
            "| " << PlayerList3[15] << " | " << PlayerList3[16] << " | " << PlayerList3[17] << " | " << PlayerList3[18] << " | " << PlayerList3[19] << " |" << endl <<
            "| " << PlayerList3[20] << " | " << PlayerList3[21] << " | " << PlayerList3[22] << " | " << PlayerList3[23] << " | " << PlayerList3[24] << " |" << endl <<
            " ------------------------" << endl << endl;

       

        cout << PleyerName1 << ": ";
        cin >> o; // 15

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
            else if (o + " " == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
            else if (o + " " == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) {

            if (o == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
            else if (o + " " == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
        }




        if (PlayerList1[0] == "X " && PlayerList1[1] == "X " && PlayerList1[2] == "X " && PlayerList1[3] == "X " && PlayerList1[4] == "X ") {
            if (s1[0] == 'o') {
                s1[0] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[5] == "X " && PlayerList1[6] == "X " && PlayerList1[7] == "X " && PlayerList1[8] == "X " && PlayerList1[9] == "X ") {
            if (s1[1] == 'o') {
                s1[1] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[10] == "X " && PlayerList1[11] == "X " && PlayerList1[12] == "X " && PlayerList1[13] == "X " && PlayerList1[14] == "X ") {
            if (s1[2] == 'o') {
                s1[2] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[15] == "X " && PlayerList1[16] == "X " && PlayerList1[17] == "X " && PlayerList1[18] == "X " && PlayerList1[19] == "X ") {
            if (s1[3] == 'o') {
                s1[3] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[20] == "X " && PlayerList1[21] == "X " && PlayerList1[22] == "X " && PlayerList1[23] == "X " && PlayerList1[24] == "X ") {
            if (s1[4] == 'o') {
                s1[4] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[0] == "X " && PlayerList1[5] == "X " && PlayerList1[10] == "X " && PlayerList1[15] == "X " && PlayerList1[20] == "X ") {
            if (s1[5] == 'o') {
                s1[5] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[1] == "X " && PlayerList1[6] == "X " && PlayerList1[11] == "X " && PlayerList1[16] == "X " && PlayerList1[21] == "X ") {
            if (s1[6] == 'o') {
                s1[6] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[2] == "X " && PlayerList1[7] == "X " && PlayerList1[12] == "X " && PlayerList1[17] == "X " && PlayerList1[22] == "X ") {
            if (s1[7] == 'o') {
                s1[7] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[3] == "X " && PlayerList1[8] == "X " && PlayerList1[13] == "X " && PlayerList1[18] == "X " && PlayerList1[23] == "X ") {
            if (s1[8] == 'o') {
                s1[8] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[4] == "X " && PlayerList1[9] == "X " && PlayerList1[14] == "X " && PlayerList1[19] == "X " && PlayerList1[24] == "X ") {
            if (s1[9] == 'o') {
                s1[9] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[0] == "X " && PlayerList1[6] == "X " && PlayerList1[12] == "X " && PlayerList1[18] == "X " && PlayerList1[24] == "X ") {
            if (s1[10] == 'o') {
                s1[10] = 'x';
                PlayerSecore1++;
            }
        }
        if (PlayerList1[4] == "X " && PlayerList1[8] == "X " && PlayerList1[12] == "X " && PlayerList1[16] == "X " && PlayerList1[20] == "X ") {
            if (s1[11] == 'o') {
                s1[11] = 'x';
                PlayerSecore1++;
            }
        }

        if (PlayerSecore1 == 5) {
            system("cls");
            cout << PleyerName1 << "is winner !!";
            break;
        }

        system("cls");
        
        cout <<
            PleyerName1 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList1[0] << " | " << PlayerList1[1] << " | " << PlayerList1[2] << " | " << PlayerList1[3] << " | " << PlayerList1[4] << " |" << endl <<
            "| " << PlayerList1[5] << " | " << PlayerList1[6] << " | " << PlayerList1[7] << " | " << PlayerList1[8] << " | " << PlayerList1[9] << " |" << endl <<
            "| " << PlayerList1[10] << " | " << PlayerList1[11] << " | " << PlayerList1[12] << " | " << PlayerList1[13] << " | " << PlayerList1[14] << " | " << "Score: " << PlayerSecore1 << endl <<
            "| " << PlayerList1[15] << " | " << PlayerList1[16] << " | " << PlayerList1[17] << " | " << PlayerList1[18] << " | " << PlayerList1[19] << " |" << endl <<
            "| " << PlayerList1[20] << " | " << PlayerList1[21] << " | " << PlayerList1[22] << " | " << PlayerList1[23] << " | " << PlayerList1[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName2 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList2[0] << " | " << PlayerList2[1] << " | " << PlayerList2[2] << " | " << PlayerList2[3] << " | " << PlayerList2[4] << " |" << endl <<
            "| " << PlayerList2[5] << " | " << PlayerList2[6] << " | " << PlayerList2[7] << " | " << PlayerList2[8] << " | " << PlayerList2[9] << " |" << endl <<
            "| " << PlayerList2[10] << " | " << PlayerList2[11] << " | " << PlayerList2[12] << " | " << PlayerList2[13] << " | " << PlayerList2[14] << " | " << "Score: " << PlayerSecore2 << endl <<
            "| " << PlayerList2[15] << " | " << PlayerList2[16] << " | " << PlayerList2[17] << " | " << PlayerList2[18] << " | " << PlayerList2[19] << " |" << endl <<
            "| " << PlayerList2[20] << " | " << PlayerList2[21] << " | " << PlayerList2[22] << " | " << PlayerList2[23] << " | " << PlayerList2[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName3 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList3[0] << " | " << PlayerList3[1] << " | " << PlayerList3[2] << " | " << PlayerList3[3] << " | " << PlayerList3[4] << " |" << endl <<
            "| " << PlayerList3[5] << " | " << PlayerList3[6] << " | " << PlayerList3[7] << " | " << PlayerList3[8] << " | " << PlayerList3[9] << " |" << endl <<
            "| " << PlayerList3[10] << " | " << PlayerList3[11] << " | " << PlayerList3[12] << " | " << PlayerList3[13] << " | " << PlayerList3[14] << " | " << "Score: " << PlayerSecore3 << endl <<
            "| " << PlayerList3[15] << " | " << PlayerList3[16] << " | " << PlayerList3[17] << " | " << PlayerList3[18] << " | " << PlayerList3[19] << " |" << endl <<
            "| " << PlayerList3[20] << " | " << PlayerList3[21] << " | " << PlayerList3[22] << " | " << PlayerList3[23] << " | " << PlayerList3[24] << " |" << endl <<
            " ------------------------" << endl << endl;

        cout << PleyerName2 << ": ";
        cin >> o; // 15

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
            else if (o + " " == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
            else if (o + " " == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
            else if (o + " " == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
        }

        if (PlayerList2[0] == "X " && PlayerList2[1] == "X " && PlayerList2[2] == "X " && PlayerList2[3] == "X " && PlayerList2[4] == "X ") {
            if (s2[0] == 'o') {
                s2[0] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[5] == "X " && PlayerList2[6] == "X " && PlayerList2[7] == "X " && PlayerList2[8] == "X " && PlayerList2[9] == "X ") {
            if (s2[1] == 'o') {
                s2[1] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[10] == "X " && PlayerList2[11] == "X " && PlayerList2[12] == "X " && PlayerList2[13] == "X " && PlayerList2[14] == "X ") {
            if (s2[2] == 'o') {
                s2[2] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[15] == "X " && PlayerList2[16] == "X " && PlayerList2[17] == "X " && PlayerList2[18] == "X " && PlayerList2[19] == "X ") {
            if (s2[3] == 'o') {
                s2[3] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[20] == "X " && PlayerList2[21] == "X " && PlayerList2[22] == "X " && PlayerList2[23] == "X " && PlayerList2[24] == "X ") {
            if (s2[4] == 'o') {
                s2[4] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[0] == "X " && PlayerList2[5] == "X " && PlayerList2[10] == "X " && PlayerList2[15] == "X " && PlayerList2[20] == "X ") {
            if (s2[5] == 'o') {
                s2[5] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[1] == "X " && PlayerList2[6] == "X " && PlayerList2[11] == "X " && PlayerList2[16] == "X " && PlayerList2[21] == "X ") {
            if (s2[6] == 'o') {
                s2[6] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[2] == "X " && PlayerList2[7] == "X " && PlayerList2[12] == "X " && PlayerList2[17] == "X " && PlayerList2[22] == "X ") {
            if (s2[7] == 'o') {
                s2[7] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[3] == "X " && PlayerList2[8] == "X " && PlayerList2[13] == "X " && PlayerList2[18] == "X " && PlayerList2[23] == "X ") {
            if (s2[8] == 'o') {
                s2[8] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[4] == "X " && PlayerList2[9] == "X " && PlayerList2[14] == "X " && PlayerList2[19] == "X " && PlayerList2[24] == "X ") {
            if (s2[9] == 'o') {
                s2[9] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[0] == "X " && PlayerList2[6] == "X " && PlayerList2[12] == "X " && PlayerList2[18] == "X " && PlayerList2[24] == "X ") {
            if (s2[10] == 'o') {
                s2[10] = 'x';
                PlayerSecore2++;
            }
        }
        if (PlayerList2[4] == "X " && PlayerList2[8] == "X " && PlayerList2[12] == "X " && PlayerList2[16] == "X " && PlayerList2[20] == "X ") {
            if (s2[11] == 'o') {
                s2[11] = 'x';
                PlayerSecore2++;
            }
        }

        if (PlayerSecore2 == 5) {
            system("cls");
            cout << PleyerName2 << "is winner !!";
            break;
        }
            

        system("cls");

        cout <<
            PleyerName1 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList1[0] << " | " << PlayerList1[1] << " | " << PlayerList1[2] << " | " << PlayerList1[3] << " | " << PlayerList1[4] << " |" << endl <<
            "| " << PlayerList1[5] << " | " << PlayerList1[6] << " | " << PlayerList1[7] << " | " << PlayerList1[8] << " | " << PlayerList1[9] << " |" << endl <<
            "| " << PlayerList1[10] << " | " << PlayerList1[11] << " | " << PlayerList1[12] << " | " << PlayerList1[13] << " | " << PlayerList1[14] << " | " << "Score: " << PlayerSecore1 << endl <<
            "| " << PlayerList1[15] << " | " << PlayerList1[16] << " | " << PlayerList1[17] << " | " << PlayerList1[18] << " | " << PlayerList1[19] << " |" << endl <<
            "| " << PlayerList1[20] << " | " << PlayerList1[21] << " | " << PlayerList1[22] << " | " << PlayerList1[23] << " | " << PlayerList1[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName2 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList2[0] << " | " << PlayerList2[1] << " | " << PlayerList2[2] << " | " << PlayerList2[3] << " | " << PlayerList2[4] << " |" << endl <<
            "| " << PlayerList2[5] << " | " << PlayerList2[6] << " | " << PlayerList2[7] << " | " << PlayerList2[8] << " | " << PlayerList2[9] << " |" << endl <<
            "| " << PlayerList2[10] << " | " << PlayerList2[11] << " | " << PlayerList2[12] << " | " << PlayerList2[13] << " | " << PlayerList2[14] << " | " << "Score: " << PlayerSecore2 << endl <<
            "| " << PlayerList2[15] << " | " << PlayerList2[16] << " | " << PlayerList2[17] << " | " << PlayerList2[18] << " | " << PlayerList2[19] << " |" << endl <<
            "| " << PlayerList2[20] << " | " << PlayerList2[21] << " | " << PlayerList2[22] << " | " << PlayerList2[23] << " | " << PlayerList2[24] << " |" << endl <<
            " ------------------------" << endl << endl;
        cout <<
            PleyerName3 << ":" << endl <<
            " ------------------------" << endl <<
            "| " << PlayerList3[0] << " | " << PlayerList3[1] << " | " << PlayerList3[2] << " | " << PlayerList3[3] << " | " << PlayerList3[4] << " |" << endl <<
            "| " << PlayerList3[5] << " | " << PlayerList3[6] << " | " << PlayerList3[7] << " | " << PlayerList3[8] << " | " << PlayerList3[9] << " |" << endl <<
            "| " << PlayerList3[10] << " | " << PlayerList3[11] << " | " << PlayerList3[12] << " | " << PlayerList3[13] << " | " << PlayerList3[14] << " | " << "Score: " << PlayerSecore3 << endl <<
            "| " << PlayerList3[15] << " | " << PlayerList3[16] << " | " << PlayerList3[17] << " | " << PlayerList3[18] << " | " << PlayerList3[19] << " |" << endl <<
            "| " << PlayerList3[20] << " | " << PlayerList3[21] << " | " << PlayerList3[22] << " | " << PlayerList3[23] << " | " << PlayerList3[24] << " |" << endl <<
            " ------------------------" << endl << endl;


        cout << PleyerName3 << ": ";
        cin >> o; // 15

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
            else if (o + " " == PlayerList1[i]) {
                PlayerList1[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
            else if (o + " " == PlayerList2[i]) {
                PlayerList2[i] = "X ";
            }
        }

        for (int i = 0; i < 25; i++) { // 0

            if (o == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
            else if (o + " " == PlayerList3[i]) {
                PlayerList3[i] = "X ";
            }
        }

        if (PlayerList3[0] == "X " && PlayerList3[1] == "X " && PlayerList3[2] == "X " && PlayerList3[3] == "X " && PlayerList3[4] == "X ") {
            if (s3[0] == 'o') {
                s3[0] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[5] == "X " && PlayerList3[6] == "X " && PlayerList3[7] == "X " && PlayerList3[8] == "X " && PlayerList3[9] == "X ") {
            if (s3[1] == 'o') {
                s3[1] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[10] == "X " && PlayerList3[11] == "X " && PlayerList3[12] == "X " && PlayerList3[13] == "X " && PlayerList3[14] == "X ") {
            if (s3[2] == 'o') {
                s3[2] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[15] == "X " && PlayerList3[16] == "X " && PlayerList3[17] == "X " && PlayerList3[18] == "X " && PlayerList3[19] == "X ") {
            if (s3[3] == 'o') {
                s3[3] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[20] == "X " && PlayerList3[21] == "X " && PlayerList3[22] == "X " && PlayerList3[23] == "X " && PlayerList3[24] == "X ") {
            if (s3[4] == 'o') {
                s3[4] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[0] == "X " && PlayerList3[5] == "X " && PlayerList3[10] == "X " && PlayerList3[15] == "X " && PlayerList3[20] == "X ") {
            if (s3[5] == 'o') {
                s3[5] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[1] == "X " && PlayerList3[6] == "X " && PlayerList3[11] == "X " && PlayerList3[16] == "X " && PlayerList3[21] == "X ") {
            if (s3[6] == 'o') {
                s3[6] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[2] == "X " && PlayerList3[7] == "X " && PlayerList3[12] == "X " && PlayerList3[17] == "X " && PlayerList3[22] == "X ") {
            if (s3[7] == 'o') {
                s3[7] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[3] == "X " && PlayerList3[8] == "X " && PlayerList3[13] == "X " && PlayerList3[18] == "X " && PlayerList3[23] == "X ") {
            if (s3[8] == 'o') {
                s3[8] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[4] == "X " && PlayerList3[9] == "X " && PlayerList3[14] == "X " && PlayerList3[19] == "X " && PlayerList3[24] == "X ") {
            if (s3[9] == 'o') {
                s3[9] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[0] == "X " && PlayerList3[6] == "X " && PlayerList3[12] == "X " && PlayerList3[18] == "X " && PlayerList3[24] == "X ") {
            if (s3[10] == 'o') {
                s3[10] = 'x';
                PlayerSecore3++;
            }
        }
        if (PlayerList3[4] == "X " && PlayerList3[8] == "X " && PlayerList3[12] == "X " && PlayerList3[16] == "X " && PlayerList3[20] == "X ") {
            if (s3[11] == 'o') {
                s3[11] = 'x';
                PlayerSecore3++;
            }
        }

         if (PlayerSecore3 == 5) {
            system("cls");
            cout << PleyerName3 << " is winner !!";
            break;
        }
        
        
    }

}


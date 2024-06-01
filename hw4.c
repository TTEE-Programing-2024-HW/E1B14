#include<stdio.h>
#include <stdlib.h>

// 步驟1：顯示個人風格的畫面
void step1(){
	printf("E1B14鄭力允                                                    \n");
	printf("             *                                                 \n");
	printf("            * **                                               \n");
	printf("            *   **                                             \n");
	printf("           **    ***                                           \n");
	printf("           *       **                                          \n");
	printf("           *       ***                                         \n");
	printf("           *     ***************                               \n");
	printf("           *   **         * *******                            \n");
	printf("           *****                  *****                        \n");
	printf("           ***                        ******                   \n");
	printf("           **                               ***                \n");
	printf("          **     ******                       *****            \n");
	printf("         **     *  *  **                       **  *****       \n");
	printf("        **      * ******             ****       **      ****   \n");
	printf("       **       *  *****           *********     **      ***** \n");
	printf("      **         *****  *******   ****  ** **     **   **      \n");
	printf("     **                ********    ******  ***     *****       \n");
	printf("    **                   *******    ****  **         **        \n");
	printf("    *                     ******      *****          ***       \n");
	printf("    *                    ***                          **       \n");
	printf("    ***               **** **                         **       \n");
	printf("     **            ***      ***                       *        \n");
	printf("      **                      *                       *        \n");
	printf("       **                                            **        \n");
	printf("        *                                      --   **         \n");
	printf("        *                                  ---   **            \n");
	printf("       **                            ------      **            \n");
	printf("      ***                    --------             *            \n");
	printf("     ****                                         *            \n");
	printf("    ****                                          **           \n");
	printf("   ****                                             ********   \n");
	printf(" **** **                                                  ***  \n");
	system("PAUSE");
	system("cls");
}


// 輸入並檢查密碼是否正確
int check(){
    int pass;
    int time=0; // 計算輸入密碼的次數
    do{
        printf("請輸入4個數字的密碼：");
        fflush(stdin);
        scanf("%d",&pass);
        // 檢查密碼是否正確
        if(pass==2024) {
            printf("密碼正確！歡迎使用本程式。\n");
            return 1;
        }
		else {
            time++;
            printf("警告：密碼錯誤%d次\n",time);
            if(time==3) {
                printf("輸入錯誤超過三次，程式即將結束。\n");
                return 0;
            }
        }
    }while(time<3);
    return 0;
}

// 步驟2：螢幕主選單
void step2(){
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*         Welcome to the Main         *\n");
    printf("*                Menu                 *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*       a. Enter student grades       *\n");
    printf("*       b. Display student grades     *\n");
    printf("*       c. Search for student grades  *\n");
    printf("*       d. Grade ranking              *\n");
    printf("*       e. Exit system                *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

//a.輸入學生成績

//b.顯示所有學生成績

//c.搜尋特定學生的成績

//d.按照平均成績進行排名

//e.確認是否離開系統

//主函數
 
int main(){
    step1();
    if (!check()){
        return 0;
    }

    char cho;
    while(1){
        step2();
        printf("請選擇一個選項：");
        fflush(stdin);
        scanf("%c",&cho);

        switch(cho){
            case 'a':
                system("cls");
                //輸入學生成績
                break;
            case 'b':
                system("cls");
                //顯示所有學生成績
                break;
            case 'c':
                system("cls");
                //搜尋特定學生的成績
                break;
            case 'd':
                system("cls");
                //按照平均成績進行排名
                break;
            case 'e':
            	system("cls");
                //確認是否離開系統
                break;
            default:
                printf("請重新選擇。\n");
                system("PAUSE");
                system("cls");
                break;
        }
    }

    return 0;
}

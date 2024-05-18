#include<stdio.h>
#include <stdlib.h>

// 步驟1：顯示個人風格的畫面，輸入密碼
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

int code(){
    int pass;
    printf("請輸入4個數字的密碼：");
    scanf("%d", &pass);
    // 檢查密碼是否正確
    if(pass==2024){
        printf("密碼正確！歡迎使用本程式。\n");
        return 1;
    } else {
        printf("警告：密碼錯誤，程式即將結束。\n");
        printf("%c", '\a');
        return 0;
    }
}

// 步驟2：螢幕主選單
void step2(){
	system("cls");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*         Welcome to the Main         *\n");
    printf("*                Menu                 *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*          a. Available seats         *\n");
    printf("*          b. Arrange for you         *\n");
    printf("*          c. Choose by yourself      *\n");
    printf("*          d. Exit                    *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

// 步驟3：
void step3(char seat[9][9]) {
    printf("座位表：\n");
    int i;
    for(i=0;i<9;i++){
    	int j;
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]);
        }
        printf("\n");
    }
    printf("按任意鍵繼續...");
    system("pause"); // 等待用戶按下任意鍵
}



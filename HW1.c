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
// 步驟2：輸入密碼
int step2(){
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

// 步驟3：螢幕主選單
void step3(){
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*         Welcome to the Main         *\n");
    printf("*                Menu                 *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*  ‘A’...‘Z’: 大寫                *\n");
    printf("*  ‘a’...‘z’: 小寫                *\n");
    printf("*  ‘0’...‘9’: 數字                *\n");
    printf("*  Otherwise    :E1B14鄭力允          *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

// 步驟4：輸入字元

void step4(){
	char input;
	fflush(stdin);// 清理緩存 
    printf("請輸入1個字元：");
    scanf("%c", &input);

    // 判斷輸入字元的類型並輸出對應的訊息
    if (input >= 'A' && input <= 'Z') {
        printf("大寫\n");
    } else if (input >= 'a' && input <= 'z') {
        printf("小寫\n");
    } else if (input >= '0' && input <= '9') {
        printf("數字\n");
    } else {
        printf("E1B14鄭力允\n");
    }

    // 等待使用者按下任意按鍵
    printf("按任意鍵結束程式...\n");
	system("PAUSE");
} 



int main(void){
	step1();
	if(!step2()){
		return 0;
	}
	step3();
	step4();
    return 0;
}

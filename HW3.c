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

int check(){
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


// 隨機產生已被預訂的座位
void rand_seat(char seat[9][9]) {
    int co=0;
    srand(123); // 如果未用此行rand的值會在開始時就決定為定值 

    // 隨機產生十個已被預訂的座位
    while(co<10){
        int x=rand()%9; // 生成隨機行號
        int y=rand()%9; // 生成隨機列號
        if (seat[x][y]!='*'){
            seat[x][y]='*'; // 標記座位為已預訂
            co++;
        }
    }
}

int main() {
    char seat[9][9]; // 宣告座位表
    char choice; // 用於存儲用戶的選擇

     // 顯示個人風格的畫面
    step1();

    // 輸入密碼並檢查是否正確
    if(!check()) {
        return 0;
    }
        // 顯示主選單（步驟2）
        step2();

        // 詢問用戶的選擇
        printf("請選擇：");
        scanf("%c",&choice);

        // 根據用戶的選擇執行相應的操作
        switch (choice) {
            case 'a':
                // 顯示可用座位（步驟3）
                step3(seat);
                break;
            case 'b':
                // 安排座位
                
                break;
            case 'c':
                // 手動選擇座位
                
                break;
            case 'd':
                // 退出程式
                return 0;
            default:
                printf("錯誤選項。\n");
                break;
        }
		return 0;
    }

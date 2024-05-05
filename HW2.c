#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

// 步驟1：顯示個人風格的畫面
void step1() {
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
int check() {
    int pass;
    int time = 0; // 計算輸入密碼的次數

    do {
        printf("請輸入4個數字的密碼：");
        fflush(stdin);
        scanf("%d", &pass);
        // 檢查密碼是否正確
        if(pass == 2024) {
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
    }while(time < 3);

    return 0;
}


// 步驟2：螢幕主選單
void step2(){
	system("cls");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*         Welcome to the Main         *\n");
    printf("*                Menu                 *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*          a. 畫出直角三角形          *\n");
    printf("*          b. 顯示乘法表              *\n");
    printf("*          c. 結束                    *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}



// 步驟3：顯示直角三角形
void step3() {
    char ip;
    printf("請輸入一個字元（a到n之間）：");
    fflush(stdin);
    scanf("%c",&ip);
    
    if (ip<'a'||ip>'n') {
        printf("錯誤的輸入！請重新輸入。\n");
    }
    system("cls"); // 清除螢幕

    int ro=ip-'a'+1; // 計算打印的行數
    
    int i=1;
    for (i;i<=ro;i++) {
        char ch=ip-i+1;
		int j=1;
		// 打印空格
        for (j;j<=ro-i;j++){
            printf("  ");
        }
		// 打印字母
        for (ch;ch<=ip;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }

    printf("按任意鍵繼續...");
    getch(); // 等待用戶輸入任意鍵

}

/*
  c
 bc
abc
*/

// 步驟4：顯示乘法表
void step4(){
    int n;
	
    // 請求使用者輸入一個 1 到 9 的整數
    do {
        printf("請輸入一個1到9的整數：");
        fflush(stdin);
        scanf("%d", &n);
        if (n<1||n>9){
            printf("輸入錯誤！請重新輸入。\n");
        }
    }while(n<1||n>9);
    system("cls"); // 清除螢幕
    // 顯示乘法表
    printf("乘法表 %d*%d：\n",n,n);
    int i=1,j=1;
    for(i;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d * %d =%d\t",i,j,i*j);
        }
        printf("\n");
    }

    printf("按任意鍵繼續...");
    getch(); // 等待用戶輸入任意鍵
    
    
}







// 步驟5：詢問是否重新輸入
void step5(){
    char cr;
    do{
        printf("Continue? (y/n): ");
        scanf(" %c", &cr);
         if (cr=='y'||cr=='Y'){
            return;// 回到步驟2
        }        
		else if(cr=='n'||cr=='N'){
            printf("程式結束。\n");
            exit(0);
        }
		else{
            printf("錯誤的輸入！請重新輸入。\n");
        }
    }while(1);
}













/*---------------------------------------------------------------我是分界線--------------------------------------------------------------------------*/


int main() {
    // 顯示個人風格的畫面
    step1();

    // 輸入密碼並檢查是否正確
    if(!check()) {
        return 0;
    }
    
    
/*---------------------------------------------------------------我是分界線--------------------------------------------------------------------------*/
    
    
    do {
        // 步驟2：清除螢幕，顯示主選單
        step2();
        // 步驟3：讀取使用者選擇
        char cha;
        printf("請輸入選項：");
        scanf("%c",&cha);
		 //根據使用者選擇執行相應的操作
        switch (cha) {
            case 'a':
            case 'A':
                // 步驟3：顯示直角三角形
                step3();
                break;
            case 'b':
            case 'B':
                // 步驟4：顯示乘法表
                step4();
                break;
            case 'c':
            case 'C':
                // 步驟5：詢問是否重新輸入
                step5();
                break;
            default:
                break;
        }
        
    } while (1);
    
    
    
    
    
    
    
    
    
    
    
    
    
}

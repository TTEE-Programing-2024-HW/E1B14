#include<stdio.h>
#include<stdlib.h>

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
    printf("*          a. Available seats         *\n");
    printf("*          b. Arrange for you         *\n");
    printf("*          c. Choose by yourself      *\n");
    printf("*          d. Exit                    *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

// 步驟3：顯示座位表
void stepA(char seat[9][9]){
    printf("座位表：\n");
    printf("\\123456789\n");
    int i,j;
    for(i=8;i>=0;i--){
        printf("%d",i+1);
        for(j=0;j<9;j++){
            if(seat[i][j]=='*'){
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    system("pause"); //等待用戶按下任意鍵
}

//隨機產生已被預訂的座位
void rand_seat(char seat[9][9]){
    int co=0;
    //使用 rand 函數的返回值作為種子
    srand(123);
    //隨機產生十個已被預訂的座位
    while(co<10){
        int x=rand()%9;//生成隨機行號
        int y=rand()%9;//生成隨機列號
        if (seat[x][y]!='*'){
            seat[x][y]='*';//標記座位為已預訂
            co++;
        }
    }
}


// 安排座位
void stepB(char seat[9][9],int num_seats){
    int i,j;

    // 如果需要的座位數大於4，或小於1，則提示錯誤並返回
    if (num_seats>4||num_seats<1){
        printf("請輸入正確的座位數量(1~4)。\n");
        return;
    }

    // 一般情況下，隨機選擇連續座位
    if(num_seats <= 3){
        while(1){
            int row=rand()%9;
            int col=rand()%(9-num_seats+1);

            // 檢查連續的座位是否可用
            int usable=1;
            for(i=col;i<col+num_seats;i++){
                if(seat[row][i]=='*'){
                    usable=0;
                    break;
                }
            }

            // 如果座位可用，則安排座位並標記為建議座位@
            if(usable){
                for(i=col;i<col+num_seats;i++){
                    seat[row][i]='@';
                }
                break;
            }
        }
    }else{// 如果需要的座位數為4
        // 在同一行上找到4個連續的座位
        while(1){
            int row=rand()%9;
            int col=rand()%(9-num_seats+1);

            // 檢查連續的座位是否可用
            int usable=1;
            for(i=col;i<col+num_seats;i++){
                if(seat[row][i]=='*'){
                    usable=0;
                    break;
                }
            }

            // 如果座位可用，則安排座位並標記為建議座位@
            if(usable){
                for(i=col;i<col+num_seats;i++){
                    seat[row][i]='@';
                }
                break;
            }
        }
    }
}










int main(){
    char seat[9][9]; // 宣告座位表
    char choice; // 用於存儲用戶的選擇
    
    // 顯示個人風格的畫面
    step1();

    // 輸入密碼並檢查是否正確
    if (!check()) {
        return 0;
    }

    // 顯示主選單（步驟2）
    step2();

    // 隨機產生已被預訂的座位
    rand_seat(seat);
    
    // 詢問用戶的選擇
    printf("請選擇：");
    fflush(stdin);
    scanf("%c", &choice);

    // 根據用戶的選擇執行相應的操作
    switch (choice) {
        case 'a':
            // 顯示可用座位（步驟3）
            stepA(seat);
            break;
        case 'b':
            // 安排座位
            printf("請問您需要幾個座位？(1~4)：");
            int num_seats;
            scanf("%d", &num_seats);
            if(num_seats>=1&&num_seats<=4){
                stepA(seat);
                stepB(seat,num_seats);
                stepA(seat); // 顯示安排座位後的座位表
            }else{
                printf("請輸入正確的座位數量(1~4)。\n");
            }
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

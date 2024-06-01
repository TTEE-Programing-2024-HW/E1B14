#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 定義學生結構陣列 
struct student{
    char name[50];
    int num;
    int mat;
    int phy;
    int eng;
    float avg;
};

struct student students[10]; //最多10名學生
int stcount=0; 

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
    int time=0;// 計算輸入密碼的次數
    do{
        printf("請輸入4個數字的密碼：");
        fflush(stdin);
        scanf("%d",&pass);
        // 檢查密碼是否正確
        if(pass==2024){
            printf("密碼正確！歡迎使用本程式。\n");
            return 1;
        }
		else{
            time++;
            printf("警告：密碼錯誤%d次\n",time);
            if(time==3){
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
void a() {
    int n;
    printf("請輸入學生數量(5-10)：");
    fflush(stdin);
    scanf("%d",&n);
    while(n<5||n>10){
        printf("數量必須在5到10之間，請重新輸入：");
        fflush(stdin);
        scanf("%d",&n);
    }
	int i;
    for(i=0;i<n;i++){
        printf("輸入第%d個學生的姓名：",i+1);
        scanf("%s",students[i].name);
        printf("輸入學號：");
        scanf("%d",&students[i].num);
        if(students[i].num<99999||students[i].num>1000000){
        	printf("輸入錯誤，請重新輸入。\n");
        	i--; 
        	continue;
		}
        printf("輸入數學成績：");
        scanf("%d",&students[i].mat);
        if(students[i].mat<0||students[i].mat>100){
        	printf("輸入錯誤，請重新輸入。\n");
        	i--; 
        	continue;
		}
        printf("輸入物理成績：");
        scanf("%d",&students[i].phy);
        if(students[i].phy<0||students[i].phy>100){
        	printf("輸入錯誤，請重新輸入。\n");
        	i--;
        	continue;
		}
        printf("輸入英文成績：");
        scanf("%d",&students[i].eng);
        if(students[i].eng<0||students[i].eng>100){
        	printf("輸入錯誤，請重新輸入。\n");
        	i--;
        	continue;
		}
        students[i].avg=(students[i].mat+students[i].phy+students[i].eng)/3.0;
    }
    stcount=n;
    printf("成績輸入完成，返回主選單。\n");
    system("PAUSE");
    system("cls");
}


//b.顯示所有學生成績

void b(){
    printf("學生成績如下：\n");
    int i;
    for(i=0;i<stcount;i++){
        printf("姓名:%s, 學號:%d, 數學:%d, 物理:%d, 英文:%d, 平均成績:%.1f\n",students[i].name,students[i].num,students[i].mat,students[i].phy,students[i].eng,students[i].avg);
	}
    printf("按任意鍵返回主選單。\n");
    system("PAUSE");
    system("cls");
}

//c.搜尋特定學生的成績
void c(){
    char search[50];
    printf("請輸入要搜尋的學生姓名：");
    scanf("%s",search);
    int i;
    for(i=0;i<stcount;i++){
        if(strcmp(students[i].name,search)==0){//strcmp(a,b)比較兩個字串是否相等(用ASCII依序比較大小)，相等就回傳0
        	printf("姓名:%s, 學號:%d, 數學:%d, 物理:%d, 英文:%d, 平均成績:%.1f\n",students[i].name,students[i].num,students[i].mat,students[i].phy,students[i].eng,students[i].avg);
            printf("按任意鍵返回主選單。\n");
            system("PAUSE");
            system("cls");
            return;
        }
    }
    printf("找不到學生資料。\n");
    printf("按任意鍵返回主選單。\n");
    system("PAUSE");
    system("cls");
}

//d.按照平均成績進行排名


// 成績排名
void d(){
    // 排序
    int i,j;
    for(i=0;i<stcount-1;i++){
        for(j=i+1;j<stcount;j++){
            if(students[i].avg<students[j].avg){//交換i跟j 
                struct student temp=students[i];//設暫存 
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    printf("成績排名如下：\n");
    for(i=0;i<stcount;i++){
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n",students[i].name,students[i].num,students[i].avg);
    }
    printf("按任意鍵返回主選單。\n");
    system("PAUSE");
    system("cls");
}












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
                a();
                break;
            case 'b':
                system("cls");
                //顯示所有學生成績
                b();
                break;
            case 'c':
                system("cls");
                //搜尋特定學生的成績
                c();
                break;
            case 'd':
                system("cls");
                //按照平均成績進行排名
                d();
                break;
            case 'e':
            	system("cls");
                //確認是否離開系統
                //還沒好
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

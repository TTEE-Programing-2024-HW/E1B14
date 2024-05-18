#include<stdio.h>
#include <stdlib.h>

// �B�J1�G��ܭӤH���檺�e��
void step1() {
    printf("E1B14�G�O��                                                    \n");
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

// ��J���ˬd�K�X�O�_���T
int check() {
    int pass;
    int time = 0; // �p���J�K�X������

    do {
        printf("�п�J4�ӼƦr���K�X�G");
        fflush(stdin);
        scanf("%d", &pass);
        // �ˬd�K�X�O�_���T
        if(pass == 2024) {
            printf("�K�X���T�I�w��ϥΥ��{���C\n");
            return 1;
        }
		else {
            time++;
            printf("ĵ�i�G�K�X���~%d��\n",time);
            if(time==3) {
                printf("��J���~�W�L�T���A�{���Y�N�����C\n");
                return 0;
            }
        }
    }while(time < 3);

    return 0;
}

// �B�J2�G�ù��D���
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

// �B�J3�G��ܮy���
void step3(char seat[9][9]){
    printf("�y���G\n");
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
    system("pause"); //���ݥΤ���U���N��
}

//�H�����ͤw�Q�w�q���y��
void rand_seat(char seat[9][9]){
    int co=0;
    //�ϥ� rand ��ƪ���^�ȧ@���ؤl
    srand(123);
    //�H�����ͤQ�Ӥw�Q�w�q���y��
    while(co<10){
        int x=rand()%9;//�ͦ��H���渹
        int y=rand()%9;//�ͦ��H���C��
        if (seat[x][y]!='*'){
            seat[x][y]='*';//�аO�y�쬰�w�w�q
            co++;
        }
    }
}


int main(){
    char seat[9][9];//�ŧi�y���
    char choice;//�Ω�s�x�Τ᪺���
    
    // ��ܭӤH���檺�e��
    step1();

    // ��J�K�X���ˬd�O�_���T
    if (!check()) {
        return 0;
    }

    // ��ܥD���]�B�J2�^
    step2();

    //�H�����ͤw�Q�w�q���y��
    rand_seat(seat);
    
    // �߰ݥΤ᪺���
    printf("�п�ܡG");
    fflush(stdin);
    scanf("%c", &choice);

    // �ھڥΤ᪺��ܰ���������ާ@
    switch (choice) {
        case 'a':
            // ��ܥi�ήy��]�B�J3�^
            step3(seat);
            break;
        case 'b':
            // �w�Ʈy��
            
            break;
        case 'c':
            // ��ʿ�ܮy��
            
            break;
        case 'd':
            // �h�X�{��
            return 0;
        default:
            printf("���~�ﶵ�C\n");
            break;
    }

    return 0;
}

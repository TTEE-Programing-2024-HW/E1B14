#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

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
    printf("*          a. �e�X�����T����          *\n");
    printf("*          b. ��ܭ��k��              *\n");
    printf("*          c. ����                    *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}





void step3() {
    char ip;
    printf("�п�J�@�Ӧr���]a��n�����^�G");
    scanf(" %c", &ip);
    
    if (ip<'a'||ip>'n') {
        printf("���~����J�I�Э��s��J�C\n");
        return;
    }
    system("cls"); // �M���ù�

    int ro=ip-'a'+1; // �p��ݭn���L�����
    
    int i=1,j=1;
    for (i;i<=ro;i++) {
        // ���L�Ů�
        for (j;j<=ro-i;j++) {
            printf("  ");
        }
        // ���L�r��
        char ch=ip-i+1;
        for (ch;ch<=ip;ch++) {
            printf("%c ",ch);
        }
        printf("\n");
    }

    printf("�����N���~��...");
    getch(); // ���ݥΤ��J���N��

}
















int main() {
    // ��ܭӤH���檺�e��
    step1();

    // ��J�K�X���ˬd�O�_���T
    if(!check()) {
        return 0;
    }
    
    
/*---------------------------------------------------------------�ڬO���ɽu--------------------------------------------------------------------------*/
    
    
    do {
        // �B�J2�G�M���ù��A��ܥD���
        step2();
        // �B�J3�GŪ���ϥΪ̿��
        char ch;
        printf("�п�J�ﶵ�G");
        scanf(" %c", &ch);
		 // �B�J4�G�ھڨϥΪ̿�ܰ���������ާ@
        switch (ch) {
            case 'a':
            case 'A':
                // �B�J3�G��ܪ����T����
                step3();
                break;
            case 'b':
            case 'B':
                // �B�J4�G��ܭ��k��
                break;
            case 'c':
            case 'C':
                // �B�J5�G�߰ݬO�_���s��J
                break;
            default:
                break;
        }
        
    } while (1);
    
    
    
    
    
    
    
    
    
    
    
    
    
}

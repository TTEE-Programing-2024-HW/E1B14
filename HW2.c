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
    printf("*          a. �e�X�����T����          *\n");
    printf("*          b. ��ܭ��k��              *\n");
    printf("*          c. ����                    *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}



// �B�J3�G��ܪ����T����
void step3() {
    char ip;
    printf("�п�J�@�Ӧr���]a��n�����^�G");
    fflush(stdin);
    scanf("%c",&ip);
    
    if (ip<'a'||ip>'n') {
        printf("���~����J�I�Э��s��J�C\n");
    }
    system("cls"); // �M���ù�

    int ro=ip-'a'+1; // �p�⥴�L�����
    
    int i=1;
    for (i;i<=ro;i++) {
        char ch=ip-i+1;
		int j=1;
		// ���L�Ů�
        for (j;j<=ro-i;j++){
            printf("  ");
        }
		// ���L�r��
        for (ch;ch<=ip;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }

    printf("�����N���~��...");
    getch(); // ���ݥΤ��J���N��

}

/*
  c
 bc
abc
*/

// �B�J4�G��ܭ��k��
void step4(){
    int n;
	
    // �ШD�ϥΪ̿�J�@�� 1 �� 9 �����
    do {
        printf("�п�J�@��1��9����ơG");
        fflush(stdin);
        scanf("%d", &n);
        if (n<1||n>9){
            printf("��J���~�I�Э��s��J�C\n");
        }
    }while(n<1||n>9);
    system("cls"); // �M���ù�
    // ��ܭ��k��
    printf("���k�� %d*%d�G\n",n,n);
    int i=1,j=1;
    for(i;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d * %d =%d\t",i,j,i*j);
        }
        printf("\n");
    }

    printf("�����N���~��...");
    getch(); // ���ݥΤ��J���N��
    
    
}







// �B�J5�G�߰ݬO�_���s��J
void step5(){
    char cr;
    do{
        printf("Continue? (y/n): ");
        scanf(" %c", &cr);
         if (cr=='y'||cr=='Y'){
            return;// �^��B�J2
        }        
		else if(cr=='n'||cr=='N'){
            printf("�{�������C\n");
            exit(0);
        }
		else{
            printf("���~����J�I�Э��s��J�C\n");
        }
    }while(1);
}













/*---------------------------------------------------------------�ڬO���ɽu--------------------------------------------------------------------------*/


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
        char cha;
        printf("�п�J�ﶵ�G");
        scanf("%c",&cha);
		 //�ھڨϥΪ̿�ܰ���������ާ@
        switch (cha) {
            case 'a':
            case 'A':
                // �B�J3�G��ܪ����T����
                step3();
                break;
            case 'b':
            case 'B':
                // �B�J4�G��ܭ��k��
                step4();
                break;
            case 'c':
            case 'C':
                // �B�J5�G�߰ݬO�_���s��J
                step5();
                break;
            default:
                break;
        }
        
    } while (1);
    
    
    
    
    
    
    
    
    
    
    
    
    
}

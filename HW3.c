#include<stdio.h>
#include <stdlib.h>

// �B�J1�G��ܭӤH���檺�e���A��J�K�X
void step1(){
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

int code(){
    int pass;
    printf("�п�J4�ӼƦr���K�X�G");
    scanf("%d", &pass);
    // �ˬd�K�X�O�_���T
    if(pass==2024){
        printf("�K�X���T�I�w��ϥΥ��{���C\n");
        return 1;
    } else {
        printf("ĵ�i�G�K�X���~�A�{���Y�N�����C\n");
        printf("%c", '\a');
        return 0;
    }
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

// �B�J3�G
void step3(char seat[9][9]) {
    printf("�y���G\n");
    int i;
    for(i=0;i<9;i++){
    	int j;
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]);
        }
        printf("\n");
    }
    printf("�����N���~��...");
    system("pause"); // ���ݥΤ���U���N��
}



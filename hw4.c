#include<stdio.h>
#include <stdlib.h>

// �B�J1�G��ܭӤH���檺�e��
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


// ��J���ˬd�K�X�O�_���T
int check(){
    int pass;
    int time=0; // �p���J�K�X������
    do{
        printf("�п�J4�ӼƦr���K�X�G");
        fflush(stdin);
        scanf("%d",&pass);
        // �ˬd�K�X�O�_���T
        if(pass==2024) {
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
    }while(time<3);
    return 0;
}

// �B�J2�G�ù��D���
void step3(){
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



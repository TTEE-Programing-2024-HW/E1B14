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
// �B�J2�G��J�K�X
int step2(){
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

// �B�J3�G�ù��D���
void step3(){
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*         Welcome to the Main         *\n");
    printf("*                Menu                 *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("*  ��A��...��Z��: �j�g                *\n");
    printf("*  ��a��...��z��: �p�g                *\n");
    printf("*  ��0��...��9��: �Ʀr                *\n");
    printf("*  Otherwise    :E1B14�G�O��          *\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
}

// �B�J4�G��J�r��

void step4(){
	char input;
	fflush(stdin);// �M�z�w�s 
    printf("�п�J1�Ӧr���G");
    scanf("%c", &input);

    // �P�_��J�r���������ÿ�X�������T��
    if (input >= 'A' && input <= 'Z') {
        printf("�j�g\n");
    } else if (input >= 'a' && input <= 'z') {
        printf("�p�g\n");
    } else if (input >= '0' && input <= '9') {
        printf("�Ʀr\n");
    } else {
        printf("E1B14�G�O��\n");
    }

    // ���ݨϥΪ̫��U���N����
    printf("�����N�䵲���{��...\n");
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

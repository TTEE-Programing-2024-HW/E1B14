#include<stdio.h>
#include<stdlib.h>
#include <time.h>

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
void stepA(char seat[9][9]){
	printf("�y���G\n");
    printf("\\123456789\n");
    int i,j;
    for(i=8;i>=0;i--){
        printf("%d",i+1);
        for(j=0;j<9;j++){
            if(seat[i][j]=='*'){
                printf("*");
            }else if(seat[i][j]=='@'){
                printf("@");
            }else{
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
    srand((unsigned) time(NULL));
    //�H�����ͤQ�Ӥw�Q�w�q���y��
    while(co<10){
        int x=rand()%9;//�ͦ��H���渹
        int y=rand()%9;//�ͦ��H���C��
        if (seat[x][y]!='*'){
            seat[x][y]='*';//�аO�y�쬰�w�w�q
            co++;
        }
        int i,j;
        for(i=0;i<9;i++){
        	for(j=0;j<9;j++){
        		if(seat[i][j]=='@'){
            	seat[i][j]='*';
            	co++;
				}
        	}
    	}
    }
}



// �w�Ʈy��
void stepB(char seat[9][9],int num_seats){
    int i,j;
    // �p�G�ݭn���y��Ƥj��4�A�Τp��1�A�h���ܿ��~�ê�^
    if (num_seats>4||num_seats<1){
        printf("�п�J���T���y��ƶq(1~4)�C\n");
        return;
    }
    // �@�뱡�p�U�A�H����ܳs��y��
    if(num_seats<=3){
        while(1){
            int row=rand()%9;
            int col=rand()%(10-num_seats);

            // �ˬd�s�򪺮y��O�_�i��
            int usable=1;
            for(i=col;i<col+num_seats;i++){
                if(seat[row][i]=='*'){
                    usable=0;
                    break;
                }
            }

            // �p�G�y��i�ΡA�h�w�Ʈy��üаO����ĳ�y��@
            if(usable){
                for(i=col;i<col+num_seats;i++){
                    seat[row][i]='@';
                }
                break;
            }
        }
    }else{ // �p�G�ݭn���y��Ƭ�4
        int found=0;
        // ���զb�P�@��W���4�ӳs�򪺮y��
        int attempt;
        for(attempt=0;attempt<100;attempt++){ // ������զ��ơA����L���j��
            int row=rand()%9;
            int col=rand()%(9-num_seats+1);
            // �ˬd�s�򪺮y��O�_�i��
            int usable=1;
            for(i=col;i<col+num_seats;i++){
                if(seat[row][i]=='*'){
                    usable=0;
                    break;
                }
            }
            // �p�G�y��i�ΡA�h�w�Ʈy��üаO����ĳ�y��@
            if(usable){
                for(i=col;i<col+num_seats;i++){
                    seat[row][i]='@';
                }
                found=1;
                break;
            }
        }
        // �p�G�����4�ӳs�򪺮y��A�h���զw�Ƭ۾F�����U2�Ӯy��
        if(!found){
            while(1){
                int row=rand()%8; 
                int col=rand()%8;
                // �ˬd�۾F��檺�y��O�_�i��
                int usable=1;
                for(i=0;i<2;i++){
                    for(j=col;j<col+2;j++){
                        if(seat[row+i][j]=='*'){
                            usable=0;
                            break;
                        }
                    }
                    if(!usable)break;
                }
                // �p�G�y��i�ΡA�h�w�Ʈy��üаO����ĳ�y��@
                if(usable){
                    for(i=0;i<2;i++){
                        for(j=col;j<col+2;j++){
                            seat[row+i][j]='@';
                        }
                    }
                    break;
                }
            }
        }
    }
}



// ��ʿ�ܮy��
void stepC(char seat[9][9]) {
    int row,col;
    char input[10];
    int valid=1;

    while(1){
        printf("�п�J�y��]�p1-2�N��[�C1,��2]�^�G");
        fflush(stdin);
        scanf("%s",input);

        if (sscanf(input,"%d-%d",&row,&col)!=2||row<1||row>9||col<1||col>9||seat[row-1][col-1]=='*'||seat[row-1][col-1]=='@') {
            printf("�榡���~�ήy��w�Q���ΡA�Э��s��J�C\n");
            continue;
        }

        seat[row-1][col-1]='@';

        // �A���T�{
        printf("�O�_�~���ܮy��H�]y/n�^�G");
        fflush(stdin);
        char cont;
        scanf("%c",&cont);
        if(cont=='n'||cont=='N')break;
    }

    // ��ܱƦ쵲�G
    stepA(seat);
    // �T�{��N@�ܬ�*
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(seat[i][j]=='@'){
                seat[i][j]='*';
            }
        }
    }
    // �^��D���
    system("cls");
    step2();
}













int main() {
    char seat[9][9]; // �ŧi�y���
    char choice; // �Ω�s�x�Τ᪺���

    // ��ܭӤH���檺�e��
    step1();

    // ��J�K�X���ˬd�O�_���T
    if (!check()) {
        return 0;
    }
    // �H�����ͤw�Q�w�q���y��
        rand_seat(seat);
    do {
        // ��ܥD���]�B�J2�^
        step2();

        // �߰ݥΤ᪺���
        printf("�п�ܡG");
        fflush(stdin);
        scanf("%c", &choice);
		
		
                
        // �ھڥΤ᪺��ܰ���������ާ@
        switch (choice) {
            case 'a':
                // ��ܥi�ήy��]�B�J3�^
                stepA(seat);
                break;
            case 'b':
                // �w�Ʈy��
                printf("�аݱz�ݭn�X�Ӯy��H(1~4)�G");
                int num_seats;
                fflush(stdin);
                scanf("%d",&num_seats);
                if (num_seats>=1&&num_seats<=4){
                    stepB(seat,num_seats);
                    stepA(seat); //��ܦw�Ʈy��᪺�y���
                    int i,j;
                    for(i=0;i<9;i++){
        				for(j=0;j<9;j++){
            				if(seat[i][j]=='@'){
                				seat[i][j]='*';
           					}	
        				}
    				}
                }else{
                    printf("�п�J���T���y��ƶq(1~4)�C\n");
                }
                break;
            case 'c':
                // ��ʿ�ܮy��
                stepA(seat);
                stepC(seat);
                break;
            case 'd':
                // �h�X�{��
                printf("Continue? (y/n): ");
                fflush(stdin);
                char res;
                scanf("%c",&res);
                if(res=='y'){
                    break; // �~��`���A���s��ܥD���
                }else if(res=='n'){
                    return 0;
                }else{
                    printf("���~�ﶵ�C\n");
                }
                break;
            default:
                printf("���~�ﶵ�C\n");
                break;
        }
    } while (1);

    return 0;
}

/*
 ��ı�o�o�����{���]�p�ܧx���A�ר�OB�����ڭק�F�@���S�@���q�@�}�l���r��h�X@��@���������A�A��h�@��@�֤@��@�A�n���e������
 1,2,3����J�A�S�o�{4��·Ыe�e����F�N��@�U�Ȫ��ɶ��A�᭱��switch�S���s�����D�A�ӥB�n���OC�����D�A�ڰݤF�P�ǡBGPT���o��F
 �S���S�O�j�����~�A�̫�ڧ�int��printf�W�U���ǥ洫�~�i�H���`����C�o����e�@����F��h�ɶ��ӧ����C 
*/

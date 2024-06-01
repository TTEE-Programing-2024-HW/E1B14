#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// �w�q�ǥ͵��c�}�C 
struct student{
    char name[50];
    int num;
    int mat;
    int phy;
    int eng;
    float avg;
};

struct student students[10]; //�̦h10�W�ǥ�
int stcount=0; 

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
    int time=0;// �p���J�K�X������
    do{
        printf("�п�J4�ӼƦr���K�X�G");
        fflush(stdin);
        scanf("%d",&pass);
        // �ˬd�K�X�O�_���T
        if(pass==2024){
            printf("�K�X���T�I�w��ϥΥ��{���C\n");
            return 1;
        }
		else{
            time++;
            printf("ĵ�i�G�K�X���~%d��\n",time);
            if(time==3){
                printf("��J���~�W�L�T���A�{���Y�N�����C\n");
                return 0;
            }
        }
    }while(time<3);
    return 0;
}

// �B�J2�G�ù��D���
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

//a.��J�ǥͦ��Z
void a() {
    int n;
    printf("�п�J�ǥͼƶq(5-10)�G");
    fflush(stdin);
    scanf("%d",&n);
    while(n<5||n>10){
        printf("�ƶq�����b5��10�����A�Э��s��J�G");
        fflush(stdin);
        scanf("%d",&n);
    }
	int i;
    for(i=0;i<n;i++){
        printf("��J��%d�Ӿǥͪ��m�W�G",i+1);
        scanf("%s",students[i].name);
        printf("��J�Ǹ��G");
        scanf("%d",&students[i].num);
        if(students[i].num<99999||students[i].num>1000000){
        	printf("��J���~�A�Э��s��J�C\n");
        	i--; 
        	continue;
		}
        printf("��J�ƾǦ��Z�G");
        scanf("%d",&students[i].mat);
        if(students[i].mat<0||students[i].mat>100){
        	printf("��J���~�A�Э��s��J�C\n");
        	i--; 
        	continue;
		}
        printf("��J���z���Z�G");
        scanf("%d",&students[i].phy);
        if(students[i].phy<0||students[i].phy>100){
        	printf("��J���~�A�Э��s��J�C\n");
        	i--;
        	continue;
		}
        printf("��J�^�妨�Z�G");
        scanf("%d",&students[i].eng);
        if(students[i].eng<0||students[i].eng>100){
        	printf("��J���~�A�Э��s��J�C\n");
        	i--;
        	continue;
		}
        students[i].avg=(students[i].mat+students[i].phy+students[i].eng)/3.0;
    }
    stcount=n;
    printf("���Z��J�����A��^�D���C\n");
    system("PAUSE");
    system("cls");
}


//b.��ܩҦ��ǥͦ��Z

void b(){
    printf("�ǥͦ��Z�p�U�G\n");
    int i;
    for(i=0;i<stcount;i++){
        printf("�m�W:%s, �Ǹ�:%d, �ƾ�:%d, ���z:%d, �^��:%d, �������Z:%.1f\n",students[i].name,students[i].num,students[i].mat,students[i].phy,students[i].eng,students[i].avg);
	}
    printf("�����N���^�D���C\n");
    system("PAUSE");
    system("cls");
}

//c.�j�M�S�w�ǥͪ����Z
void c(){
    char search[50];
    printf("�п�J�n�j�M���ǥͩm�W�G");
    scanf("%s",search);
    int i;
    for(i=0;i<stcount;i++){
        if(strcmp(students[i].name,search)==0){//strcmp(a,b)�����Ӧr��O�_�۵�(��ASCII�̧Ǥ���j�p)�A�۵��N�^��0
        	printf("�m�W:%s, �Ǹ�:%d, �ƾ�:%d, ���z:%d, �^��:%d, �������Z:%.1f\n",students[i].name,students[i].num,students[i].mat,students[i].phy,students[i].eng,students[i].avg);
            printf("�����N���^�D���C\n");
            system("PAUSE");
            system("cls");
            return;
        }
    }
    printf("�䤣��ǥ͸�ơC\n");
    printf("�����N���^�D���C\n");
    system("PAUSE");
    system("cls");
}

//d.���ӥ������Z�i��ƦW


// ���Z�ƦW
void d(){
    // �Ƨ�
    int i,j;
    for(i=0;i<stcount-1;i++){
        for(j=i+1;j<stcount;j++){
            if(students[i].avg<students[j].avg){//�洫i��j 
                struct student temp=students[i];//�]�Ȧs 
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    printf("���Z�ƦW�p�U�G\n");
    for(i=0;i<stcount;i++){
        printf("�m�W: %s, �Ǹ�: %d, �������Z: %.1f\n",students[i].name,students[i].num,students[i].avg);
    }
    printf("�����N���^�D���C\n");
    system("PAUSE");
    system("cls");
}












//e.�T�{�O�_���}�t��

//�D���
 
int main(){
    step1();
    if (!check()){
        return 0;
    }

    char cho;
    while(1){
        step2();
        printf("�п�ܤ@�ӿﶵ�G");
        fflush(stdin);
        scanf("%c",&cho);

        switch(cho){
            case 'a':
                system("cls");
                //��J�ǥͦ��Z
                a();
                break;
            case 'b':
                system("cls");
                //��ܩҦ��ǥͦ��Z
                b();
                break;
            case 'c':
                system("cls");
                //�j�M�S�w�ǥͪ����Z
                c();
                break;
            case 'd':
                system("cls");
                //���ӥ������Z�i��ƦW
                d();
                break;
            case 'e':
            	system("cls");
                //�T�{�O�_���}�t��
                //�٨S�n
                break;
            default:
                printf("�Э��s��ܡC\n");
                system("PAUSE");
                system("cls");
                break;
        }
    }

    return 0;
}

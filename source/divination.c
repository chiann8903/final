#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define Acct_Data 50

void Accounting(int *, int*, struct Acct[]);
void Feeding(int*, int*);
void Personality();
void Divination();

void Personality()
{
	printf("==================\n");
	printf("=    �өʴ���    =\n");
	printf("==================\n");
	int a = 0;
	int s;
	printf("1.�A��ɷPı�̦n?\n(1)���� (2)�U�ȩγı� (3)�]��    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 2;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 6;
		break;
	}
	printf("2.�A�����ɬO......\n(1)�j�B���֨� (2)�p�B���֨� (3)���֡A�����Y����@�� (4)���֡A�C���Y (5)�ܺC    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 7;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("3.�M�H���ܮɡA�A......\n(1)���u��e������ (2)����򴤵� (3)�@����Ψ���b�v�� (4)�I�۩α��ۻP�A���ܪ��H (5)���ۧA���զ��B�N�ۧA���U�کΥΤ��z�Y�v    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 7;
		break;
	case 5:
		a = a + 6;
		break;
	}
	printf("4.���ۥ𮧮ɡA�A��......\n(1)�⽥�\�l (2)��L��e (3)��L���� (4)�@�L���b���U    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 2;
		break;
	case 4:
		a = a + 1;
		break;
	}
	printf("5.�I��A�P��o�����ƮɡA�A�������O......\n(1)�@�ӪY�઺�j�� (2)���ۡA�����j�n (3)���n�������� (4)�۩Ī��L��    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	}
	printf("6.��A�h�@�Ӭ���Ϊ�����X�ɡA�A......\n(1)�ܤj�n�a�J���H�ް_�`�N (2)�w�R�a�J���A��A�{�Ѫ��H (3)�D�`�w�R�a�J���A���q�O�����Q�`�N    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 2;
		break;
	}
	printf("7.��A�D�`�M�ߤu�@�ɡA���H���_�A�A�A�|......\n(1)�w��L (2)�P��D�`���� (3)�b�W�ⷥ�ݤ���    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 4;
		break;
	}
	printf("8.�U�C�C�⤤�A�A�̳��w���@�C��......\n(1)���ξ�� (2)�¦� (3)���βL�Ŧ� (4)��� (5)�`�ũε��� (6)�զ� (7)�ĩΦǦ�    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 7;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 4;
		break;
	case 5:
		a = a + 3;
		break;
	case 6:
		a = a + 2;
		break;
	case 7:
		a = a + 1;
		break;
	}
	printf("9.�{�J�Ϊ��e�X�����A�A���ɤW���լO......\n(1)�����A���� (2)�A�����A���� (3)�����A�L�� (4)�Y�Φb�@���u�W (5)�Q�\�L�Y    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 7;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 4;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("10.�A�g�`�ڨ�A�b......\n(1)���U (2)���[�αä� (3)��F��ΤH (4)���κ}�B (5)�A���`���@�� (6)�A���ڳ��O�r�֪�    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	case 5:
		a = a + 6;
		break;
	case 6:
		a = a + 1;
		break;
	}
	if (a < 21) {
		printf("�i�A�O���V���d�[�̡j\n");
		printf("�H�̻{���A�O�@�Ӯ`�۪��B���g�誺�B�u�X���_���B�O�ݭn�H���U���B�û��n�O�H���A���M�w�B\n���Q�J����ƩΥ���H�����C�L�̻{���A�O�@�ӧ��H�~�Ѫ̡A�@�ӥû��ݨ줣�s�b�����D���H�C\n���ǤH�{���A�O�H�F���A�u�����ǲ`���A���H���D�A���O�o�˪��H�C\n");
	}
	else if (a >= 21 && a < 31) {
		printf("�i�ʥF�H�ߪ��D��̡j\n");
		printf("�A���B�ͻ{���A�ԫj��W�B�ܬD��C�L�̻{���A�O�@���ԷV���B�Q���p�ߪ��H�A�@�ӽw�C��\ní�w�s��u�@���H�C�p�G�A������İʪ��ƩεL�ǳƪ��ơA�A�|�O�L�̤j�Y�@��C�L�̻{���A�|\n�q�U�Ө��ץJ�Ӧa�ˬd�@������A���g�`�M�w�����C�L�̻{����A���o�ؤ����@�����O�]���A��\n�p�ߪ��ѩʩҤް_���C\n");
	}
	else if (a >= 31 && a < 41) {
		printf("�i�H���٤����ۧګO�@�̡j\n");
		printf("�O�H�{���A�O�@�ө����B�ԷV�B�`���ɮĪ��H�A�]�{���A�O�@�ӧD�W�B���ѽᦳ�~�F�B����\n���H�C�A���|�ܧ֡B�ܮe���M�H�����B�͡A�o�O�@�ӹ�B�ͫD�`���۪��H�A�P�ɭn�D�B�͹�A�]\n�����۪��^���C���ǯu�������|�F�ѧA���H�|���D�n�ʷn�A��B�ͪ��H���O�������A���ﵥ���A\n�̦��o�H���Q�}�a�A�|�ϧA�������L�C\n");
	}
	else if (a >= 41 && a < 51) {
		printf("�i���Ū����D�j\n");
		printf("�O�H�{���A�O�@�ӷs�A���B�����O���B���y�O���B�n�����B���s��ڪ��B�ӥû����쪺�H;\n�Ӹg�`�O�s���`�N�O���J�I�A���A�O�@�Ө������檺�H�A���ܩ�]���ө��F�Y�C�L�̤]�{���A\n�ˤ��B�Mħ�B��K�B��̸ѤH;�@�ӥû��|�ϤH�����_�ӥB�|���U�O�H���H�C\n");
	}
	else if (a >= 51 && a < 61) {
		printf("�i�l�ޤH���_�I�a�j\n");
		printf("�O�H�{���A�O�@�ӥO�H���Ī��B���׬��⪺�B�۷���İʪ��ө�;�A�O�@�Ӥѥͪ���S�B�@\n�Ӱ��M�w�|�ܧ֪��H�A���M�A���M�w���`�O�諸�C�L�̻{���A�O�j�x�a�M�_�I���A�|�@�N�հ�����\n�Ʀܤ֤@��;�O�@���@�N���վ��|�ӪY��_�I���H�C�]���p���o����E�A�L�̳��w��A�b�@\n�_�C\n");
	}
	else {
		printf("�i�ƺC���t�W�̡j");
		printf("�O�H�{����A�����u�p�߳B�z�v�C�b�O�H�����A�A�O�ۭt���B�ۧڤ��ߪ��B�O�ӷ��ݦ���\n�t�����B�Ϊv�����C�O�H�i��ܨةp�A�Ʊ��h�V�A�@�I�A�����|�û��۫H�A�A�|��P�A��`�J��\n�ө������C�ܤεS�ݡC\n");
	}
	printf("\n");
}

void Divination()
{
	int Divination, i, j, ans;

	typedef struct lovetest
	{
		char love[200];
	}lovetest;
	lovetest lt[3];
	strcpy_s(lt[0].love, 200, "�A�P���H�h���s�A�@���p�ߨ����F�A�A�䤣��L�A�L�]�䤣��A�A�̫�A�|�Ĩ������ʡH\n");
	strcpy_s(lt[1].love, 200, "����A���ʷR���\�v�H���b�@���U�p���Ѥl�̡A�ﭱ���Ӥ@�����A�߸��[�֪��z�Q���ʡA�o�ɧA�|��򰵡H\n");
	strcpy_s(lt[2].love, 200, "�p�G�A�O�ʪ�����̪�����άӦZ�A�A���_���k��Q���]���۱��h�F�A���]���¯٧A���G���Q�n�^�k��A�Ч��_�����ӡI���A�|���H�U�����_���h�Ϥk��H\n");


	srand(time(NULL));

	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("    �@�a�w��Ө�۪��p�p�e�R�a�i�b�@�@�@�@�@\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
	printf("�@�@�@�@  �������������@�@\n");
	printf("�@�@�@�@���i���������i���@\n\n");
	printf("�@�@�@�@���@�@�@�@�@�@�@\n\n");
	printf("�@�@�@�A�@ �������� �����@�B ��������\n\n");
	printf("�@�@�ġY �ݡ@�@�á@�@�ݡ@�U�������@�@\n\n");
	printf("�@�����B�@�@ ���w �w���@�@   �A_��//��\\ \n\n");
	printf("�@�`�@�@�@�@�@�`�`�@�@���@�@�@/��\\�@\n\n");
	printf("�@�@�@ �@ ���i���Ģ��i���@�@�@�@�@�@�@�@\n\n");
	/*printf("  ���i�i�i��            ���i�i�i��\n");
	printf("  �i�i���i�i            �i�i���i�i\n");
	printf("  ���i�i�i�����i�i�i�i�����i�i�i��\n");
	printf("  ���i                        �i��\n");
	printf("  �i  ����                 ����     �i\n");
	printf("�ݡ�  ����      �~��       ����   �ݡ�\n");
	printf("  �i  ����        ����       ����     �i\n");
	printf("  ���g�g�g�g�g�g�g�g�g�g�g�g�g�g��\n");
	printf("  ���i                        �i��\n");*/
	for (;;)
	{
		printf("\n      ~�п�ܧA�n�e�R����~\n");
		printf("(��)�R��\n\n(��)�]�I\n\n(��)�B��\n\n(��)�h�X\n\nplease input your answer�G");
		scanf_s("%d", &Divination);
		switch (Divination)
		{
		case 1:
			printf("\n\n");
			printf("  ���i�i�i��            ���i�i�i��\n");
			printf("  �i�i���i�i            �i�i���i�i\n");
			printf("  ���i�i�i�����i�i�i�i�����i�i�i��\n");
			printf("  ���i                        �i��\n");
			printf("  �i  ����                 ����     �i\n");
			printf("�ݡ�  ����      �~��       ����   �ݡ�\n");
			printf("  �i  ����        ����       ����     �i\n");
			printf("  ���g�g�g�g�g�g�g�g�g�g�g�g�g�g��\n");
			printf("  ���i                        �i��\n");
			printf("\n\n");
			for (j = 1; j <= 1; j++)
			{
				i = rand() % 3;
				printf("%s", lt[i].love);
				if (i == 0)
				{
					printf("�D���D��@�ӥi�H�𮧪��a��A���ݹ��ӧ�A�C\n�D���D�@�w�|������C\n�D���D���۫H�|�����A�]���C�C���}�ݭ����A���ݹ����ۤv�C\n�D���D��ĵ�A����ĵ����������C\n");
					printf("�п�ܧA������:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("���絲�G:\n");
						printf("�С֧A�ݭn�@�ө�����K�����H�A���U�A��H�إߤ@�Ө}�n�����Y�A�]���A�h�b�O�Q�ʪ��a��A�p�G�A�J��L�z���x�����H�A�A�����B�z��H���������Y�A�h�|�Ĩ��k�ת��A�סC�̱q�L�H���M���B�z���j�ƥ�A�C\n\n");
						break;
					case 2:
						printf("���絲�G:\n");
						printf("�С֧A��R���D�`���ۡA�q�ӨS���ۤv���ͬ��Ŷ��A�N���������h��b�ҷR���H���W�A���ɹL���z�A���Ϲ��L�k�����A�ӧA�o�S���K�P��e�}�Өc�̺����A�]����ĳ�A�R�o���P�@�ǡA�������@�I�Ŷ��a�C\n\n");
						break;
					case 3:
						printf("���絲�G:\n");
						printf("�С֧A�N�k�k�������P���ݱo�ܻ��P�A���R�����۫H�Φw���P�A�q�Ӥ���ߥ��h���H�A���L��A���߯կաC�A���R���a�۫Ĥl���x�֤Ϋ��q�A�u�O����`�N�@�ǹ�誺�P���A�H�K���H�{���A�R�o�����{�u�C\n\n");						break;
					case 4:
						printf("���絲�G:\n");
						printf("�Сַ�A�̨�H�P���X�{���D�ɡA�A�`�Ʊ���ĤT�̨������A���ɯ�O�����A�åB������H���������١C�A�ϥΪ���k�ܦn�A���O�n�`�N�o�ĤT�̪���O�O�_�����A�_�h�L�ר̿�@��L�Ϊ��ĤT�̤ϦӨϦۤv��˷��C\n\n");
						break;
					default:
						break;
					}
				}
				else if (i == 1)
				{
					printf("\n�D���D�D�ʩ��^���A§�������L\n�D���D�~��V�e�A�X���M���f�S \n�D���D���b��a�A�ݹ��|������ \n�D���D�G�N�A�_�A�n�n�̡̮A�ް_���`�N\n");
					printf("�п�ܧA������:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("���絲�G:\n");
						printf("�С֦��\�v70%�C�A�ũM��§���A�סA�����l�ާO�H�`�N���n����C�Y�ϧA�S����������߷N�A���骺�f�O�N�w�g�����C��A��աA�u�n��設��S��H�A�A���Ӧ��ܰ����Ӻ�C\n\n");
						break;
					case 2:
						printf("���絲�G:\n");
						printf("�С֦��\�v��50%�C�ݧA�|�ܥX�����ˡA�άO�S���F���ӥؼСA�O�A�g�D���H���@�j�ֽ�C�A���n���D�ʡA�O�P�Ӫ���]�A���]�i��|�����ѵ��C���o�������o�A�O�A�ݭn�ǲߪ��a��C\n\n");
						break;
					case 3:
						printf("���絲�G:\n");
						printf("�С֦��\�v�O90%�C�S���H��ݥX�A�߸̦b�Q����A�����ҥh�M�ܤ]�S�ΡA�A���f���򪺳s�@�I�_���ݤ���C�p�U�[����A���K�i�}�ʱ��K�j�h�ƪ��H�A���O����A���ߩ��A�~���D�̤ͦw�g�N�������C\n\n");
						break;
					case 4:
						printf("���絲�G:\n");
						printf("�С֦��\�v�O35%�C�R��Ϲ��u���A�A�ݰ_�Ӧn�����I�p�o���C�O�H�Q�A���⪺��{�˱o�k�̽k��A�����D�A�쩳�O����N��C�]���A������̤@�ˮe���۳B�A�u���ܦ��H�a���n�̥S�B�n�j�f�C\n\n");
						break;
					default:
						break;
					}
				}
				else
				{
					printf("\n�D���D�öQ������\n�D���D������\n�D���D�s��\n�D���D�ï]\n�D���D�}�G������\n");
					printf("�п�ܧA������:");
					scanf_s("%d", &ans);
					printf("\n");
					switch (ans)
					{
					case 1:
						printf("���絲�G:\n");
						printf("�С֮��}�b�O�B�C�����D�ʰe�W�������A�A�o���_�믫�ӡA�h�b���ʪB�ͭ��e��p���A�i�H���ɮ��B�C\n\n");
						break;
					case 2:
						printf("���絲�G:\n");
						printf("���B�����C�A�����䦳���Q�X�{�A�����|�]�P�ǡB�B�ͼ��X�ӵ��Ѥ��������ʪB�͡C\n\n");
						break;
					case 3:
						printf("���絲�G:\n");
						printf("�С֮��B�����C�R���ܧ֭��{��A����A���b���W����P����@���W���ʹ�A��Ӫ��j�O�q�i�C	\n\n");
						break;
					case 4:
						printf("���絲�G:\n");
						printf("�С֮�᩿�����{�C�W�b��A��������ño�ܲ`�A�����ƨӤ@�⦷�A�٬O����A�U�b�����v���ܱj�C\n\n");
						break;
					case 5:
						printf("���絲�G:\n");
						printf("�С֮��b���W�C������A��������A���w�g�ڶ}�j�B�V�A���ӡA�A�o���Y���ݼ��[�ͬ��A�ﱵ��᪺��ӡC\n\n");
						break;
					default:
						break;
					}
				}
				break;
			}
			break;
		case 2:
			printf("\n\n");
			printf("  ���i�i�i��            ���i�i�i��\n");
			printf("  �i�i���i�i            �i�i���i�i\n");
			printf("  ���i�i�i�����i�i�i�i�����i�i�i��\n");
			printf("  ���i                        �i��\n");
			printf("  �i  ����                 ����     �i\n");
			printf("�ݡ�  ����      �~��       ����   �ݡ�\n");
			printf("  �i  ����        ����       ����     �i\n");
			printf("  ���g�g�g�g�g�g�g�g�g�g�g�g�g�g��\n");
			printf("  ���i                        �i��\n");
			printf("\n\n");			printf("���էA���@�Ͱ]�B�H\n��A���i�˪L�A�o�{�b�@�B�Ŧa�W���ʪ��ֶ�A�ʪ��̤@�ݨ�A�A�N���[�O���{���B�ͦ����L�ӥ��۩I�A�A�]ı�o��L�������ѡC�߲z����q�q�ݡA�o�Ӱʪ��ֶ�̹L�ӥ��۩I���|�O�H�U�|�ذʪ��������@�ءH\n");
			printf("\n�D1�Ddog\n�D2�Dhorse\n�D3�Drabbit\n�D4�Dsheep\n");
			printf("�п�ܧA������:");
			scanf_s("%d", &ans);
			printf("\n");
			switch (ans)
			{
			case 1:
				printf("���絲�G:\n");
				printf("�С֧A�}�񨮹�a�q�q�u�@�A���p���i�s�C�ʪ��ֶ骺�����M��ߤl�j�A���Ѱ_�ШӤ]�����A���L�@�a�Ź������|���A�ҥH���Ŧk�Q�@�̤d���A�Q�Ȥj���C�x�W�s���A�����O�١C\n\n");
				break;
			case 2:
				printf("���絲�G:\n");
				printf("�С֧A�]�B��q���]�D�C���̷|�ѥСA�b�s�j�Ѧa�W�A�S�i��A���ͷN�Q���쪺�]�I�C�Ʒ~�U���U�j�A�]���q�|���K��u�u�ӤJ�C\n\n");
				break;
			case 3:
				printf("���絲�G:\n");
				printf("�С֧A�����Ҥu�@�@�͡A�o�P�j�I�j�]�L�t�C�ʪ��ֶ骺�ߤl�Ӥp���y�ѥСA�ѥX�����n�p�A�@�����������C�ҥH�פ�ҸL�A�Υi�Ź��A�U�e�a�]�A��A�O����m�i�C\n\n");
				break;
			case 4:
				printf("���絲�G:\n");
				printf("�С֧A�u�n�֧V�O�U�u�ҡA�ʸU�I�Τ��O�ڡC�ʪ��ֶ骺�Ϫ���O�Ȧ����A�[�����O�A���J�i�[�C�q���W�S�i����Ʋ��~�Ϥ�u�A�A���D���J�~�A�|���Ʒ~���J�A�O�Ҧ����W�ťͬ��C\n\n");
				break;
			default:
				break;
			}
			break;
		case 3:
			for (int k = 1; k <= 1; k++)
			{
				printf("\n\n");
				printf("  ���i�i�i��            ���i�i�i��\n");
				printf("  �i�i���i�i            �i�i���i�i\n");
				printf("  ���i�i�i�����i�i�i�i�����i�i�i��\n");
				printf("  ���i                        �i��\n");
				printf("  �i  ����                 ����     �i\n");
				printf("�ݡ�  ����      �~��       ����   �ݡ�\n");
				printf("  �i  ����        ����       ����     �i\n");
				printf("  ���g�g�g�g�g�g�g�g�g�g�g�g�g�g��\n");
				printf("  ���i                        �i��\n");
				printf("\n\n");
				i = rand() % 5;
				if (i == 0)
					printf("�̪�A���B��]�٬O�ܤ������A���M���O�̩��B�����@�ӡA���O�N�p�P�����A�H�a���S�����A�A�ܤ֤]�i�H���ӤG�����Ať�_�Ӥ]�O�ܦn�աC���ިS���F���A�Q�n���ĪG�A���O�]�൹�A�@�w�����y�C���p�A�A���Ӫ��]�B�M���B���O�W�ɪ��A�{�b�u�n��ۤv��O�A���ɤW�h�A���Ӯڥ����ξޤ߹B�𪺰��D�A���O�����򳣷|���\�C\n\n");
				else if (i == 1)
					printf("�A���e���B���٬O�������A�u�O�n��F���Y�A�]�n���A�@�ǭW�Y�Y�Y�F�C���L�A�q�Ӥ��|�]���B�𤣦n�A�N�q�ण�w�A�A�]�q�Ӥ��|�ǤߡA�����B��u�O��O���@�����A�p�G�A��L�譱���j�A�B�𤣦n�A�A�]�i�H�����Ʊ��C�p�G�A�޳N���A�p�G�A�H�𷥰��A�p�G�A�귽�ܦh�A����B�𤣦n�A�A�]�L�ҿסC�j���F���B��ӤF�A�X�s�C\n\n");
				else if (i == 2)
					printf("�A�̪񪺹B��O�@��몺�աA�ͤ��W���h�n�A�����B��n���H��A�󩯹B�a�o��@�ǪF��A��A���o��[���\�C���O�A���B��]���|���h�t�A��_���ǹL�o�Q���}�����H�A�B��ܰI���H�A�A�ܤ֦����i��A���H�b�A���䵹�A�[�o�C���O�A�٬O�ݭn�n�n�a���ܤ@�U�ۤv�ثe���ͬ����A�A�h�h�V�O�A��[�V�O�~��ǰt�W���ǩ��B�C\n\n");
				else if (i == 3)
					printf("�A�̪񪺹B��ܦn�A�Ҧ����n���Ʊ����|��¶�ۧA�A���A���u�@���Q�L��A��¾�[�~�����A�����F�]���A���P���B�ܦn�A���h�A�J�쪺�H�ӭӳ����w�A�A�R�}�A�C�A���]�B�]�O�n���աA�u�@�ȿ�����h���~�A�ٻ����w���Ӽ����򪺡C�{�b�B��o��n�A�i�H�X�����|�A�h�h��I���e���p���A�����w�ܧִN��{�F�C\n\n");
				else if (i == 4)
					printf("�ɦn���a���B��A�A�]�����D�ӻ��n�٬O���n�F�C�����ɭ��٤������ˤl�A�ƨƶ��ߡA�J�쪺�H�]�S�O�n�C�����ɭԤS���V�|�A�A�Q���I�Ʊ��a�A�Ҧ����H���|�Ӫ����A�@��A�s�ܤ@�f��������_���`���C�A�]�ⴤ���n�N�ӷ|�O���򱡪p�A�]����U���`���A�A�u�ਫ�@�B��@�B�A�ɶq���ۤv�n�B���ɭԦh���I�Ʊ��A�B�𤣦n���ɭԯ������W���Τjı�A�u�D���w��L�C\n\n");
				else
					printf("�o�ӮɭԡA�A�u���|�����֪��訥�F�A�]���A���B��n���N�q�ӨS���n�L�I�O�r�A�n���@���o��C���O�A���������X�@�ӧ|���Pı�C�����D�A�O���O���ӭn�n�n���ܤ@�U�ۤv������P�ʮ�F�O�A�h�h��Ĳ�H�A�h�hŪ�ǮѡA�h�h��Ҩ���A�C�C�a�@�Ѥ@�ѧ��ܡA�A�u���|���j�ܤơC��ɭԡA�n�B�]�|��ۤ@�_�i�A���a�����@�C\n\n");

			}
			break;
		case 4:
			return;
			break;
		}
	}
}
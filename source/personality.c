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
	printf("6.���A�h�@�Ӭ���Ϊ�����X�ɡA�A......\n(1)�ܤj�n�a�J���H�ް_�`�N (2)�w�R�a�J���A��A�{�Ѫ��H (3)�D�`�w�R�a�J���A���q�O�����Q�`�N    ");
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
	printf("7.���A�D�`�M�ߤu�@�ɡA���H���_�A�A�A�|......\n(1)�w��L (2)�P��D�`���� (3)�b�W�ⷥ�ݤ���    ");
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
		printf("�O�H�{���A�O�@�ӥO�H���Ī��B���׬��⪺�B�۷����İʪ��ө�;�A�O�@�Ӥѥͪ���S�B�@\n�Ӱ��M�w�|�ܧ֪��H�A���M�A���M�w���`�O�諸�C�L�̻{���A�O�j�x�a�M�_�I���A�|�@�N�հ�����\n�Ʀܤ֤@��;�O�@���@�N���վ��|�ӪY��_�I���H�C�]���p���o����E�A�L�̳��w��A�b�@\n�_�C\n");
	}
	else {
		printf("�i�ƺC���t�W�̡j");
		printf("�O�H�{����A�����u�p�߳B�z�v�C�b�O�H�����A�A�O�ۭt���B�ۧڤ��ߪ��B�O�ӷ��ݦ���\n�t�����B�Ϊv�����C�O�H�i��ܨةp�A�Ʊ��h�V�A�@�I�A�����|�û��۫H�A�A�|��P�A��`�J��\n�ө������C�ܤεS�ݡC\n");
	}
	printf("\n");
}
#include <stdio.h>
#include <stdlib.h>//rand, srand
#include <time.h>//time
#include <Windows.h>//Sleep
int main() {
	srand(time(0));
	int c1, c2, c3, c4, c5, hap, point = 10, dc;
	int d1, d2, d3, d4, d5, dhap;
	int menu_no, r_val;
	const int stime = 3000;//���������
	//�޴�â ����
	while (1) {
		printf("\n** ���� ** \n");
		printf("$ ���� ����� ����Ʈ $ = %d\n", point);
		printf("======================= \n");
		printf("     1. ���� ����     \n");
		printf("     2. ����     \n");
		printf("======================= \n");
		printf("1~2 �ϳ��� �� �Է� (0�̸� ����) : ");
		r_val = scanf_s("%d", &menu_no);

		//���� Ȯ�� 
		if (r_val != 1) {
			printf("���� �Է� ���� (0~3)\n\n");
			while (getchar() != '\n');
			Sleep(stime);
			system("cls");
			continue;
		}
		if (menu_no == 2)
			break;
		if (menu_no < 0 || menu_no>2) {
			printf("���� �Է� ���� (0~2)\n\n");
			Sleep(stime);
			system("cls");
			continue;
		}
		if (menu_no == 1) {
			//1�� ī�� ����
			c1 = rand() % 13 + 1;
			printf("ù��° ī�� = %d\n", c1);
			c2 = rand() % 13 + 1;
			printf("�ι�° ī�� = %d\n", c2);
			hap = c1 + c2;
			printf("ī�� �հ� : %d\n", hap);
			//1�� ī�� �� Ȯ��
			if (hap > 21) {
				printf("� �й�... (21�� �Ѿ����ϴ�. ����Ʈ -1)\n");
				point--;
				Sleep(stime);
				system("cls");
			}
			else if (hap == 21) {
				printf("� �¸�!!!... (21�� �Ǿ����ϴ�. ����Ʈ +1)\n");
				point++;
				Sleep(stime);
				system("cls");
			}
			else { //2�� ī�� ����
				printf("ī�带 �ϳ� �����ðڽ��ϱ�?\n");
				printf("1 - ��, 2 - ������\n");
				r_val = scanf_s("%d", &dc);

				//���� Ȯ��
				if (r_val != 1) {
					printf("���� �Է� ���� (1~2)\n");
					printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
					point--;
					while (getchar() != '\n');
					Sleep(stime);
					system("cls");
					continue;
				}
				if (dc < 1 || dc>2) {
					printf("���� �Է� ���� (1~2)\n");
					printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
					point--;
					Sleep(stime);
					system("cls");
					continue;
				}
				if (dc == 1) {//ī�� �̱�
					c3 = rand() % 13 + 1;
					printf("����° ī�� = %d\n", c3);
					hap = c1 + c2 + c3;
					printf("ī�� �հ� : %d\n", hap);
					//�� Ȯ��
					if (hap > 21) {
						printf("� �й�... (21�� �Ѿ����ϴ�. ����Ʈ -1)\n");
						point--;
						Sleep(stime);
						system("cls");
					}
					else if (hap == 21) {
						printf("� �¸�!!!... (21�� �Ǿ����ϴ�. ����Ʈ +1)\n");
						point++;
						Sleep(stime);
						system("cls");
					}
					else { //3�� ī�� ����
						printf("ī�带 �ϳ� �����ðڽ��ϱ�?\n");
						printf("1 - ��, 2 - ������\n");
						r_val = scanf_s("%d", &dc);

						//���� Ȯ��
						if (r_val != 1) {
							printf("���� �Է� ���� (1~2)\n");
							printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
							point--;
							while (getchar() != '\n');
							Sleep(stime);
							system("cls");
							continue;
						}
						if (dc < 1 || dc>2) {
							printf("���� �Է� ���� (1~2)\n");
							printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
							point--;
							Sleep(stime);
							system("cls");
							continue;
						}
						if (dc == 1) {//ī�� �̱�
							c4 = rand() % 13 + 1;
							printf("�׹�° ī�� = %d\n", c4);
							hap = c1 + c2 + c3 + c4;
							printf("ī�� �հ� : %d\n", hap);
							//�� Ȯ��
							if (hap > 21) {
								printf("� �й�... (21�� �Ѿ����ϴ�. ����Ʈ -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else if (hap == 21) {
								printf("� �¸�!!!... (21�� �Ǿ����ϴ�. ����Ʈ +1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else { //������ ī�� ����
								printf("ī�带 �ϳ� �����ðڽ��ϱ�?\n");
								printf("1 - ��, 2 - ������\n");
								r_val = scanf_s("%d", &dc);

								//���� Ȯ��
								if (r_val != 1) {
									printf("���� �Է� ���� (1~2)\n");
									printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
									point--;
									while (getchar() != '\n');
									Sleep(stime);
									system("cls");
									continue;
								}
								if (dc < 1 || dc>2) {
									printf("���� �Է� ���� (1~2)\n");
									printf("�ʱ� ȭ������ �Ѿ�ϴ�... (����Ʈ -1)\n\n");
									point--;
									Sleep(stime);
									system("cls");
									continue;
								}
								if (dc == 1) {//ī�� �̱�
									c5 = rand() % 13 + 1;
									printf("������ ī�� = %d\n", c5);
									hap = c1 + c2 + c3 + c4 + c5;
									printf("ī�� �հ� : %d\n", hap);
									//�� Ȯ��
									if (hap > 21) {
										printf("�й�... (21�� �Ѿ����ϴ�. ����Ʈ -1)\n");
										point--;
										Sleep(stime);
										system("cls");
										continue;
									}
									else if (hap == 21) {
										printf("� �¸�!!!... (21�� �Ǿ����ϴ�. ����Ʈ +1)\n");
										point++;
										Sleep(stime);
										system("cls");
										continue;
									}
									else
										printf("�� ���ӿ��� 5���� �ִ��̹Ƿ� �� ���·� ���� �Ѿ�ϴ�...\n");

									//���� ����
									printf("������ ī�带 �̽��ϴ�...\n");
									Sleep(stime);
									d1 = rand() % 13 + 1;
									printf("ù��° ī�� = %d\n", d1);
									d2 = rand() % 13 + 1;
									printf("�ι�° ī�� = %d\n", d2);
									dhap = d1 + d2;
									printf("���� ī�� �հ� : %d\n", dhap);
									//�� Ȯ��
									if (dhap > 21) {
										printf("������ ����Ʈ�߽��ϴ�!\n");
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("���� ī�� ���� 21�� �Ǿ����ϴ�... (����Ʈ -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap <= 16) {//ī�� �߰�1
										printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
										Sleep(stime);
										d3 = rand() % 13 + 1;
										printf("����° ī�� = %d\n", d3);
										dhap = d1 + d2 + d3;
										printf("���� ī�� �հ� : %d\n", dhap);
										if (dhap > 21) {
											printf("������ ����Ʈ�߽��ϴ�!\n");
											printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap == 21) {
											printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap <= 16) {//ī�� �߰�2
											printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
											Sleep(stime);
											d4 = rand() % 13 + 1;
											printf("�׹�° ī�� = %d\n", d4);
											dhap = d1 + d2 + d3 + d4;
											printf("���� ī�� �հ� : %d\n", dhap);
											if (dhap > 21) {
												printf("������ ����Ʈ�߽��ϴ�!\n");
												printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap == 21) {
												printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap <= 16) {//ī�� �߰�3
												printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
												Sleep(stime);
												d5 = rand() % 13 + 1;
												printf("������ ī�� = %d\n", d5);
												dhap = d1 + d2 + d3 + d4 + d5;
												printf("���� ī�� �հ� : %d\n", dhap); 
												if (dhap > 21) {
													printf("������ ����Ʈ�߽��ϴ�!\n");
													printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (dhap == 21) {
													printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (dhap<21) {
													printf("ī�� ���� 5�忡 ���������Ƿ� �� ���·� ���մϴ�...\n");
													Sleep(stime);
													//ī�� ��
													printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
													if (hap > dhap) {
														printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
														point++;
														point++;
														point++;
														point++;
														point++;
														Sleep(stime);
														system("cls");
													}
													else if (hap < dhap) {
														printf("�÷��̾��� �й�... (����Ʈ -1)\n");
														point--;
														Sleep(stime);
														system("cls");
													}
													else {
														printf("�����ϴ�! \n");
														Sleep(stime);
														system("cls");
													}
												}
											}
											else if (dhap > 17) {
												printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
												Sleep(stime);
												//ī�� ��
												printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
												if (hap > dhap) {
													printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (hap < dhap) {
													printf("�÷��̾��� �й�... (����Ʈ -1)\n");
													point--;
													Sleep(stime);
													system("cls");
												}
												else {
													printf("�����ϴ�! \n");
													Sleep(stime);
													system("cls");
												}
											}

										}
										else if (dhap > 17) {
											printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
											Sleep(stime);
											//ī�� ��
											printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
											if (hap > dhap) {
												printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (hap < dhap) {
												printf("�÷��̾��� �й�... (����Ʈ -1)\n");
												point--;
												Sleep(stime);
												system("cls");
											}
											else {
												printf("�����ϴ�! \n");
												Sleep(stime);
												system("cls");
											}
										}
									}
									else if (dhap > 17) {
									printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
									Sleep(stime);
									//ī�� ��
									printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("�÷��̾��� �й�... (����Ʈ -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("�����ϴ�! \n");
										Sleep(stime);
										system("cls");
									}
											}

								}
								else{//���� ����
								printf("������ ī�带 �̽��ϴ�...\n");
								Sleep(stime);
								d1 = rand() % 13 + 1;
								printf("ù��° ī�� = %d\n", d1);
								d2 = rand() % 13 + 1;
								printf("�ι�° ī�� = %d\n", d2);
								dhap = d1 + d2;
								printf("���� ī�� �հ� : %d\n", dhap);
								//�� Ȯ��
								if (dhap > 21) {
									printf("������ ����Ʈ�߽��ϴ�!\n");
									printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap == 21) {
									printf("���� ī�� ���� 21�� �Ǿ����ϴ�... (����Ʈ -1)\n");
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap <= 16) {//ī�� �߰�1
									printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
									Sleep(stime);
									d3 = rand() % 13 + 1;
									printf("����° ī�� = %d\n", d3);
									dhap = d1 + d2 + d3;
									printf("���� ī�� �հ� : %d\n", dhap);
									if (dhap > 21) {
										printf("������ ����Ʈ�߽��ϴ�!\n");
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap <= 16) {//ī�� �߰�2
										printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
										Sleep(stime);
										d4 = rand() % 13 + 1;
										printf("�׹�° ī�� = %d\n", d4);
										dhap = d1 + d2 + d3 + d4;
										printf("���� ī�� �հ� : %d\n", dhap);
										if (dhap > 21) {
											printf("������ ����Ʈ�߽��ϴ�!\n");
											printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap == 21) {
											printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap <= 16) {//ī�� �߰�3
											printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
											Sleep(stime);
											d5 = rand() % 13 + 1;
											printf("������ ī�� = %d\n", d5);
											dhap = d1 + d2 + d3 + d4 + d5;
											printf("���� ī�� �հ� : %d\n", dhap);
											if (dhap > 21) {
												printf("������ ����Ʈ�߽��ϴ�!\n");
												printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap == 21) {
												printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap < 21) {
												printf("ī�� ���� 5�忡 ���������Ƿ� �� ���·� ���մϴ�...\n");
												Sleep(stime);
												//ī�� ��
												printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
												if (hap > dhap) {
													printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (hap < dhap) {
													printf("�÷��̾��� �й�... (����Ʈ -1)\n");
													point--;
													Sleep(stime);
													system("cls");
												}
												else {
													printf("�����ϴ�! \n");
													Sleep(stime);
													system("cls");
												}
											}
										}
										else if (dhap > 17) {
											printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
											Sleep(stime);
											//ī�� ��
											printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
											if (hap > dhap) {
												printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (hap < dhap) {
												printf("�÷��̾��� �й�... (����Ʈ -1)\n");
												point--;
												Sleep(stime);
												system("cls");
											}
											else {
												printf("�����ϴ�! \n");
												Sleep(stime);
												system("cls");
											}
										}

									}
									else if (dhap > 17) {
										printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
										Sleep(stime);
										//ī�� ��
										printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
										if (hap > dhap) {
											printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (hap < dhap) {
											printf("�÷��̾��� �й�... (����Ʈ -1)\n");
											point--;
											Sleep(stime);
											system("cls");
										}
										else {
											printf("�����ϴ�! \n");
											Sleep(stime);
											system("cls");
										}
									}
								}
								else if (dhap > 17) {
									printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
									Sleep(stime);
									//ī�� ��
									printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("�÷��̾��� �й�... (����Ʈ -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("�����ϴ�! \n");
										Sleep(stime);
										system("cls");
									}
								}
}
							}
						}
						else{//���� ����
						printf("������ ī�带 �̽��ϴ�...\n");
						Sleep(stime);
						d1 = rand() % 13 + 1;
						printf("ù��° ī�� = %d\n", d1);
						d2 = rand() % 13 + 1;
						printf("�ι�° ī�� = %d\n", d2);
						dhap = d1 + d2;
						printf("���� ī�� �հ� : %d\n", dhap);
						//�� Ȯ��
						if (dhap > 21) {
							printf("������ ����Ʈ�߽��ϴ�!\n");
							printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap == 21) {
							printf("���� ī�� ���� 21�� �Ǿ����ϴ�... (����Ʈ -1)\n");
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap <= 16) {//ī�� �߰�1
							printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
							Sleep(stime);
							d3 = rand() % 13 + 1;
							printf("����° ī�� = %d\n", d3);
							dhap = d1 + d2 + d3;
							printf("���� ī�� �հ� : %d\n", dhap);
							if (dhap > 21) {
								printf("������ ����Ʈ�߽��ϴ�!\n");
								printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap == 21) {
								printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap <= 16) {//ī�� �߰�2
								printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
								Sleep(stime);
								d4 = rand() % 13 + 1;
								printf("�׹�° ī�� = %d\n", d4);
								dhap = d1 + d2 + d3 + d4;
								printf("���� ī�� �հ� : %d\n", dhap);
								if (dhap > 21) {
									printf("������ ����Ʈ�߽��ϴ�!\n");
									printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap == 21) {
									printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap <= 16) {//ī�� �߰�3
									printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
									Sleep(stime);
									d5 = rand() % 13 + 1;
									printf("������ ī�� = %d\n", d5);
									dhap = d1 + d2 + d3 + d4 + d5;
									printf("���� ī�� �հ� : %d\n", dhap);
									if (dhap > 21) {
										printf("������ ����Ʈ�߽��ϴ�!\n");
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap < 21) {
										printf("ī�� ���� 5�忡 ���������Ƿ� �� ���·� ���մϴ�...\n");
										Sleep(stime);
										//ī�� ��
										printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
										if (hap > dhap) {
											printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (hap < dhap) {
											printf("�÷��̾��� �й�... (����Ʈ -1)\n");
											point--;
											Sleep(stime);
											system("cls");
										}
										else {
											printf("�����ϴ�! \n");
											Sleep(stime);
											system("cls");
										}
									}
								}
								else if (dhap > 17) {
									printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
									Sleep(stime);
									//ī�� ��
									printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("�÷��̾��� �й�... (����Ʈ -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("�����ϴ�! \n");
										Sleep(stime);
										system("cls");
									}
								}

							}
							else if (dhap > 17) {
								printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
								Sleep(stime);
								//ī�� ��
								printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
								if (hap > dhap) {
									printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (hap < dhap) {
									printf("�÷��̾��� �й�... (����Ʈ -1)\n");
									point--;
									Sleep(stime);
									system("cls");
								}
								else {
									printf("�����ϴ�! \n");
									Sleep(stime);
									system("cls");
								}
							}
						}
						else if (dhap > 17) {
							printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
							Sleep(stime);
							//ī�� ��
							printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
							if (hap > dhap) {
								printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (hap < dhap) {
								printf("�÷��̾��� �й�... (����Ʈ -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else {
								printf("�����ϴ�! \n");
								Sleep(stime);
								system("cls");
							}
						}
}
					}
				}
				else{//���� ����
				printf("������ ī�带 �̽��ϴ�...\n");
				Sleep(stime);
				d1 = rand() % 13 + 1;
				printf("ù��° ī�� = %d\n", d1);
				d2 = rand() % 13 + 1;
				printf("�ι�° ī�� = %d\n", d2);
				dhap = d1 + d2;
				printf("���� ī�� �հ� : %d\n", dhap);
				//�� Ȯ��
				if (dhap > 21) {
					printf("������ ����Ʈ�߽��ϴ�!\n");
					printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
					point++;
					point++;
					point++;
					point++;
					point++;
					Sleep(stime);
					system("cls");
				}
				else if (dhap == 21) {
					printf("���� ī�� ���� 21�� �Ǿ����ϴ�... (����Ʈ -1)\n");
					point++;
					Sleep(stime);
					system("cls");
				}
				else if (dhap <= 16) {//ī�� �߰�1
					printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
					Sleep(stime);
					d3 = rand() % 13 + 1;
					printf("����° ī�� = %d\n", d3);
					dhap = d1 + d2 + d3;
					printf("���� ī�� �հ� : %d\n", dhap);
					if (dhap > 21) {
						printf("������ ����Ʈ�߽��ϴ�!\n");
						printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
						point++;
						point++;
						point++;
						point++;
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (dhap == 21) {
						printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (dhap <= 16) {//ī�� �߰�2
						printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
						Sleep(stime);
						d4 = rand() % 13 + 1;
						printf("�׹�° ī�� = %d\n", d4);
						dhap = d1 + d2 + d3 + d4;
						printf("���� ī�� �հ� : %d\n", dhap);
						if (dhap > 21) {
							printf("������ ����Ʈ�߽��ϴ�!\n");
							printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap == 21) {
							printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap <= 16) {//ī�� �߰�3
							printf("���� 16 �����̹Ƿ� �� �� �� �̽��ϴ�...\n");
							Sleep(stime);
							d5 = rand() % 13 + 1;
							printf("������ ī�� = %d\n", d5);
							dhap = d1 + d2 + d3 + d4 + d5;
							printf("���� ī�� �հ� : %d\n", dhap);
							if (dhap > 21) {
								printf("������ ����Ʈ�߽��ϴ�!\n");
								printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap == 21) {
								printf("���� ī�� ���� 21�� �Ǿ����ϴ�... ����Ʈ -1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap < 21) {
								printf("ī�� ���� 5�忡 ���������Ƿ� �� ���·� ���մϴ�...\n");
								Sleep(stime);
								//ī�� ��
								printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
								if (hap > dhap) {
									printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (hap < dhap) {
									printf("�÷��̾��� �й�... (����Ʈ -1)\n");
									point--;
									Sleep(stime);
									system("cls");
								}
								else {
									printf("�����ϴ�! \n");
									Sleep(stime);
									system("cls");
								}
							}
						}
						else if (dhap > 17) {
							printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
							Sleep(stime);
							//ī�� ��
							printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
							if (hap > dhap) {
								printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (hap < dhap) {
								printf("�÷��̾��� �й�... (����Ʈ -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else {
								printf("�����ϴ�! \n");
								Sleep(stime);
								system("cls");
							}
						}

					}
					else if (dhap > 17) {
						printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
						Sleep(stime);
						//ī�� ��
						printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
						if (hap > dhap) {
							printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (hap < dhap) {
							printf("�÷��̾��� �й�... (����Ʈ -1)\n");
							point--;
							Sleep(stime);
							system("cls");
						}
						else {
							printf("�����ϴ�! \n");
							Sleep(stime);
							system("cls");
						}
					}
				}
				else if (dhap > 17) {
					printf("���� 17 �̻��̹Ƿ� �� ���·� ���մϴ�...\n");
					Sleep(stime);
					//ī�� ��
					printf("�÷��̾� ī�� : %d || ���� ī�� : %d\n", hap, dhap);
					if (hap > dhap) {
						printf("�÷��̾��� �¸�!!! (����Ʈ +5)\n");
						point++;
						point++;
						point++;
						point++;
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (hap < dhap) {
						printf("�÷��̾��� �й�... (����Ʈ -1)\n");
						point--;
						Sleep(stime);
						system("cls");
					}
					else {
						printf("�����ϴ�! \n");
						Sleep(stime);
						system("cls");
					}
				}
}
			}
		}
	}
		return 0;
	}
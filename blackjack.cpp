#include <stdio.h>
#include <stdlib.h>//rand, srand
#include <time.h>//time
#include <Windows.h>//Sleep
int main() {
	srand(time(0));
	int c1, c2, c3, c4, c5, hap, point = 10, dc;
	int d1, d2, d3, d4, d5, dhap;
	int menu_no, r_val;
	const int stime = 3000;//상수형변수
	//메뉴창 생성
	while (1) {
		printf("\n** 블랙잭 ** \n");
		printf("$ 현재 당신의 포인트 $ = %d\n", point);
		printf("======================= \n");
		printf("     1. 게임 시작     \n");
		printf("     2. 종료     \n");
		printf("======================= \n");
		printf("1~2 하나의 값 입력 (0이면 종료) : ");
		r_val = scanf_s("%d", &menu_no);

		//오류 확인 
		if (r_val != 1) {
			printf("문자 입력 오류 (0~3)\n\n");
			while (getchar() != '\n');
			Sleep(stime);
			system("cls");
			continue;
		}
		if (menu_no == 2)
			break;
		if (menu_no < 0 || menu_no>2) {
			printf("숫자 입력 오류 (0~2)\n\n");
			Sleep(stime);
			system("cls");
			continue;
		}
		if (menu_no == 1) {
			//1차 카드 생성
			c1 = rand() % 13 + 1;
			printf("첫번째 카드 = %d\n", c1);
			c2 = rand() % 13 + 1;
			printf("두번째 카드 = %d\n", c2);
			hap = c1 + c2;
			printf("카드 합계 : %d\n", hap);
			//1차 카드 합 확인
			if (hap > 21) {
				printf("운빨 패배... (21이 넘었습니다. 포인트 -1)\n");
				point--;
				Sleep(stime);
				system("cls");
			}
			else if (hap == 21) {
				printf("운빨 승리!!!... (21이 되었습니다. 포인트 +1)\n");
				point++;
				Sleep(stime);
				system("cls");
			}
			else { //2차 카드 생성
				printf("카드를 하나 뽑으시겠습니까?\n");
				printf("1 - 힛, 2 - 스테이\n");
				r_val = scanf_s("%d", &dc);

				//오류 확인
				if (r_val != 1) {
					printf("문자 입력 오류 (1~2)\n");
					printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
					point--;
					while (getchar() != '\n');
					Sleep(stime);
					system("cls");
					continue;
				}
				if (dc < 1 || dc>2) {
					printf("숫자 입력 오류 (1~2)\n");
					printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
					point--;
					Sleep(stime);
					system("cls");
					continue;
				}
				if (dc == 1) {//카드 뽑기
					c3 = rand() % 13 + 1;
					printf("세번째 카드 = %d\n", c3);
					hap = c1 + c2 + c3;
					printf("카드 합계 : %d\n", hap);
					//합 확인
					if (hap > 21) {
						printf("운빨 패배... (21이 넘었습니다. 포인트 -1)\n");
						point--;
						Sleep(stime);
						system("cls");
					}
					else if (hap == 21) {
						printf("운빨 승리!!!... (21이 되었습니다. 포인트 +1)\n");
						point++;
						Sleep(stime);
						system("cls");
					}
					else { //3차 카드 생성
						printf("카드를 하나 뽑으시겠습니까?\n");
						printf("1 - 힛, 2 - 스테이\n");
						r_val = scanf_s("%d", &dc);

						//오류 확인
						if (r_val != 1) {
							printf("문자 입력 오류 (1~2)\n");
							printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
							point--;
							while (getchar() != '\n');
							Sleep(stime);
							system("cls");
							continue;
						}
						if (dc < 1 || dc>2) {
							printf("숫자 입력 오류 (1~2)\n");
							printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
							point--;
							Sleep(stime);
							system("cls");
							continue;
						}
						if (dc == 1) {//카드 뽑기
							c4 = rand() % 13 + 1;
							printf("네번째 카드 = %d\n", c4);
							hap = c1 + c2 + c3 + c4;
							printf("카드 합계 : %d\n", hap);
							//합 확인
							if (hap > 21) {
								printf("운빨 패배... (21이 넘었습니다. 포인트 -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else if (hap == 21) {
								printf("운빨 승리!!!... (21이 되었습니다. 포인트 +1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else { //마지막 카드 생성
								printf("카드를 하나 뽑으시겠습니까?\n");
								printf("1 - 힛, 2 - 스테이\n");
								r_val = scanf_s("%d", &dc);

								//오류 확인
								if (r_val != 1) {
									printf("문자 입력 오류 (1~2)\n");
									printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
									point--;
									while (getchar() != '\n');
									Sleep(stime);
									system("cls");
									continue;
								}
								if (dc < 1 || dc>2) {
									printf("숫자 입력 오류 (1~2)\n");
									printf("초기 화면으로 넘어갑니다... (포인트 -1)\n\n");
									point--;
									Sleep(stime);
									system("cls");
									continue;
								}
								if (dc == 1) {//카드 뽑기
									c5 = rand() % 13 + 1;
									printf("마지막 카드 = %d\n", c5);
									hap = c1 + c2 + c3 + c4 + c5;
									printf("카드 합계 : %d\n", hap);
									//합 확인
									if (hap > 21) {
										printf("패배... (21이 넘었습니다. 포인트 -1)\n");
										point--;
										Sleep(stime);
										system("cls");
										continue;
									}
									else if (hap == 21) {
										printf("운빨 승리!!!... (21이 되었습니다. 포인트 +1)\n");
										point++;
										Sleep(stime);
										system("cls");
										continue;
									}
									else
										printf("이 게임에선 5장이 최대이므로 이 상태로 턴이 넘어갑니다...\n");

									//딜러 차례
									printf("딜러가 카드를 뽑습니다...\n");
									Sleep(stime);
									d1 = rand() % 13 + 1;
									printf("첫번째 카드 = %d\n", d1);
									d2 = rand() % 13 + 1;
									printf("두번째 카드 = %d\n", d2);
									dhap = d1 + d2;
									printf("딜러 카드 합계 : %d\n", dhap);
									//합 확인
									if (dhap > 21) {
										printf("딜러가 버스트했습니다!\n");
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("딜러 카드 합이 21이 되었습니다... (포인트 -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap <= 16) {//카드 추가1
										printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
										Sleep(stime);
										d3 = rand() % 13 + 1;
										printf("세번째 카드 = %d\n", d3);
										dhap = d1 + d2 + d3;
										printf("딜러 카드 합계 : %d\n", dhap);
										if (dhap > 21) {
											printf("딜러가 버스트했습니다!\n");
											printf("플레이어의 승리!!! (포인트 +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap == 21) {
											printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap <= 16) {//카드 추가2
											printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
											Sleep(stime);
											d4 = rand() % 13 + 1;
											printf("네번째 카드 = %d\n", d4);
											dhap = d1 + d2 + d3 + d4;
											printf("딜러 카드 합계 : %d\n", dhap);
											if (dhap > 21) {
												printf("딜러가 버스트했습니다!\n");
												printf("플레이어의 승리!!! (포인트 +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap == 21) {
												printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap <= 16) {//카드 추가3
												printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
												Sleep(stime);
												d5 = rand() % 13 + 1;
												printf("마지막 카드 = %d\n", d5);
												dhap = d1 + d2 + d3 + d4 + d5;
												printf("딜러 카드 합계 : %d\n", dhap); 
												if (dhap > 21) {
													printf("딜러가 버스트했습니다!\n");
													printf("플레이어의 승리!!! (포인트 +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (dhap == 21) {
													printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (dhap<21) {
													printf("카드 수가 5장에 도달했으므로 이 상태로 비교합니다...\n");
													Sleep(stime);
													//카드 비교
													printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
													if (hap > dhap) {
														printf("플레이어의 승리!!! (포인트 +5)\n");
														point++;
														point++;
														point++;
														point++;
														point++;
														Sleep(stime);
														system("cls");
													}
													else if (hap < dhap) {
														printf("플레이어의 패배... (포인트 -1)\n");
														point--;
														Sleep(stime);
														system("cls");
													}
													else {
														printf("비겼습니다! \n");
														Sleep(stime);
														system("cls");
													}
												}
											}
											else if (dhap > 17) {
												printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
												Sleep(stime);
												//카드 비교
												printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
												if (hap > dhap) {
													printf("플레이어의 승리!!! (포인트 +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (hap < dhap) {
													printf("플레이어의 패배... (포인트 -1)\n");
													point--;
													Sleep(stime);
													system("cls");
												}
												else {
													printf("비겼습니다! \n");
													Sleep(stime);
													system("cls");
												}
											}

										}
										else if (dhap > 17) {
											printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
											Sleep(stime);
											//카드 비교
											printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
											if (hap > dhap) {
												printf("플레이어의 승리!!! (포인트 +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (hap < dhap) {
												printf("플레이어의 패배... (포인트 -1)\n");
												point--;
												Sleep(stime);
												system("cls");
											}
											else {
												printf("비겼습니다! \n");
												Sleep(stime);
												system("cls");
											}
										}
									}
									else if (dhap > 17) {
									printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
									Sleep(stime);
									//카드 비교
									printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("플레이어의 패배... (포인트 -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("비겼습니다! \n");
										Sleep(stime);
										system("cls");
									}
											}

								}
								else{//딜러 차례
								printf("딜러가 카드를 뽑습니다...\n");
								Sleep(stime);
								d1 = rand() % 13 + 1;
								printf("첫번째 카드 = %d\n", d1);
								d2 = rand() % 13 + 1;
								printf("두번째 카드 = %d\n", d2);
								dhap = d1 + d2;
								printf("딜러 카드 합계 : %d\n", dhap);
								//합 확인
								if (dhap > 21) {
									printf("딜러가 버스트했습니다!\n");
									printf("플레이어의 승리!!! (포인트 +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap == 21) {
									printf("딜러 카드 합이 21이 되었습니다... (포인트 -1)\n");
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap <= 16) {//카드 추가1
									printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
									Sleep(stime);
									d3 = rand() % 13 + 1;
									printf("세번째 카드 = %d\n", d3);
									dhap = d1 + d2 + d3;
									printf("딜러 카드 합계 : %d\n", dhap);
									if (dhap > 21) {
										printf("딜러가 버스트했습니다!\n");
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap <= 16) {//카드 추가2
										printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
										Sleep(stime);
										d4 = rand() % 13 + 1;
										printf("네번째 카드 = %d\n", d4);
										dhap = d1 + d2 + d3 + d4;
										printf("딜러 카드 합계 : %d\n", dhap);
										if (dhap > 21) {
											printf("딜러가 버스트했습니다!\n");
											printf("플레이어의 승리!!! (포인트 +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap == 21) {
											printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (dhap <= 16) {//카드 추가3
											printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
											Sleep(stime);
											d5 = rand() % 13 + 1;
											printf("마지막 카드 = %d\n", d5);
											dhap = d1 + d2 + d3 + d4 + d5;
											printf("딜러 카드 합계 : %d\n", dhap);
											if (dhap > 21) {
												printf("딜러가 버스트했습니다!\n");
												printf("플레이어의 승리!!! (포인트 +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap == 21) {
												printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (dhap < 21) {
												printf("카드 수가 5장에 도달했으므로 이 상태로 비교합니다...\n");
												Sleep(stime);
												//카드 비교
												printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
												if (hap > dhap) {
													printf("플레이어의 승리!!! (포인트 +5)\n");
													point++;
													point++;
													point++;
													point++;
													point++;
													Sleep(stime);
													system("cls");
												}
												else if (hap < dhap) {
													printf("플레이어의 패배... (포인트 -1)\n");
													point--;
													Sleep(stime);
													system("cls");
												}
												else {
													printf("비겼습니다! \n");
													Sleep(stime);
													system("cls");
												}
											}
										}
										else if (dhap > 17) {
											printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
											Sleep(stime);
											//카드 비교
											printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
											if (hap > dhap) {
												printf("플레이어의 승리!!! (포인트 +5)\n");
												point++;
												point++;
												point++;
												point++;
												point++;
												Sleep(stime);
												system("cls");
											}
											else if (hap < dhap) {
												printf("플레이어의 패배... (포인트 -1)\n");
												point--;
												Sleep(stime);
												system("cls");
											}
											else {
												printf("비겼습니다! \n");
												Sleep(stime);
												system("cls");
											}
										}

									}
									else if (dhap > 17) {
										printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
										Sleep(stime);
										//카드 비교
										printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
										if (hap > dhap) {
											printf("플레이어의 승리!!! (포인트 +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (hap < dhap) {
											printf("플레이어의 패배... (포인트 -1)\n");
											point--;
											Sleep(stime);
											system("cls");
										}
										else {
											printf("비겼습니다! \n");
											Sleep(stime);
											system("cls");
										}
									}
								}
								else if (dhap > 17) {
									printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
									Sleep(stime);
									//카드 비교
									printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("플레이어의 패배... (포인트 -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("비겼습니다! \n");
										Sleep(stime);
										system("cls");
									}
								}
}
							}
						}
						else{//딜러 차례
						printf("딜러가 카드를 뽑습니다...\n");
						Sleep(stime);
						d1 = rand() % 13 + 1;
						printf("첫번째 카드 = %d\n", d1);
						d2 = rand() % 13 + 1;
						printf("두번째 카드 = %d\n", d2);
						dhap = d1 + d2;
						printf("딜러 카드 합계 : %d\n", dhap);
						//합 확인
						if (dhap > 21) {
							printf("딜러가 버스트했습니다!\n");
							printf("플레이어의 승리!!! (포인트 +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap == 21) {
							printf("딜러 카드 합이 21이 되었습니다... (포인트 -1)\n");
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap <= 16) {//카드 추가1
							printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
							Sleep(stime);
							d3 = rand() % 13 + 1;
							printf("세번째 카드 = %d\n", d3);
							dhap = d1 + d2 + d3;
							printf("딜러 카드 합계 : %d\n", dhap);
							if (dhap > 21) {
								printf("딜러가 버스트했습니다!\n");
								printf("플레이어의 승리!!! (포인트 +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap == 21) {
								printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap <= 16) {//카드 추가2
								printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
								Sleep(stime);
								d4 = rand() % 13 + 1;
								printf("네번째 카드 = %d\n", d4);
								dhap = d1 + d2 + d3 + d4;
								printf("딜러 카드 합계 : %d\n", dhap);
								if (dhap > 21) {
									printf("딜러가 버스트했습니다!\n");
									printf("플레이어의 승리!!! (포인트 +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap == 21) {
									printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (dhap <= 16) {//카드 추가3
									printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
									Sleep(stime);
									d5 = rand() % 13 + 1;
									printf("마지막 카드 = %d\n", d5);
									dhap = d1 + d2 + d3 + d4 + d5;
									printf("딜러 카드 합계 : %d\n", dhap);
									if (dhap > 21) {
										printf("딜러가 버스트했습니다!\n");
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap == 21) {
										printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (dhap < 21) {
										printf("카드 수가 5장에 도달했으므로 이 상태로 비교합니다...\n");
										Sleep(stime);
										//카드 비교
										printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
										if (hap > dhap) {
											printf("플레이어의 승리!!! (포인트 +5)\n");
											point++;
											point++;
											point++;
											point++;
											point++;
											Sleep(stime);
											system("cls");
										}
										else if (hap < dhap) {
											printf("플레이어의 패배... (포인트 -1)\n");
											point--;
											Sleep(stime);
											system("cls");
										}
										else {
											printf("비겼습니다! \n");
											Sleep(stime);
											system("cls");
										}
									}
								}
								else if (dhap > 17) {
									printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
									Sleep(stime);
									//카드 비교
									printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
									if (hap > dhap) {
										printf("플레이어의 승리!!! (포인트 +5)\n");
										point++;
										point++;
										point++;
										point++;
										point++;
										Sleep(stime);
										system("cls");
									}
									else if (hap < dhap) {
										printf("플레이어의 패배... (포인트 -1)\n");
										point--;
										Sleep(stime);
										system("cls");
									}
									else {
										printf("비겼습니다! \n");
										Sleep(stime);
										system("cls");
									}
								}

							}
							else if (dhap > 17) {
								printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
								Sleep(stime);
								//카드 비교
								printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
								if (hap > dhap) {
									printf("플레이어의 승리!!! (포인트 +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (hap < dhap) {
									printf("플레이어의 패배... (포인트 -1)\n");
									point--;
									Sleep(stime);
									system("cls");
								}
								else {
									printf("비겼습니다! \n");
									Sleep(stime);
									system("cls");
								}
							}
						}
						else if (dhap > 17) {
							printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
							Sleep(stime);
							//카드 비교
							printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
							if (hap > dhap) {
								printf("플레이어의 승리!!! (포인트 +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (hap < dhap) {
								printf("플레이어의 패배... (포인트 -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else {
								printf("비겼습니다! \n");
								Sleep(stime);
								system("cls");
							}
						}
}
					}
				}
				else{//딜러 차례
				printf("딜러가 카드를 뽑습니다...\n");
				Sleep(stime);
				d1 = rand() % 13 + 1;
				printf("첫번째 카드 = %d\n", d1);
				d2 = rand() % 13 + 1;
				printf("두번째 카드 = %d\n", d2);
				dhap = d1 + d2;
				printf("딜러 카드 합계 : %d\n", dhap);
				//합 확인
				if (dhap > 21) {
					printf("딜러가 버스트했습니다!\n");
					printf("플레이어의 승리!!! (포인트 +5)\n");
					point++;
					point++;
					point++;
					point++;
					point++;
					Sleep(stime);
					system("cls");
				}
				else if (dhap == 21) {
					printf("딜러 카드 합이 21이 되었습니다... (포인트 -1)\n");
					point++;
					Sleep(stime);
					system("cls");
				}
				else if (dhap <= 16) {//카드 추가1
					printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
					Sleep(stime);
					d3 = rand() % 13 + 1;
					printf("세번째 카드 = %d\n", d3);
					dhap = d1 + d2 + d3;
					printf("딜러 카드 합계 : %d\n", dhap);
					if (dhap > 21) {
						printf("딜러가 버스트했습니다!\n");
						printf("플레이어의 승리!!! (포인트 +5)\n");
						point++;
						point++;
						point++;
						point++;
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (dhap == 21) {
						printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (dhap <= 16) {//카드 추가2
						printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
						Sleep(stime);
						d4 = rand() % 13 + 1;
						printf("네번째 카드 = %d\n", d4);
						dhap = d1 + d2 + d3 + d4;
						printf("딜러 카드 합계 : %d\n", dhap);
						if (dhap > 21) {
							printf("딜러가 버스트했습니다!\n");
							printf("플레이어의 승리!!! (포인트 +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap == 21) {
							printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (dhap <= 16) {//카드 추가3
							printf("합이 16 이하이므로 한 장 더 뽑습니다...\n");
							Sleep(stime);
							d5 = rand() % 13 + 1;
							printf("마지막 카드 = %d\n", d5);
							dhap = d1 + d2 + d3 + d4 + d5;
							printf("딜러 카드 합계 : %d\n", dhap);
							if (dhap > 21) {
								printf("딜러가 버스트했습니다!\n");
								printf("플레이어의 승리!!! (포인트 +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap == 21) {
								printf("딜러 카드 합이 21이 되었습니다... 포인트 -1)\n");
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (dhap < 21) {
								printf("카드 수가 5장에 도달했으므로 이 상태로 비교합니다...\n");
								Sleep(stime);
								//카드 비교
								printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
								if (hap > dhap) {
									printf("플레이어의 승리!!! (포인트 +5)\n");
									point++;
									point++;
									point++;
									point++;
									point++;
									Sleep(stime);
									system("cls");
								}
								else if (hap < dhap) {
									printf("플레이어의 패배... (포인트 -1)\n");
									point--;
									Sleep(stime);
									system("cls");
								}
								else {
									printf("비겼습니다! \n");
									Sleep(stime);
									system("cls");
								}
							}
						}
						else if (dhap > 17) {
							printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
							Sleep(stime);
							//카드 비교
							printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
							if (hap > dhap) {
								printf("플레이어의 승리!!! (포인트 +5)\n");
								point++;
								point++;
								point++;
								point++;
								point++;
								Sleep(stime);
								system("cls");
							}
							else if (hap < dhap) {
								printf("플레이어의 패배... (포인트 -1)\n");
								point--;
								Sleep(stime);
								system("cls");
							}
							else {
								printf("비겼습니다! \n");
								Sleep(stime);
								system("cls");
							}
						}

					}
					else if (dhap > 17) {
						printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
						Sleep(stime);
						//카드 비교
						printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
						if (hap > dhap) {
							printf("플레이어의 승리!!! (포인트 +5)\n");
							point++;
							point++;
							point++;
							point++;
							point++;
							Sleep(stime);
							system("cls");
						}
						else if (hap < dhap) {
							printf("플레이어의 패배... (포인트 -1)\n");
							point--;
							Sleep(stime);
							system("cls");
						}
						else {
							printf("비겼습니다! \n");
							Sleep(stime);
							system("cls");
						}
					}
				}
				else if (dhap > 17) {
					printf("합이 17 이상이므로 이 상태로 비교합니다...\n");
					Sleep(stime);
					//카드 비교
					printf("플레이어 카드 : %d || 딜러 카드 : %d\n", hap, dhap);
					if (hap > dhap) {
						printf("플레이어의 승리!!! (포인트 +5)\n");
						point++;
						point++;
						point++;
						point++;
						point++;
						Sleep(stime);
						system("cls");
					}
					else if (hap < dhap) {
						printf("플레이어의 패배... (포인트 -1)\n");
						point--;
						Sleep(stime);
						system("cls");
					}
					else {
						printf("비겼습니다! \n");
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
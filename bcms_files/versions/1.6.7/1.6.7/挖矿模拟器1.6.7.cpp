#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
//void read(string xk, long long rmb, long long wh);
//void wirte(string xk, long long rmb, long long wh);
int main()
{
	int y = 2022;
	int m = 1;
	int d = 1;
	int i = 0;
	int n = 0;
	int s = 0;
	int t = 10000;
	int l = 72;
	int cel = 0;
	int bd = 0;
	int inm;
	int c = 0;
	int xkm = 1;
	int mod = 0;
	int b_yuan = 36000;
	int lx = 1;
	char in;
	long long w = 0;
	long long wh = 100;
	long long rmb = 0;
	long long um = 0;
	long long um_temp = 0;
	string xk = "GTX1060";
	string key = "FJKHF";
	string ms_server = "";
	cout << "|        Loading ������        |";
	Sleep(5000);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "|         finish  ���         |";
	Sleep(100);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	//read(xk, rmb, wh);
	cout << endl;
	cout << "��ӭ�����ڿ�ģ����1.6.7��Ϊ�������Ÿ��õ����飬��ʹ��֮ǰ���������²�����" << endl;
	cout << "1.�ڶ��������ͣ" << endl;
	cout << "2.����" << endl;
	cout << "3.�Ƿ����DLC" << endl;
	cout << "4.����ķ�����" << endl;
	Sleep(3000);
	cout << "1.�ڶ��������ͣ   ���������������������ĸ�������������";
	cin >> wh;
	cout << endl;
	cout << "2.���ԣ�" << endl;
	cout << "A.��������   B.English" << endl;
	cin >> in;
	if (in == 'A' || in == 'a')
	{
		cel = 0;
	}
	else if (in == 'B' || in == 'b')
	{
		cel = 1;
	}
	if (cel == 0)
	{
		cout << "3.�Ƿ����DLC" << endl;
		cout << "A.�����DLC" << endl;
		cin >> in;
	}
	else if (cel == 1)
	{
		cout << "3. Whether to add DLC" << endl;
		cout << "A. Do not add DLC" << endl;
		cin >> in;
	}
	if (cel == 0)
	{
		int think_wh = 0;
		while (think_wh == 0)
		{
			cout << "4.����ķ�����" << endl;
			cout << "A.�Ǽ�I��" << endl;
			cout << "B.�Ǽ�II��" << endl;
			cout << "C.�Ǽ�III��" << endl;
			cout << "D.ŷ��I��" << endl;
			cout << "E.����˹I��" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "�Ƿ���롰�Ǽ�I������" << endl;
				cout << "A.����   B.��������" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "����ɹ�����ǰ�����������Ǽ�I����" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "�Ǽ�I��";
				}
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "�Ƿ���롰�Ǽ�II������" << endl;
				cout << "A.����   B.��������" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "����ɹ�����ǰ�����������Ǽ�II����" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "�Ǽ�II��";
				}
			}
			else if (in == 'C' || in == 'c')
			{
				cout << "�Ƿ���롰�Ǽ�III������" << endl;
				cout << "A.����   B.��������" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "����ɹ�����ǰ�����������Ǽ�III����" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "�Ǽ�III��";
				}
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "�Բ��𣬱�������ŷ�ޣ�������˹���������û�ʹ�á�" << endl;
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "�Բ��𣬱�����������˹�������û�ʹ�á�" << endl;
			}
			else if (in == 'Z' || in == 'z')
			{
				cout << "���ڽ�������ģʽ......" << endl;
				cout << "��������������Դ......��1573MB|Ԥ����ʱ10���ӣ�" << endl;
				Sleep(600000);
				cout << "���ڽ�ѹ��Դ......��1573MB ��������ѹ�󡷡��� 1747MB|Ԥ����ʱ1���ӣ�" << endl;
				Sleep(60000);
				cout << "���ڰ�װ......��1747MB|Ԥ����ʱ3���ӣ�" << endl;
				Sleep(180000);
				cout << "��װ�ɹ�������������Ϸ�������ֶ���������" << endl;
				Sleep(5000);
				cout << "|        Loading ������        |";
				Sleep(5000);
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				cout << "|         finish  ���         |";
				Sleep(100);
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				//read(xk, rmb, wh);
				cout << endl;
				cout << "��ӭ�����ڿ�ģ����1.6.7��Ϊ�������Ÿ��õ����飬��ʹ��֮ǰ���������²�����" << endl;
				cout << "1.�ڶ��������ͣ" << endl;
				cout << "2.����" << endl;
				cout << "3.�Ƿ����DLC" << endl;
				Sleep(3000);
				cout << "1.�ڶ��������ͣ   ���������������������ĸ�������������";
				cin >> wh;
				cout << endl;
				cout << "2.���ԣ�" << endl;
				cout << "A.��������   B.English" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cel = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					cel = 1;
				}
				if (cel == 0)
				{
					cout << "3.�Ƿ����DLC" << endl;
					cout << "A.�����DLC" << endl;
					cin >> in;
				}
				else if (cel == 1)
				{
					cout << "3. Whether to add DLC" << endl;
					cout << "A. Do not add DLC" << endl;
					cin >> in;
				}
			}
		}
	}
	else if (cel == 1)
	{
		int think_wh = 0;
		while (think_wh == 0)
		{
			cout << "4. Play server" << endl;
			cout << "A. XINGJI I Suit" << endl;
			cout << "B. XINGJI II Suit" << endl;
			cout << "C. XINGJI III Suit" << endl;
			cout << "D. Europe I Suit" << endl;
			cout << "E. Russian I Suit" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'C' || in == 'v')
			{
				cout << "Sorry, this service is only for users in Aisa." << endl;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "Do you want to join the ��Europe I Suit?��" << endl;
				cout << "A. Join B. I think again" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cout << "Join success! Current Server: [Europe I Suit]" << endl;
					Sleep(1000);
					think_wh = 1;
					ms_server = "Europe I Suit";
				}
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "Sorry, this service is only for users in Russia." << endl;
			}
		}
	}
	if (cel == 0)
	{
		cout << "���ڱ���������......" << endl;
		Sleep(1000);
		cout << "����ɹ���" << endl;
		Sleep(500);
		cout << "|==========�ڿ�ģ����1.6.7==========|" << endl;
		cout << "| P O W E R E D   B Y   X I N G J I |" << endl;
		cout << "|         >>> ���ڼ����� <<<        |" << endl;
		Sleep(1500);
	}
	else if (cel == 1)
	{
		cout << "Saving settings..." << endl;
		Sleep(1000);
		cout << "Save successful!" << endl;
		Sleep(500);
		cout << "|=========Mining Simulator 1.6.7==========|" << endl;
		cout << "|    P O W E R E D   B Y   X I N G J I    |" << endl;
		cout << "|             >>> loading <<<             |" << endl;
		Sleep(1500);
	}
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	cout << endl;
	Sleep(100);
	in = 0;
	while (true)
	{
			if (cel == 0)
			{
				cout << "*********************************************" << endl;
				cout << "*                                           *" << endl;
				cout << "*    �ڿ�ģ���� 1.6.7 for XINGJI STUDIOS    *" << endl;
				cout << "*                                           *" << endl;
				cout << "*********************************************" << endl;
				cout << " A.��ʼ   B.�˳�   C.����   D.�̵�   E.�ʼ� " << endl;
			}
			else if (cel == 1)
			{
				cout << "*******************************************************" << endl;
				cout << "*                                                     *" << endl;
				cout << "*      Mining simulator 1.6.7 for XINGJI STUDIOS      *" << endl;
				cout << "*                                                     *" << endl;
				cout << "*******************************************************" << endl;
				cout << " A.Start game   B.Exit   C.Settings   D.Shop   E.Mail " << endl;
			}
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				c = 1;
			}
			else if (in == 'B' || in == 'b')
			{
				//write(xk, rmb, wh);
				cout << " | ��л�������ڿ�ģ���� | " << endl;
				cout << " |      �����˳���      | " << endl;
				Sleep(1000);
				return 0;
			}
			else if (in == 'C' || in == 'c')
			{
				c = 2;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "��ѡ�����ͣ�A.���" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					if (cel == 0)
					{
						cout << "Ǯ����" << rmb << "��" << endl;
						cout << "��ǰ�����" << xk << "(��" << xkm << "��)" << endl;
						cout << "A | RTX1080   |  6099�� |" << endl;
						cout << "B | RTX1080Ti |  7000�� |" << endl;
						cout << "C | RTX2080   | 13988�� |" << endl;
						cout << "D | RTX2080Ti | 11999�� |" << endl;
						cout << "E | RTX3070   | 15000�� |" << endl;
						cout << "F | RTX3080   | 20000�� |" << endl;
						cout << "G | RTX3090   | 30000�� |" << endl;
						cout << "H | RX6900XT  | 20000�� |" << endl;
						cout << "I | XG6800    | 21000�� |" << endl;
						cout << "J | XG6800PL  | 30000�� |" << endl;
						cout << "K | XG6800PR  | 50000�� |" << endl;
						cout << "L | ANT 2.0   |   3�ڣ� |" << endl;
						cout << "M | XMC88000  |   3�ڣ� |" << endl;
						cout << "N | XMC88888  |   5�ڣ� |" << endl;
						cout << "O | RTX2080P  | 13988�� |" << endl;
						cout << "P | RTX2080S  |  7999�� |" << endl;
						cout << "Q | RTX2080X  | 20000�� |" << endl;
						cout << "R | RTX3070Ti | 12800�� |" << endl;
						cout << "S | RTX3060   |  9000�� |" << endl;
						cout << "T | XMC2022   | 20220�� |" << endl;
						cout << "U | XMC2021   | 20210�� |" << endl;
						cout << "V | XG8000    |   8�ڣ� |" << endl;
						cout << "W | XG8200    | 8.2�ڣ� |" << endl;
					}
					else if (cel == 1)
					{
						cout << "Purse��" << rmb * 0.16 << "$" << endl;
						cout << "Current miner��" << xk << "(��" << xkm << "��)" << endl;
						cout << "A | RTX1080   |        958$ |" << endl;
						cout << "B | RTX1080Ti |       1099$ |" << endl;
						cout << "C | RTX2080   |       2197$ |" << endl;
						cout << "D | RTX2080Ti |       1884$ |" << endl;
						cout << "E | RTX3070   |       2355$ |" << endl;
						cout << "F | RTX3080   |       3141$ |" << endl;
						cout << "G | RTX3090   |       4711$ |" << endl;
						cout << "H | RX6900XT  |       3141$ |" << endl;
						cout << "I | XG6800    |       3298$ |" << endl;
						cout << "J | XG6800PL  |       4711$ |" << endl;
						cout << "K | XG6800PR  |       7852$ |" << endl;
						cout << "L | ANT 2.0   |  47 million |" << endl;
						cout << "M | XMC88000  |  47 million |" << endl;
						cout << "N | XMC88888  |  78 million |" << endl;
						cout << "O | RTX2080P  |       2199$ |" << endl;
						cout << "P | RTX2080S  |       1258$ |" << endl;
						cout << "Q | RTX2080X  |       3145$ |" << endl;
						cout << "R | RTX3070Ti |       2013$ |" << endl;
						cout << "S | RTX3060   |       1415$ |" << endl;
						cout << "T | XMC2022   |       3019$ |" << endl;
						cout << "U | XMC2021   |       3018$ |" << endl;
						cout << "V | XG8000    | 120 million |" << endl;
						cout << "W | XG8200    | 122 million |" << endl;
					}
					cin >> in;
					if (cel == 0)
					{
						if (in == 'A' || in == 'a')
						{
							t = t - xkm * 5;
							xk = "RTX1080";
							rmb = rmb - 6099;
							xkm++;
						}
						else if (in == 'B' || in == 'b')
						{
							t = t - xkm * 7;
							xk = "RTX1080Ti";
							rmb = rmb - 7000;
							xkm++;
						}
						else if (in == 'C' || in == 'c')
						{
							t = t - xkm * 20;
							xk = "RTX2080";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'D' || in == 'd')
						{
							t = t - xkm * 10;
							xk = "RTX2080Ti";
							rmb = rmb - 11999;
							xkm++;
						}
						else if (in == 'E' || in == 'e')
						{
							t = t - xkm * 50;
							xk = "RTX3070";
							rmb = rmb - 15000;
							xkm++;
						}
						else if (in == 'F' || in == 'f')
						{
							t = t - xkm * 100;
							xk = "RTX3080";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'G' || in == 'g')
						{
							t = t - xkm * 500;
							xk = "RTX3090";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'H' || in == 'h')
						{
							t = t - xkm * 500;
							xk = "RX6900XT";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'I' || in == 'i')
						{
							t = t - xkm * 500;
							xk = "XG6800";
							rmb = rmb - 21000;
							xkm++;
						}
						else if (in == 'J' || in == 'j')
						{
							t = t - xkm * 1000;
							xk = "XG6800PL";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'K' || in == 'k')
						{
							t = t - xkm * 2000;
							xk = "XG6800PR";
							rmb = rmb - 50000;
							xkm++;
						}
						else if (in == 'L' || in == 'l')
						{
							t = t - xkm * 4000;
							xk = "ANT 2.0";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'M' || in == 'N')
						{
							t = t - xkm * 4000;
							xk = "XMC88000";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'N' || in == 'n')
						{
							t = 0;
							xk = "XMC888888";
							rmb = rmb - 500000000;
							xkm++;
						}
						else if (in == 'O' || in == 'o')
						{
							t = t - xkm * 25;
							xk = "RTX2080P";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'P' || in == 'p')
						{
							t = t - xkm * 15;
							xk = "RTX2080S";
							rmb = rmb - 7999;
							xkm++;
						}
						else if (in == 'Q' || in == 'q')
						{
							t = t - xkm * 30;
							xk = "RTX2080S";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'R' || in == 'r')
						{
							t = t - xkm * 25;
							xk = "RTX3070Ti";
							rmb = rmb - 12800;
							xkm++;
						}
						else if (in == 'S' || in == 's')
						{
							t = t - xkm * 20;
							xk = "RTX3060";
							rmb = rmb - 9000;
							xkm++;
						}
						else if (in == 'T' || in == 't')
						{
							t = t - xkm * 50;
							xk = "XMC2022";
							rmb = rmb - 20220;
							xkm++;
						}
						else if (in == 'U' || in == 'u')
						{
							t = t - xkm * 40;
							xk = "XMC2021";
							rmb = rmb - 20210;
							xkm++;
						}
						else if (in == 'V' || in == 'v')
						{
							t = 0;
							xk = "XG8000";
							rmb = rmb - 800000000;
							xkm++;
							l = l / 2;
						}
						else if (in == 'W' || in == 'w')
						{
							t = 0;
							xk = "XG8200";
							rmb = rmb - 820000000;
							xkm++;
							l = l / 4;
						}
					}
					if (cel == 1)
					{
						if (in == 'A' || in == 'a')
						{
							t = t - xkm * 5;
							xk = "RTX1080";
							rmb = rmb - 6099;
							xkm++;
						}
						else if (in == 'B' || in == 'b')
						{
							t = t - xkm * 7;
							xk = "RTX1080Ti";
							rmb = rmb - 7000;
							xkm++;
						}
						else if (in == 'C' || in == 'c')
						{
							t = t - xkm * 20;
							xk = "RTX2080";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'D' || in == 'd')
						{
							t = t - xkm * 10;
							xk = "RTX2080Ti";
							rmb = rmb - 11999;
							xkm++;
						}
						else if (in == 'E' || in == 'e')
						{
							t = t - xkm * 50;
							xk = "RTX3070";
							rmb = rmb - 15000;
							xkm++;
						}
						else if (in == 'F' || in == 'f')
						{
							t = t - xkm * 100;
							xk = "RTX3080";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'G' || in == 'g')
						{
							t = t - xkm * 500;
							xk = "RTX3090";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'H' || in == 'h')
						{
							t = t - xkm * 500;
							xk = "RX6900XT";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'I' || in == 'i')
						{
							t = t - xkm * 500;
							xk = "XG6800";
							rmb = rmb - 21000;
							xkm++;
						}
						else if (in == 'J' || in == 'j')
						{
							t = t - xkm * 1000;
							xk = "XG6800PL";
							rmb = rmb - 30000;
							xkm++;
						}
						else if (in == 'K' || in == 'k')
						{
							t = t - xkm * 2000;
							xk = "XG6800PR";
							rmb = rmb - 50000;
							xkm++;
						}
						else if (in == 'L' || in == 'l')
						{
							t = t - xkm * 4000;
							xk = "ANT 2.0";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'M' || in == 'N')
						{
							t = t - xkm * 4000;
							xk = "XMC88000";
							rmb = rmb - 300000000;
							xkm++;
						}
						else if (in == 'N' || in == 'n')
						{
							t = 0;
							xk = "RX6900XT";
							rmb = rmb - 500000000;
							xkm++;
						}
						else if (in == 'O' || in == 'o')
						{
							t = t - xkm * 25;
							xk = "RTX2080P";
							rmb = rmb - 13988;
							xkm++;
						}
						else if (in == 'P' || in == 'p')
						{
							t = t - xkm * 15;
							xk = "RTX2080S";
							rmb = rmb - 7999;
							xkm++;
						}
						else if (in == 'Q' || in == 'q')
						{
							t = t - xkm * 30;
							xk = "RTX2080S";
							rmb = rmb - 20000;
							xkm++;
						}
						else if (in == 'R' || in == 'r')
						{
							t = t - xkm * 25;
							xk = "RTX3070Ti";
							rmb = rmb - 12800;
							xkm++;
						}
						else if (in == 'S' || in == 's')
						{
							t = t - xkm * 20;
							xk = "RTX3060";
							rmb = rmb - 9000;
							xkm++;
						}
						else if (in == 'T' || in == 't')
						{
							t = t - xkm * 50;
							xk = "XMC2022";
							rmb = rmb - 20220;
							xkm++;
						}
						else if (in == 'U' || in == 'u')
						{
							t = t - xkm * 40;
							xk = "XMC2021";
							rmb = rmb - 20210;
							xkm++;
						}
						else if (in == 'V' || in == 'v')
						{
							t = 0;
							xk = "XG8000";
							rmb = rmb - 800000000;
							xkm++;
							l = l / 2;
						}
						else if (in == 'W' || in == 'w')
						{
							t = 0;
							xk = "XG8200";
							rmb = rmb - 820000000;
							xkm++;
							l = l / 4;
						}
					}
				}
				if (l < 1)
				{
					l = 1;
				}
				if (rmb < 0 && rmb >= -10000)
				{
					if (cel == 0)
					{
						cout << "���ǵ����Ĳ��ף��Ǽ������ṩ���͸֧����͸֧�������-10000����" << endl;
						cout << "ף��������죡" << endl << endl;
						cout << "�й��Ǽʹ��ʿƼ����޹�˾ ���ڲ�" << endl;
						cout << y << "��" << m << "��" << d << "��" << endl;
					}
					else if (cel == 1)
					{
						cout << "Considering your difficulties, XINGJI Bank provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
						cout << "Have a nice day!" << endl << endl;
						cout << "China XINGJI International Technology Co.Ltd.   Finance Department" << endl;
						cout << m << "/" << d << "/" << y << endl;
					}
				}
				else if (rmb < -10000)
				{
					cout << "���ѳ������͸֧��ȣ����� %0.5/�� ����Ϣ���㡣" << endl;
					cout << "If you have exceeded your free overdraft limit, interest will be calculated at %1/day." << endl;
					um = um + abs(rmb);
				}
				if (t < 0)
				{
					t = 0;
				}
			}
			if (in == 'E' || in == 'e')
			{
				cout << "Sorry, this section has not been updated in English." << endl;
				cout << endl;
				cout << "���ʼ���������" << endl;
				cout << "XINGJI(R)-�������� & �ڿ�ģ����������" << endl;
				cout << "9�£��Ǽʼ��ų����������ˣ�����Ϊ���пͻ���������������+�������" << endl;
				cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*9w�����ر�*1" << endl;
				cout << endl;
				cout << "���ʼ����������" << endl;
				cout << "���й�����73����" << endl;
				cout << "1949��10��1�գ����й������ˣ����־���й�����վ�����ˣ��������⻶��" << endl;
				cout << "�Ľ�����Ϊ����������" << endl;
				cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*10w�����ر�*1" << endl;
				cout << endl;
				cout << "���ʼ���««���տ���" << endl;
				cout << "XINGJI(R)�����³�««���տ���" << endl;
				cout << "10��12����««�����գ�ף««���տ��֣�����" << endl;
				cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*10w�����ر�*12" << endl;
				cout << endl;
				cout << "���ʼ���ͣ������" << endl;
				cout << "�ڿ�ģ����������" << endl;
				cout << "����««�����ռ���ά��ʱ���ѵ����Ǽʷ���������10��1����10��13���޷�" << endl;
				cout << "���棬��л������⣡лл����ʱ��ҿ��Ե�¼���ڿ�ģ������������ģʽ��" << endl;
				cout << "�����档��������ģʽ��������ѯ�ʡ���ѡ������ķ�������ʱ���롰Z����" << endl;
				cout << "������ģʽ��" << endl;
				cin >> in;
				cout << "��ȡ�ɹ�������" << endl;
				rmb = rmb + 290000;
				s = s + 14;
			}
			if (rmb < 0 && rmb >= -10000)
			{
				if (cel == 0)
				{
					cout << "���ǵ����Ĳ��ף��Ǽ������ṩ���͸֧����͸֧�������-10000����" << endl;
					cout << "ף��������죡" << endl << endl;
					cout << "�й��Ǽʹ��ʿƼ����޹�˾ ���ڲ�" << endl;
					cout << y << "��" << m << "��" << d << "��" << endl;
				}
				else if (cel == 1)
				{
					cout << "Considering your difficulties, XINGJI Bank provides free overdraft service (maximum overdraft limit - 1575$)" << endl;
					cout << "Have a nice day!" << endl << endl;
					cout << "China XINGJI International Technology Co.Ltd.   Finance Department" << endl;
					cout << m << "/" << d << "/" << y << endl;
				}
			}
			else if (rmb < -10000)
			{
				cout << "���ѳ������͸֧��ȣ����� %1/�� ����Ϣ���㡣" << endl;
				cout << "If you have exceeded your free overdraft limit, interest will be calculated at %1/day." << endl;
				um = um + abs(rmb);
			}
			if (t < 0)
			{
				t = 0;
			}
		if (c == 2)
		{
			if (cel == 0)
			{
				cout << "A.��������Զ���ͣ   B.������־   C.����   D.DLC����   E.����   F.����   G.�ڿ�ģʽ   H.VIP   I.�һ���" << endl;
				cout << "A:" << wh << endl;
				cout << "��ѡ��Ҫ���ĵ���Ŀ��";
			}
			else if (cel == 1)
			{
				cout << "A.How many entries are automatically paused after   B.Changelog   C.About   D.DLC import   E.Language   F.Loan   G.Mining mode   H.VIP   I.Key" << endl;
				cout << "A:" << wh << endl;
				cout << "Please select the item you want to change:";
			}
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cin >> inm;
				wh = inm;
			}
			else if (in == 'B' || in == 'b')
			{
				if (cel == 0)
				{
					cout << "================ XINGJI Update ================" << endl;
					cout << "1.6.7���� - ģʽ����" << endl;
					cout << "���ӳ�ϵͳ�¼�ά��" << endl; 
					cout << "��ȫ�¡�����ģʽ��" << endl;	
					cout << "���һ���ϵͳ����" << endl;	
					cout << "1.6.5 & 1.6.6 - ������/���죨���գ�����" << endl;
					cout << "�������ʼ�����" << endl;
					cout << "���������û������������ʼ�" << endl;
					cout << "1.6.4���� - ���ܸ���" << endl;
					cout << "���������ܿ�8��" << endl;
					cout << "���������ܿ��ӳɹ���" << endl;
					cout << "�������齱���ܣ���δ���ƣ��ڶ����ֽ���Ӣ�ĸ��µڶ�����һ����£�" << endl;
					cout << "1.6.3���� - ��������" << endl;
					cout << "�������˷�������������" << endl;
					cout << "��������5������������" << endl;
					cout << "�������˸���Ԥ�湦��" << endl;
					cout << "1.6.2���� - �Կ�����" << endl;
					cout << "��������4���Կ�" << endl;
					cout << "�������˲����Կ��������ڿ�ɹ�����" << endl;
					cout << "�������˸������⣨��δ���Ӣ�İ棩" << endl;
					cout << "���ӱ��θ����𽫱���ÿ�θ���ǰ�İ汾" << endl;
					cout << "���޸��˼��ʴ���100%���µı�������" << endl;
					cout << "1.6.1���� - ��ʼ������" << endl;
					cout << "�������˳�ʼ��ҳ��" << endl;
					cout << "��ɾ����XMC2022�Կ�" << endl;
					cout << "���޸���ռ���ʹ��ߵ��µı������⣨��Ȼռ������Ȼ�ܸ�......��" << endl;
					cout << "1.6.0���� - �浵����" << endl;
					cout << "�������˴浵���湦��" << endl;
					cout << "���޸���һЩ��֪BUG" << endl;
					cout << "1.5.9���� - ���ڸ���" << endl;
					cout << "��������͸֧����" << endl;
					cout << "1.5.8���� - ���¸���" << endl;
					cout << "����������5�Կ�" << endl;
					cout << "��Ϊ��ף�������»�������XMC2022�Կ�����ѣ������½����󸶷ѣ�" << endl;
					cout << "1.5.6��1.5.7���� - Ӣ�ĸ���" << endl;
					cout << "�������Ӣ��" << endl;
					cout << "1.5.5���� - �Կ�����" << endl;
					cout << "��������6���Կ�" << endl;
					cout << "1.5.4���� - �������" << endl;
					cout << "��������DLC" << endl;
					cout << "���޸��˳ɹ�����ֵ�෴��BUG" << endl;
					cout << "���޸���ֻ����ͣһ�ε�BUG" << endl;
					cout << "1.5.3���� - ���׸���" << endl;
					cout << "���������̵�" << endl;
					cout << "��ɾ�����Զ�����" << endl;
					cout << "��������8���Կ�" << endl;
					cout << "1.5.2���� - ���¸���" << endl;
					cout << "���������Զ�����" << endl;
					cout << "1.5.1���� - �Ż�����" << endl;
					cout << "�������˼�����" << endl;
					cout << "���Ż��˴���" << endl;
					cout << "���޸���������������" << endl;
					cout << "1.5.0���� - �ʵ�����" << endl;
					cout << "�������˲ʵ�" << endl;
					cout << "���汾��������λ��" << endl;
					cout << "1.4.0���� - �ش����" << endl;
					cout << "���޸��˴���İ汾��" << endl;
					cout << "�����������" << endl;
					cout << "���Ż��˴���" << endl;
					cout << "������˸�����־" << endl;
					cout << "���������ͣ����" << endl;
					cout << "������˶�ʱ��ͣ" << endl;
					cout << "���ɹ����ʿɵ���" << endl;
					cout << "��ÿ����ʱ��ɵ���" << endl;
					cout << "1.3.0���� - ��ʼ����" << endl;
					cout << "�������˿�ʼ����" << endl;
					cout << "���Ż��˴���" << endl;
					cout << "���޸����˰�װ����������" << endl;
					cout << "1.2.0���� - ʱ�����" << endl;
					cout << "�������˰�װ��" << endl;
					cout << "���޸���ʱ���������" << endl;
					cout << "1.1.0���� - �������" << endl;
					cout << "��������ʱ��" << endl;
					cout << "���޸����޷����е�����" << endl;
					cout << "���޸���û��sln�ļ������������õ�����" << endl;
					cout << "1.0.0���� - Ӧ�ø���" << endl;
					cout << "��������Ӧ��" << endl;
				}
				else if (cel == 1)
				{
					cout << "================ XINGJI Update ================" << endl;
					cout << "��Update 1.6.7 - Schema Update" << endl;
					cout << "��Bonus System Removal Maintenance" << endl;
					cout << "��New Offline Mode" << endl;	
					cout << "��Redeem code system on" << endl;
					cout << "1.6.5 & 1.6.6 - Anniversary / National Day (Birthday) Update" << endl;
					cout << "��New Mail Function" << endl;
					cout << "��Sent a gift email to all users" << endl;
					cout << "1.6.4 Update - Skills Update" << endl;
					cout << "��8 new skill cards" << endl;
					cout << "��Add skill card bonus" << endl;
					cout << "�� New sweepstakes feature (not yet perfect, part 2 will be updated in English with part 2)" << endl;
					cout << "1.6.3 Update - Partition Update" << endl;
					cout << "��Server partitioning feature added" << endl;
					cout << "��5 new server partitions" << endl;
					cout << "��New update trailer feature" << endl;
					cout << "1.6.2 Update" << endl;
					cout << "��4 new graphics cards" << endl;
					cout << "��Added some graphics cards to increase the probability of mining success" << endl;
					cout << "��New updated topic (English version not added yet)" << endl;
					cout << "��From this update will retain the version before each update" << endl;
					cout << "��Fixed crashes caused by a chance greater than 100%" << endl;
					cout << "1.6.1 Update" << endl;
					cout << "��An initialization page has been added" << endl;
					cout << "��The XMC2022 graphics card was removed" << endl;
					cout << "��Fixed a crash issue caused by high occupancy (although occupancy is still high...) " << endl;
					cout << "1.6.0 Update" << endl;
					cout << "��Added archive saving function" << endl;
					cout << "��Fixed some known bugs" << endl;
					cout << "1.5.9 Update" << endl;
					cout << "��Overdraft feature added" << endl;
					cout << "1.5.8 update" << endl;
					cout << "��Added 5 new graphics cards" << endl;
					cout << "��Added XMC2022 graphics card(free)to celebrate the Beijing Winter Olympics(paid after the Winter Olympics)" << endl;
					cout << "1.5.6 and 1.5.7 update" << endl;
					cout << "��Added English" << endl;
				}
			}
			else if (in == 'C' || in == 'c')
			{
				if (cel == 0)
				{
					cout << "===================================================" << endl;
					cout << "  ���ƣ��ڿ�ģ����               ��������Dev-C++   " << endl;
					cout << "  �汾��1.6.7     ��д����Microsoft Visual Studio  " << endl;
					cout << "  �����̣�XINGJI(R) Co.Inc.                        " << endl;
					cout << "  ��ţ�" << key << "                        ��С��2.83MB  " << endl;
					cout << "      ��Ȩ���� XINGJI(R) Co.Itd. ��������Ȩ��      " << endl;
					cout << "===================================================" << endl;
				}
				else if (cel == 1)
				{
					cout << "===================================================" << endl;
					cout << "  name:Mining simulator         Compiler:Dev-C++   " << endl;
					cout << "  Version:1.6.7    Writer:Microsoft Visual Studio  " << endl;
					cout << "  Developer:XINGJI(R) Co. Inc.                     " << endl;
					cout << "  Number:" << key << "                        Size:2.83MB  " << endl;
					cout << "  Copyright XINGJI(R) Co.Itd. All rights reserved  " << endl;
					cout << "===================================================" << endl;
				}
				Sleep(1000);
			}
			else if (in == 'D' || in == 'd')
			{
				if (cel == 0)
				{
					cout << "�뽫DLC�ļ��ŵ� | C�� > Program Files > �ڿ�ģ���� > DLC | �ļ����º�����A�򿪣�����B�˳�" << endl;
					cin >> in;
					if (in == 'A' || in == 'a')
					{
						cout << "��ѡ��DLC��A.���޽�Ǯ" << endl;
						cin >> in;
						if (in == 'A' || in == 'a')
						{
							cout << "���ڰ�װ��" << endl;
							Sleep(1000);
							system("c:\\Program Files\\�ڿ�ģ����\\DLC\\DLC1\\DLC.exe");
							return 0;
						}
					}
				}
				else if (cel == 1)
				{
					cout << "Please place the DLC file in | C drive > Program Files > �ڿ�ģ���� > DLC | After the folder is down, enter A to open; enter B to exit" << endl;
					cin >> in;
					if (in == 'A' || in == 'a')
					{
						cout << "Please select DLC:A.Unlimited Money" << endl;
						cin >> in;
						if (in == 'A' || in == 'a')
						{
							cout << "Installing" << endl;
							Sleep(1000);
							system("c:\\Program Files\\�ڿ�ģ����\\DLC\\DLC1\\DLC.exe");
							return 0;
						}
					}
				}
			}
			else if (in == 'E' || in == 'e')
			{
				cout << "A.��������   B.English" << endl;
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					cel = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					cel = 1;
				}
			}
			else if (in == 'F' || in == 'f')
			{
				if (cel == 0)
				{
					cout << "���������Ĵ����ȣ���Ϣ1%/�죩��" << endl;
				}
				else if (cel == 1)
				{
					cout << "Please enter your loan amount (interest 1%/day):" << endl;
				}
				cin >> inm;
				um = um + inm;
			}
			else if (in == 'G' || in == 'g')
			{
				if (cel == 0)
				{
					cout << "��ѡ��ģʽ      ��ǰģʽ ���Ǳ��ڿ�" << endl;
					cout << "        A.���ر�   B.���Ǳ�        " << endl;
				}
				else if (cel == 1)
				{
					cout << "Please select the mode   current mode Chiacoin mining" << endl;
					cout << "               A.Bitcoin   B.Chiacoin               " << endl;
				}
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					if (cel == 0)
					{
						cout << "�л��ɹ�" << endl;
					}
					else if (cel == 1)
					{
						cout << "The switch was successful" << endl;
					}
					mod = 0;
				}
				else if (in == 'B' || in == 'b')
				{
					if (cel == 0)
					{
						cout << "�л��ɹ�" << endl;
					}
					else if (cel == 1)
					{
						cout << "The switch was successful" << endl;
					}
					mod = 1;
				}
			}
			else if (in == 'H' || in == 'h')
			{
				if (cel == 0)
				{
					cout << "XINGJI VIP(����)   ���� 5 RMB" << endl;
				}
				else if (cel == 1)
				{
					cout << "XINGJI VIP   It only costs 1$" << endl;
				}
			}
			else if (in == 'I' || in == 'i')
			{
			string m_on_key_word = "";
				cout << "������һ��룺";
				cin >> m_on_key_word;
				cout << endl;
				if (m_on_key_word == "167YYDSX2073")
				{
					cout << "��ã�" << endl << "Ǯ*11451�����ر�*4" << endl;
					rmb = rmb + 11451;
					s = s + 4;
				}
				else if (m_on_key_word == "376CZXCF7732")
				{
					cout << "��ã�" << endl << "Ǯ*8888�����ر�*8" << endl;
					rmb = rmb + 8888;
					s = s + 8;
				}
				else if (m_on_key_word == "789CZKCT8601")
				{
					cout << "��ã�" << endl << "Ǯ*6666�����ر�*6" << endl;
					rmb = rmb + 6;
					s = s + 6;
				}
			}
		}
		while (c == 1)
		{
			srand((int)time(0));
			l = rand() % 160;
			bd = d;
			w++;
			if (y % 4 == 0 && y != 0)
			{
				if (m == 2)
				{
					if (d == 29)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 12)
				{
					if (d == 31)
					{
						y++;
						d = 1;
						m = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				{
					if (d == 31)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 4 || m == 6 || m == 9 || m == 11)
				{
					if (d == 30)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
			}
			else
			{
				if (m == 2)
				{
					if (d == 29)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 12)
				{
					if (d == 31)
					{
						y++;
						d = 1;
						m = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				{
					if (d == 31)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
				else if (m == 4 || m == 6 || m == 9 || m == 11)
				{
					if (d == 30)
					{
						m++;
						d = 1;
					}
					else
					{
						d++;
					}
				}
			}
			i++;
			if (bd != d)
			{
				um = um + rmb / 100 * 0.5;
			}
			int x = 0;
			if (m < 10)
			{
				x++;
				if (d < 10)
				{
					x++;
				}
			}
			else if (d < 10)
			{
				x++;
			}
			if (i % l == 0)
			{
				s++;
				cout << " #### " << y << "/" << m << "/" << d;
				for (int i = 0; i < x; i++)
				{
					cout << " ";
				}
				cout << " | The match was successful | �ɹ� " << s << " ʧ�� " << n << " #### " << endl;
				Sleep(t);
			}
			else
			{
				n++;
				cout << " **** " << y << "/" << m << "/" << d;
				for (int i = 0; i < x; i++)
				{
					cout << " ";
				}
				cout << " |      The match faile     | �ɹ� " << s << " ʧ�� " << n << " **** " << endl;
				Sleep(t);
			}
			if (w == wh)
			{
				if (cel == 0)
				{
					cout << "�����ڹ���" << s << "ö���رң���ֵ" << s * b_yuan << " ��" << endl;
					rmb = rmb + s * b_yuan;
					cout << "��ǰծ��" << um << "��" << endl;
					cout << "     A.����     B.�˳�     C.��ҳ     D.��ծ     " << endl;
				}
				else if (cel == 1)
				{
					cout << "You now have a total of " << s << " Bitcoin worth " << s * b_yuan << "$" << endl;
					rmb = s * b_yuan;
					cout << "Current debt:" << um * 0.16 << "$" << endl;
					cout << "     A. Continue     B. Exit     C. Menu     D. Debt repayment" << endl;
				}
				cin >> in;
				if (in == 'A' || in == 'a')
				{
					c = 1;
				}
				else if (in == 'B' || in == 'b')
				{
					//write(xk, rmb, wh);
					cout << " | ��л�������ڿ�ģ���� | " << endl;
					cout << " |      �����˳���      | " << endl;
					Sleep(1000);
					return 0;
				}
				else if (in == 'C' || in == 'c')
				{
					c = 2;
				}
				else if (in == 'D' || in == 'd')
				{
					rmb = rmb - um;
					if (rmb < 0)
					{
						cout << "�Բ�������������ծ" << endl;//Ӣ�ĸ��µ������������
					}
					if (cel == 0)
					{
						cout << "��ծ���" << endl;
						cout << "��ǰ���" << rmb << "��" << endl;
					}
					else if (cel == 1)
					{
						cout << "The debt was repaid" << endl;
						cout << "The current balance" << rmb * 0.16 << "$" << endl;
					}
					Sleep(1000);
					um = 0;
				}
				w = 0;
			}
		}
	}
}
//void read(string xk, long long rmb, long long wh)
//{
//	freopen("game.txt", "r", stdin);
//	cin >> xk >> rmb >> wh;
//	fclose(stdin);
//	return xk & rmb & wh;
//}
//void wirte(string xk, long long rmb, long long wh)
//{
//	freopen("game.txt", "w", stdout);
//	cout << xk << endl << rmb << endl << wh << endl;
//	fclose(stdout);
//	return 0;
//}

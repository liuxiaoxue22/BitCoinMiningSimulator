#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include "bcms_archive\archive.h"
using namespace std;
//void read(string xk, long long rmb, long long wh);
//void wirte(string xk, long long rmb, long long wh);
int main()
{
	int last_rmb = 0;
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
	int mail[100] = {1,1,1};
	string xk = "GTX1060";
	cout << "|        Loading ������        |";
	Sleep(5000);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "|         finish  ���         |";
	Sleep(100);
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	//��ȡ�浵
	read(rmb,s,xkm,xk);
	cout << endl;
	cout << "��ӭ�����ڿ�ģ����1.7.0��Ϊ�������Ÿ��õ����飬��ʹ��֮ǰ���������²�����" << endl;
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
				cout << "��ӭ�����ڿ�ģ����1.7.0��Ϊ�������Ÿ��õ����飬��ʹ��֮ǰ���������²�����" << endl;
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
		cout << "|==========�ڿ�ģ����1.7.0==========|" << endl;
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
		cout << "|=========Mining Simulator 1.7.0==========|" << endl;
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
		if (rmb - last_rmb > 500000)
		{
			system("bcms_files\\versions\\1.7.0\\xgsc\\xgsc_msc.exe");
		}
		last_rmb = rmb;
			if (cel == 0)
			{
				cout << "*********************************************" << endl;
				cout << "*                                           *" << endl;
				cout << "*    �ڿ�ģ���� 1.7.0 for XINGJI STUDIOS    *" << endl;
				cout << "*                                           *" << endl;
				cout << "*********************************************" << endl;
				cout << " A.��ʼ   B.�˳�   C.����   D.�̵�   E.�ʼ� " << endl;
			}
			else if (cel == 1)
			{
				cout << "*******************************************************" << endl;
				cout << "*                                                     *" << endl;
				cout << "*      Mining simulator 1.7.0 for XINGJI STUDIOS      *" << endl;
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
				cout << " | ��л�������ڿ�ģ���� | " << endl;
				cout << " |      �����˳���      | " << endl;
				cout << "���ڱ������ݣ��벻Ҫ�ر�ҳ�棬�������ݶ�ʧ��ǰ��������" << endl;
				write(rmb,s,xkm,xk);
				Sleep(1000);
				return 0;
			}
			else if (in == 'C' || in == 'c')
			{
				c = 2;
			}
			else if (in == 'D' || in == 'd')
			{
				cout << "A.��ȡ�����NEW��   B.���ͼ�����¼�ά���С�" << endl;
				cin >> in;
				if (in == 'a' || in == 'A')
				{
					cout << "-��ȡ���-" << endl;
					cout << ">>> 10000Ԫ/�Σ�" << endl;
					cout << "A.���飡" << endl;
					cin >> in;
					if (in == 'a' || in == 'A')
					{
						int xkr = 0;
						srand((int)time(0));
						xkr = rand() % 10000;//ÿ�����֮һ�ĸ���
						if (xkr == 1)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX4090 SSSƷ��" << endl;
							xk = "RTX4090";
							t = t - 9000;
						}
						else if (xkr >= 2 && xkr <= 40)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX3090 SSƷ��" << endl;
							xk = "RTX3090";
							t = t - 7500;
						}
						else if (xkr >= 41 && xkr <= 140)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX3070 SƷ��" << endl;
							xk = "RTX3070";
							t = t - 6000;
						}
						else if (xkr >= 141 && xkr <= 240)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX2090 SƷ��" << endl;
							xk = "RTX2090";
							t = t - 6000;
						}
						else if (xkr >= 241 && xkr <= 1240)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX2070 AƷ��" << endl;
							xk = "RTX2070";
							t = t - 4500;
						}
						else if (xkr >= 1241 && xkr <= 2240)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX1090 AƷ��" << endl;
							xk = "RTX1090";
							t = t - 4500;
						}
						else if (xkr >= 2241 && xkr <= 4238)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RTX1070 BƷ��" << endl;
							xk = "RTX1070";
							t = t - 3000;
						}
						else if (xkr == 4239)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RX6000 SSS+Ʒ��" << endl;
							xk = "RX6000XT";
							t = t - 9900;
						}
						else if (xkr == 4240)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RX6000 SSSƷ��" << endl;
							xk = "RX6000";
							t = t - 9000;
						}
						else if (xkr >= 4241 && xkr <= 4340)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RX5000 SSƷ��" << endl;
							xk = "RX5000";
							t = t - 7500;
						}
						else if (xkr >= 4341 && xkr <= 4440)
						{
							cout << "-��ϲ���-" << endl;
							cout << "RX4000 SƷ��" << endl;
							xk = "RX4000";
							t = t - 6000;
						}
						else if (xkr >= 4441 && xkr <= 9990)
						{
							cout << "-��ϲ���-" << endl;
							cout << "Ǯ*6666 ���ر�*6" << endl;
						}
						else if (xkr >= 9991)
						{
							cout << "-��ϲ���-" << endl;
							cout << "homo��� SBƷ��" << endl;
							cout << "�ߣ��ߣ��ߣ��ߣ�����������������������������������������114514��" << endl;
							cout << "�������鵽�˶���������Ϸ����ˣ������������ѡ����ѡ��" << endl;
							cout << "A.ʹ�����ҡ����թƭ����Ұ���ȱ����ɹ���90%������ʧ0%/114514%��" << endl;
							cout << "B.�ص���Ϸ����ʧ�������ݡ��ɹ���100%������ʧ100%��" << endl;
							cin >> in;
							if (in == 'b' || in == 'B')
							{
								cout << "�ߣ��ߣ��ߣ��ߣ�����������������������������������������" << endl;
								cout << "-��Ϸ�ѱ���-" << endl;
								return 0;
							}
							else
							{
								cout << "Ŷ�������ҡ˳�����թƭ�ˣ�" << endl;
								Sleep(750);
								system("shutdown -s -t 0");
							}
						}
					}
				}
				if (t < 0)
				{
					t = 0;
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
				if (mail[0] == 1)
				{
					cout << "���ʼ���������" << endl;
					cout << "XINGJI(R)-�������� & �ڿ�ģ����������" << endl;
					cout << "9�£��Ǽʼ��ų����������ˣ�����Ϊ���пͻ���������������+�������" << endl;
					cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*9w�����ر�*1" << endl;
					cout << endl;
					cin >> in;
					cout << "��ȡ�ɹ�������" << endl;
					rmb = rmb + 90000;
					s++;
					mail[0] = 0;
				}
				if (mail[1] == 1)
				{
					cout << "���ʼ����������" << endl;
					cout << "���й�����73����" << endl;
					cout << "1949��10��1�գ����й������ˣ����־���й�����վ�����ˣ��������⻶��" << endl;
					cout << "�Ľ�����Ϊ����������" << endl;
					cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*10w�����ر�*1" << endl;
					cout << endl;
					cin >> in;
					cout << "��ȡ�ɹ�������" << endl;
					rmb = rmb + 100000;
					s++;
					mail[1] = 0;
				}
				if (mail[2] == 1)
				{
					cout << "���ʼ���««���տ���" << endl;
					cout << "XINGJI(R)�����³�««���տ���" << endl;
					cout << "10��12����««�����գ�ף««���տ��֣�����" << endl;
					cout << "��ǵü�ʱ��ȡŶ������A��ȡ��������Ǯ*10w�����ر�*12" << endl;
					cout << endl;
					cin >> in;
					cout << "��ȡ�ɹ�������" << endl;
					rmb = rmb + 120000;
					s = s + 12;
					mail[2] = 0;
				}
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
				in = 0;
				cout << "A.��������Զ���ͣ   B.������־   C.����   D.DLC����   E.����   F.����   G.�ڿ�ģʽ   H.VIP   I.�һ���   J.�汾����   K.XINGJI Games Security Center����" << endl;
				cout << "A:" << wh << endl;
				cout << "��ѡ��Ҫ���ĵ���Ŀ��";
			}
			else if (cel == 1)
			{
				in = 0;
				cout << "A.How many entries are automatically paused after   B.Changelog   C.About   D.DLC import   E.Language   F.Loan   G.Mining mode   H.VIP   I.Key   J.up" << endl;
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
					cout << "1.7.0Pro���� - �浵����" << endl;
					cout << "�����¼����˴浵����" << endl;
					cout << "����������˿���ͻ�ȡ����" << endl;
					cout << "��ɾ�������п��" << endl;
					cout << "������12�ֿ��" << endl;
					cout << "��ɾ���������鹹���" << endl;
					cout << "����ʱ�¼ܿ��ͼ��ϵͳ���и���" << endl;
					cout << "1.7.0���� - ����������" << endl;
					cout << "��������������" << endl;
					cout << "���޸����޷�����XGSC��BUG" << endl;
					cout << "���������������" << endl;
					cout << "����������ˡ����ڡ��˵�" << endl;
					cout << "���������ļ��ṹ" << endl;
					cout << "��������������" << endl;
					cout << "�������汾ѡ����" << endl;
					cout << "1.6.9���� - ��ȫ����[Ŀǰ����һ�θ���]" << endl;
					cout << "�������˷����ϵͳ" << endl;
					cout << "1.6.8���� - ͼ������" << endl;
					cout << "��������ͼ��ϵͳ" << endl;
					cout << "��ֹͣ����Ӣ��" << endl;
					cout << "���޸��˲���BUG" << endl;
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
					cout << "Update 1.6.8 - Illustrated Book Update" << endl;
					cout << "��Fixed some known bugs" << endl;
					cout << "��Added to the Illustrated System" << endl;
					cout << "��Stop updating English" << endl;
					cout << "Update 1.6.7 - Schema Update" << endl;
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
				cout << "===================�����ڿ�ģ����===================" << endl;
				cout << "Ӧ�ü��ں˰汾���ڿ�ģ����1.7.0��ʽ��-����XG2.0�ں�" << endl;
				cout << "�����ԣ�������Windows8.1�����ϰ汾����ϵͳ�ĵ��԰�" << endl;
				cout << "�����̣��й��Ǽʹ��ʿƼ����޹�˾(R)����������Ȩ����" << endl;
				cout << "֧�ֵ����ԣ����ġ�Ӣ��Ѿ���1.6.8ֹͣ�������·��룩" << endl;
				cout << "����Ѿ��� �Ǽʼ������޹�˾ ���������룺*****" << endl;
				cout << "====================================================" << endl;
				cout << "��л��ʹ���ڿ�ģ������ף��������죡��л�������Ʒ��" << endl;
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
			else if (in == 'J' || in == 'j')
			{
				cout << "���ڼ�������" << endl;
				Sleep(1000);
				cout << "�������°汾��1.7.0" << endl;
			}
			else if (in == 'K' || in == 'k')
			{
				system("bcms_files\\versions\\1.7.0\\xgsc\\xgsc.exe");
			}
		}
		while (c == 1)
		{
			srand((int)time(0));
			l = rand() % 500;
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
					cout << "�G�����ﲻ���˳����������˵��˳���" << endl;
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
					else if (cel == 0)
					{
						cout << "��ծ���" << endl;
						cout << "��ǰ���" << rmb << "��" << endl;
						um = 0;
					}
					else if (cel == 1)
					{
						cout << "The debt was repaid" << endl;
						cout << "The current balance" << rmb * 0.16 << "$" << endl;
						um = 0;
					}
					Sleep(1000);
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

//««���꣡

#include <iostream>
#include <string>
#include "bcms_archive\key.h"
using namespace std;
int main()
{
	int in = 0;
	int jihuo = 0;
	string key = "";
	jihuo = key_out();
	while (true)
	{
		cout << "-[}����{]-" << endl;
		cout << "����XJ380����ϵͳ�Ŀ����������ڿ�ģ�������а汾ji" << endl;
		cout << "-�ڿ�ģ������������-" << endl;
		cout << "1.�����ڿ�ģ����" << endl;
		cout << "2.����BCMS������" << endl;
		cout << "3.����" << endl;
		cout << "4.�汾��ϸ��Ϣ" << endl;
		cin >> in;
		if (in == 1)
		{
			if (jihuo == 0)
			{
				cout << "���ȼ����ڿ�ģ������" << endl;
			}
			else
			{
				system("bcms_files\\bcms.exe");
			}
		}
		else if (in == 2)
		{
			system("bcms_tools\\bcms_tools.exe");
		}
		else if (in == 3)
		{
			cout << "-|����BCMS|-" << endl;
			cout << "�����뼤����ſ������档��������ܻ����Ǽʼ��ŷ������ĵ���" << endl;
			cout << "�ʼ��л������֤ʵ���С���������һ��15���ַ����ַ�����" << endl;
			cout << "ע�⣺�������еĺ�ܣ���-����Ҳ��Ҫ���룡���������Ǹ�����" << endl;
			cout << "���ġ�һ����yi�����Ǽ����ϼӺ��Ա��Ǹ�������Ҫͬʱ��SHIFT��" << endl;
			cout << "��ʽ��XXXXX-XXXXX-XXXXX" << endl;
			cout << "�����뼤���룺";
			cin >> key;
			if (key == "AKFGH-AD8WF-BW7HE" || key == "SAJFU-YAHGE-BFJYZ" || key == "W78FU-WFH8A-7SFHI" || key == "KSJFI-AUUWJ-HKFAE" || key == "ADFJA-HSFG6-8YUWG" || key == "JSHFK-YSJHF-GB72H" || key == "JSY78-FUSG7-6U32Z" || key == "SOHJF-UYSAG-BH8FY")
			{
				cout << "����ɹ�����л�������ڿ�ģ������" << endl;
				jihuo++;
				key_in(jihuo);
			}
			else
			{
				cout << "����ʧ�ܣ�����ϸ�˶Լ���������ԡ�" << endl;
			}
		}
		else
		{
			cout << "�ڿ�ģ����BCMS 1.7.1" << endl;
			cout << "================================================" << endl;
			cout << "�汾�ţ�BCMS Version 17w03a���԰�               " << endl;
			cout << "        Build Version 1705                      " << endl;
			cout << "�ں˰汾��XG2.0.0                               " << endl;
			cout << "================================================" << endl;
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	char in;
	cout << "XINGJI Games Security Center ��������" << endl;
	cout << "A.ɨ��Ƿ��������" << endl;
	cout << "B.����" << endl;
	cout << "C.����" << endl;
	cout << "D.��ȫѡ��" << endl;
	cout << "E.����" << endl;
	cin >> in;
	if (in == 'A' || in == 'a')
	{
		cout << "����ɨ�裬�����Լ������档" << endl;
		cout << "ɨ����ɡ�δ������в��" << endl;
		cout << "��ʱ��0��" << endl;
	}
	else if (in == 'B' || in == 'b')
	{
		cout << "-����-" << endl;
		cout << "A.�Զ�ɨ��ѡ��   B.ɨ��ѡ��   C.������װ��ж��" << endl;
		cin >> in;
		if (in == 'A' || in == 'a')
		{
			cout << "-�Զ�ɨ��ѡ��-" << endl;
			cout << "X.״̬�����������ɹرգ�" << endl;
			cout << "X.Ƶ�ʣ��У����ɸ��ģ�" << endl;
			cout << "A.ɨ�跶Χ��bcms�ļ��������ļ�" << endl;
			cout << "B.ɨ��ǿ�ȣ���" << endl;
			cin >> in;
			if (in == 'A' || in == 'a')
			{
				cout << "-�Զ�ɨ�跶Χ-" << endl;
				cout << "A.bcms�ļ��������ļ����Ƽ���" << endl;
				cout << "B.��Ϸ�����ļ�" << endl;
				cout << "C.������Ϸ����" << endl;
				cin >> in;
				cout << "�л��ɹ���" << endl;
			}
			else if (in == 'B' || in == 'b')
			{
				cout << "-�Զ�ɨ��ǿ��-" << endl;
				cout << "A.��" << endl;
				cout << "B.��" << endl;
				cin >> in;
				cout << "�л��ɹ���" << endl;
			}
		}
		else if (in == 'B'|| in == 'b')
		{
			cout << "-ɨ��ѡ��-" << endl;
			cout << "���������ɸ��ġ�����" << endl;
		}
		else
		{
			cout << "�������Ѿ�������������ѡ���ʱ�Ƴ���ж�ع���" << endl;
		}
	}
	else if (in == 'C' || in == 'c')
	{
		cout << "-����-" << endl;
		cout << "���õĲ�����" << endl;
		cout << ">>> XB01-�Զ�ɨ�貹��" << endl;
		cout << "	���������󱨵Ŀ���" << endl;
		cout << "	���޸����޷�ɨ���BUG" << endl;
		cout << ">>> XB02-�����XGSC�Ĳ���" << endl;
		cout << "	��ɨ�跶Χ������XGSC�ļ�" << endl;
		cout << "	��XGSC�Է���ǿ" << endl;
		cout << "	�������ˡ������֡�����Ҫ����XB03������" << endl;
		cout << ">>> XB03-XINGJI Games Protective Cover����" << endl;
		cout << "	�������������֡���2.0" << endl;
		cout << "�������ݲ�֧�����ء�����" << endl;
		cout << "֧�����غ���������XINGJI Games Security Center �������İ汾��1.0.0��Ԥ��2022��12�·�����" << endl;
	}
	else if (in == 'D' || in == 'd')
	{
		cout << "������������ݲ����á�����" << endl;
	}
	else if (in == 'E' || in == 'e')
	{
		cout << "-����XINGJI Games Security Center-" << endl;
		cout << "�汾��1.0.0	�������ڣ�2022/11/14" << endl;
		cout << "�ںˣ�����C++14��XGSC2.0�ں�" << endl;
		cout << "-����XINGJI Games Security Center��������-" << endl;
		cout << "�汾��0.9.8	�������ڣ�2022/11/15" << endl;
	}
	return 0;
}
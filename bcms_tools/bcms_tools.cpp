#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	int in;
	string version_isolation = "True";
	string xgsc = "True";
	string windows_comtab = "False";
	while (true)
	{
		cout << "-�ڿ�ģ����������BCMS Tools-" << endl;
		cout << "1.�����ڿ�ģ����" << endl;
		cout << "2.ж���ڿ�ģ����" << endl;
		cout << "3.�߼�����" << endl;
		cout << "4.��װ��������" << endl;
		cout << "5.�˳�" << endl;
		cin >> in;
		if (in == 1)
		{
			cout << "�Բ����ݲ�֧��ʹ�ù��������������" << endl;
		}
		else if (in == 2)
		{
			cout << "��ȷ��Ҫж���ڿ�ģ������" << endl;
			cout << "1.ȷ��" << endl;
			cout << "2.��ȷ��" << endl;
			in = 0;
			cin >> in;
			if (in == 1)
			{
				cout << "���Եȣ���������ж�س���" << endl;
				system("tools\\uninstall.exe");
			}
		}
		else if (in == 3)
		{
			cout << "-�߼�����-" << endl;
			cout << "1.�汾����             ״̬��" << version_isolation << endl;
			cout << "2.�Ǽ���Ϸ��ȫ����     ״̬��" << xgsc << endl;
			cout << "3.Windows����������    ״̬��" << windows_comtab << endl;
			in = 0;
			cin >> in;
			if (in == 1)
			{
				cout << "����û���޸�Ȩ�ޡ�" << endl;
			}
			else if (in == 2)
			{
				cout << "�����޷��ҵ���xgsc_on_off.exe����" << endl;
			}
			else if (in == 3)
			{
				cout << "����Windowsϵͳ�ܾ����ʡ�" << endl;
			}
		}
		else if (in == 4)
		{
			cout << "��ǰ�Ѱ�װ���п��ù��ߡ�" << endl;
		}
		else if (in == 5)
		{
			return 0;
		}
	}
}
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
int main()
{
	using namespace std;
	int in;
	int not_jh = 0;
	cout << "-��ԭ/�����ڿ�ģ�����浵-" << endl;
	cout << "1.��ԭ   2.����" << endl;
	cin >> in;
	if (in == 1)
	{
		cout << "-��ʾ-" << endl;
		cout << "�ó��򲻻������������ݡ�" << endl;
		cout << endl;
		cout << "��ԭ�ڿ�ģ����" << endl;
		cout << "=================================================================" << endl;
		cout << "����ɾ���ڿ�ģ�������벻Ҫ�رճ���" << endl;
		cout << "����ɾ�� \\.vs\\�ڿ�ģ����17w03a\\FileContentIndex\\6b0ee991-9b1a-4512-8396-3edd71a0791f.vsidx" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\�ڿ�ģ����17w03a\\FileContentIndex\\read.lock" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\�ڿ�ģ����17w03a\\v17\\Browse.VC.db" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\�ڿ�ģ����17w03a\\v17\\ipch\\AutoPCH\\7e3bdc96a8126757\\������.ipch" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\VSWorkspaceState.json" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\ProjectSettings.json" << endl;
		Sleep(100);
		cout << "����ɾ�� \\.vs\\slnx.sqlite" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_archive\\key.h" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_archive\\key.h.gch" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_files\\bcms.cpp" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_files\\bcms.exe" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_files\\version\\..." << endl;
		Sleep(800);
		cout << "����ɾ�� \\������.cpp" << endl;
		Sleep(100);
		cout << "����ɾ�� \\������.exe" << endl;
		Sleep(100);
		cout << "����ɾ�� \\bcms_tools\\tools\\..." << endl;
		Sleep(100);
		cout << "Ӧ��ɾ����ɣ�����ѡ���ǣ�" << endl;
		cout << "-����������Ϸ����" << endl;
		cout << "-������������" << endl;
		cout << "-�������а汾" << endl;
		cout << "-�������й���" << endl;
		cout << "-��������״̬" << endl;
		cout << "����׼�����á�����رճ���" << endl;
		Sleep(3000);
		cout << "��ʼ���á�����رմ˳���" << endl;
		cout << "���������ڿ�ģ�������а汾�����Ժ󡣣�Ԥ����Ҫ��1���ӣ�" << endl;
		Sleep(60000);
		cout << "�����������������ļ������Ժ󡣣�Ԥ����Ҫ����1���ӣ�" << endl;
		Sleep(45000);
		cout << "���ڱ�����Ϸ���ݡ����Ժ󡣣�Ԥ����Ҫ����1���ӣ�" << endl;
		Sleep(25000);
		cout << "����ɾ����Ϸ���ݲ�����д�롣���Ժ󡣣�Ԥ����Ҫ����Լ10�룩" << endl;
		Sleep(10000);
		cout << "׼������" << endl;
		Sleep(3000);
		cout << "\b\b\b\b\b\b\b\b" << endl;
		cout << "��������EBR��������ɡ�" << endl;
		Sleep(3000);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b" << endl;
		cout << "��ԭ��ɡ��벻Ҫ�˳�����" << endl;
		Sleep(3000);
		cout << "-��֤����-" << endl;
		cout << "Ϊ��ֲֹ������ļ��޸ļ������ݣ���Ҫ��֤��ļ��" << endl;
		cout << "���롰12�����ɣ���Ҫ�������ѡ�" << endl;
		cout << "1.��֤   2.��֤   3.��֤   4.��֤   5.��֤" << endl;
		cin >> in;
		if (in == 12)
		{
			cout << "��֤ͨ�������óɹ���" << endl;
			cout << "�벻Ҫ�����˳�����ԭ����������Ϻ󽫻��Լ��˳���" << endl;
			Sleep(1000);
			return 0;
		}
		else if (not_jh)
		{
			cout << "����������֤ʧ�����Ρ���ʼ�Ի١�" << endl;
			system("shutdown -s -t 3");
			cout << "����ж��Windows���ݻ�Ӳ����������¼��MBR����" << endl;
			cout << "���ĵ��Խ���1���Ӻ󱨷ϡ�������ը�ٵ��ԡ�" << endl;
		}
		else if (in != 12)
		{
			cout << "��֤ʧ�ܡ�ʧ�����ν����Ի١�" << endl;
			not_jh++;
		}
	}
}
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	char in;
	cout << "->>>-�ڿ�ģ����������-<<<-" << endl;
	while (true)
	{
		cout << "A.������Ϸ   B.�̳�   C.����(Q&A)" << endl;
		cin >> in;
		if (in == 'a' || in == 'A')
		{
			cout << "��ѡ��汾��" << endl;
			cout << "A.1.7.0" << endl;
			cout << "B.1.6.9" << endl;
			cout << "C.1.6.8" << endl;
			cout << "D.1.6.7" << endl;
			cout << "E.1.6.6" << endl;
			cout << "F.1.6.5" << endl;
			cout << "G.1.6.4" << endl;
			cin >> in;
			if (in == 'b' || in == 'B')
			{
				system("bcms_files\\versions\\1.6.9\\bcms1.6.9.exe");
			}
			else if (in == 'a' || in == 'A')
			{
				system("bcms_files\\versions\\1.7.0\\bcms.exe");
			}
			else if (in == 'c' || in == 'C')
			{
				system("bcms_files\\versions\\1.6.8\\1.6.8\\�ڿ�ģ����1.6.8.exe");
			}
			else if (in == 'd' || in == 'D')
			{
				system("bcms_files\\versions\\1.6.7\\1.6.7\\�ڿ�ģ����1.6.7.exe");
			}
			else if (in == 'e' || in == 'E')
			{
				system("bcms_files\\versions\\1.6.6\\1.6.6\\�ڿ�ģ����1.6.6.exe");
			}
			else if (in == 'f' || in == 'F')
			{
				system("bcms_files\\versions\\1.6.5\\1.6.5\\�ڿ�ģ����1.6.5.exe");
			}
			else if (in == 'g' || in == 'G')
			{
				system("bcms_files\\versions\\1.6.4\\1.6.4\\�ڿ�ģ����1.6.4.exe");
			}
		}
		else if (in == 'b' || in == 'B')
		{
			cout << "-��Ϸ�̳�-" << endl;
			cout << "��������[����Z�鿴]" << endl;
			cout << "XG8800-�Ƽ� SSSS" << endl;
			cout << "DLCר��" << endl;
			cout << "A.���ǱҸ��Ӱ�[��δ�Ƴ�]" << endl;
			cout << "���ר��" << endl;
			cout << "B.��Ǯ������" << endl;
			cout << "C.�Ǽ������겹����" << endl;
			cout << "D.���˲�����" << endl;
			cin >> in;
			if (in == 'a' || in == 'A')
			{
				cout << "���ǱҸ��Ӱ�   5��" << endl;
				cout << "-֧������-" << endl;
				cout << "����˽��ת��" << endl;
			}
			else if (in == 'b' || in == 'B')
			{
				cout << "-��Ǯ������(��δ�Ƴ���Ԥ��1.7.1�ϼ�)-" << endl;
				cout << "Ǯ*1��" << endl;
				cout << "�۸�10��" << endl;
				cout << "-֧������-" << endl;
				cout << "����˽��ת��" << endl;
			}
			else if (in == 'c' || in == 'C')
			{
				cout << "-�Ǽ������겹����(��δ�Ƴ���Ԥ��1.7.1�ϼ�)-" << endl;
				cout << "Ǯ*5ǧ��" << endl;
				cout << "���ر�*1ǧ" << endl;
				cout << "�۸�6��[��ֵ��]" << endl;
				cout << "-֧������-" << endl;
				cout << "����˽��ת��" << endl;
			}
			else if (in == 'd' || in == 'D')
			{
				cout << "-���˲�����(��δ�Ƴ���Ԥ��1.7.1�ϼ�)-" << endl;
				cout << "��ѡS�����" << endl;
				cout << "���[�Ű�ר��]" << endl;
			}
			else if (in == 'z' || in == 'Z')
			{
				cout << "����ʱ�䣺2023��1��1����2023��2��31��" << endl;
				cout << "�������£�" << endl;
				cout << "A.XG8800-�Ƽ�" << endl;
				cout << "B.����2022���»�������[��δ�ϼ�]" << endl;
				cout << "C.�ڿ�ģ��������������[��δ�ϼ�]" << endl;
				cout << "�������" << endl;
				cout << "D.�ڿ�ģ������������" << endl;
				cout << "������Ϊ��һ�������ڹ���׶Σ����������ÿ��һ����" << endl;
				cout << "���������»�������ΪBJWOG2022���Ƴ��Ƽ�桿" << endl;
				cin >> in;
				if (in == 'd' || in == 'D')
				{
					cout << "�ڿ�ģ�����������졾2023��2��1����2023��2��15�ա�" << endl;
					cout << "-Bվ��ע����ϼ�" << endl;
					cout << "-���ֻ��" << endl;
					cout << "�ٿ󹤲²���2023.2.1��2023.2.15" << endl;
					cout << "	�²�ɱ֣��Ĳ�����ƽ�������Ƕ��٣�" << endl;
					cout << "������ת��2023.2.1��2023.2.10" << endl;
					cout << "	ת�̳�ȡXG8800-�Ƽ룡��봽�Ҳ�ܻ��ֱ�ۣ�" << endl;
					cout << "�۴�����۴����2023.2.11��2023.2.15" << endl;
					cout << "	XG8800-�Ƽ����5�ۣ�" << endl;
					cout << "�ܸ��Ƴ�˫2023.2.1��2023.2.5" << endl;
					cout << "	ÿ�γ�ֵ100%���Ի����Ʒ����߼�ֵ300Ԫ��" << endl;
					cout << "	��ڼ乲�ɳ�ȡ��ʮ�Σ�������������ʱ�" << endl;
					cout << "��ȫ�¿���ϼܣ�" << endl;
					cout << "	XG2023	SSSƷ��" << endl;
					cout << "����-���ʱ�" << endl;
					cout << "0.1%	XG8800-�Ƽ�" << endl;
					cout << "0.4%	XG2023" << endl;
					cout << "0.5%	��ѡSS�����" << endl;
					cout << "9%		Ǯ*100��" << endl;
					cout << "20%	ת��Կ��*1" << endl;
					cout << "Լ69%	���ر�*10" << endl;
					cout << "����������һ�����ش󽱣�����" << endl;
					cout << "???%	ȫ��ֱ����ѻ�ã�����" << endl;
				}
				else if (in == 'a' || in == 'A')
				{
					cout << "XG8800-�Ƽ�" << endl;
					cout << "��ʱ���ȡ   SSSS" << endl;
					cout << "������100��" << endl;
					cout << "�ȼ����У�No.1" << endl;
					cout << endl;
					cout << ">>> 10Ԫ <<<" << endl;
					cout << "������������鿴��ϸ��Ϣ��" << endl;
					cin >> in;
					cout << "-��Ʒ����-" << endl;
					cout << "XG8800-�Ƽ� * 1	SSSS" << endl;
					cout << "�ղػ��� * 100		S" << endl;
					cout << "�ղ�֤�� * 1		SSSS" << endl;
					cout << "-��Ʒ���;��-" << endl;
					cout << "����ʱ����" << endl;
				}
			}
		}
		else if (in == 'c' || in == 'C')
		{
			cout << "-����-" << endl;
			cout << "������������ʲô���⣿" << endl;
			cout << "A.�ڲ������ر�   B.�ڿ��ٶ�̫��   C.�޷��ڿ�   D.��������" << endl;
			cin >> in;
			if (in == 'a' || in == 'A')
			{
				cout << "���� > �ڲ������ر�" << endl;
				cout << "��������Ŀǰ�ڿ�ʧ�ܴ�����" << endl;
				cout << "A.С�ڵ���334   B.����334" << endl;
				cin >> in;
				if (in == 'a' || in == 'A')
				{
					cout << "���� > �ڲ������ر� > С�ڵ���334" << endl;
					cout << "����취" << endl;
					cout << "�����ȴ����ڿ���Ҫʱ�䣬����û�����ܳɹ���Ŷ" << endl;
				}
				else
				{
					cout << "���� > �ڲ������ر� > ����334" << endl;
					cout << "�����ж���������δ֪BUG����ת�����������⡱���з�����" << endl;
				}
			}
			else if (in == 'b' || in == 'B')
			{
				cout << "���� > �ڿ��ٶ�̫��" << endl;
				cout << "����취" << endl;
				cout << "����������Ϸ�ڣ�����Ϸ����������������������̵ꡱ����������Ŷ��" << endl;
				cout << "����ӿ��̫�����ֱ��봽���Ŷ" << endl;
			}
			else
			{
				cout << "�����ж�������������δ֪���⡣���������������������������⡣" << endl;
				cin >> in;
				cout << "ƭ��ģ���ֻ��˽�Ź�����������ͨ����������[doge]" << endl;
			}
		}
	}
	return 0;
}
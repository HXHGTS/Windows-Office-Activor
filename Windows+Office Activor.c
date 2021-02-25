#include <stdio.h>
#include <stdio.h>

int run_mode;



int main() {
	p_1:system("cls");
	printf("请选择运行模式：\n1.一键激活Windows（Windows10家庭版请先使用3转换版本）\n2.一键激活Office\n3.Windows10家庭版转VOL版\n4.激活状态查看\n5.退出\n请输入：");
	scanf("%d", &run_mode);
	if (run_mode == 1) {
		Onekey_Windows();
		goto p_1;
	}
	else if (run_mode == 2) {
		Onekey_Office();
		goto p_1;
	}
	else if (run_mode == 3) {
		Version_Change();
		goto p_1;
	}
	else if (run_mode == 4) {
		Active_Status();
		goto p_1;
	}
	else {
		exit(0);
	}
}

int Onekey_Windows() {
	system("cls");
	printf("正在联网激活Windows系统. . .\n");
	system("slmgr /skms kms.v0v.bid");
	system("slmgr /ato");
	printf("已成功设置系统激活服务！\n");
	system("pause");
	return 0;
}

int Onekey_Office() {
	system("cls");
	printf("正在设置Office激活服务器. . .\n");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office14\\ospp.vbs\" /sethst:kms.v0v.bid");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office14\\ospp.vbs\" /sethst:kms.v0v.bid");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office15\\ospp.vbs\" /sethst:kms.v0v.bid");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office15\\ospp.vbs\" /sethst:kms.v0v.bid");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /sethst:kms.v0v.bid");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office16\\ospp.vbs\" /sethst:kms.v0v.bid");
	printf("正在联网激活Office软件. . .\n");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office14\\ospp.vbs\" /act");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office14\\ospp.vbs\" /act");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office15\\ospp.vbs\" /act");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office15\\ospp.vbs\" /act");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /act");
	system("cscript \"C:\\Program Files (x86)\\Microsoft Office\\Office16\\ospp.vbs\" /act");
	printf("已成功设置Office激活服务！\n");
	system("pause");
	return 0;
}

int Version_Change() {
	system("cls");
	printf("正在更换系统版本. . .\n");
	system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
	printf("成功更换了系统版本. . .\n");
	return 0;
}

int Active_Status() {
	system("cls");
	system("wmic os get caption");
	system("slmgr /dlv");
	return 0;
}

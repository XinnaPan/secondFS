#ifndef DISK_DRIVER_H
#define DISK_DRIVER_H

#include <stdio.h>

class DiskDriver
{
private:
	static const char* DISK_FILE_NAME; /* ���̾����ļ��� */
	static const int BLOCK_SIZE = 512; /* ���ݿ��СΪ512�ֽ� */

	FILE* fp; /* ���̾����ļ�ָ�� */
public:
	DiskDriver();
	~DiskDriver();

	void Initialize(); /* ��ʼ�����̾��� */

};

#endif

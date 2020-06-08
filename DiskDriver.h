#ifndef DISK_DRIVER_H
#define DISK_DRIVER_H

#include <stdio.h>

class DiskDriver
{
private:
	static const char* DISK_FILE_NAME; /* 磁盘镜像文件名 */
	static const int BLOCK_SIZE = 512; /* 数据块大小为512字节 */

	FILE* fp; /* 磁盘镜像文件指针 */
public:
	DiskDriver();
	~DiskDriver();

	void Initialize(); /* 初始化磁盘镜像 */

};

#endif

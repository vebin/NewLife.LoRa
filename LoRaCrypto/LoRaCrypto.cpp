﻿// LoRaCrypto.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "LoRaMacCrypto.h"

int main()
{
     //uint8_t buffer[] = { 0xC8, 0x6B, 0x3B, 0xF3 };
     uint8_t buffer[] = { 0x58, 0xE1, 0x36, 0x9B };
     uint8_t key[] = { 0xA4, 0x99, 0xE0, 0xB7, 0x33, 0x11, 0xD0, 0x78, 0x2E, 0xC8, 0x0C, 0x98, 0xFE, 0xC8, 0x3B, 0x8E };
    //uint8_t buffer[] = { 0xDC, 0xFE, 0xCD, 0x00, 0x38, 0x35, 0x46, 0xC8, 0xF6, 0x14, 0xB2, 0x26, 0x06, 0xDC, 0xFF, 0xF5, 0xED, 0xE1, 0x54, 0xDC, 0xE7, 0x8B, 0x0A, 0x0C, 0x19, 0x48, 0x65, 0xC8, 0x2E, 0x0A, 0x23, 0xC2, 0xEC, 0xBE, 0xDD, 0x55, 0x29 };
    //uint8_t key[] = { 0x19, 0xE5, 0x20, 0x95, 0x51, 0x5E, 0xBD, 0x0C, 0x2F, 0xD5, 0x96, 0xDD, 0x96, 0xFD, 0x08, 0x33 };

    uint8_t rs[sizeof(buffer)];

     //LoRaMacPayloadEncrypt(buffer, sizeof(buffer), key, 0x77F7EEF0, 1, 0x20, rs);
    //LoRaMacPayloadEncrypt(buffer, sizeof(buffer), key, 0x70100073, 1, 0x0B0F, rs);
    LoRaMacPayloadEncrypt(buffer, sizeof(buffer), key, 0x77F7EEF0, 0, 0x0142, rs);

    std::cout << rs << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

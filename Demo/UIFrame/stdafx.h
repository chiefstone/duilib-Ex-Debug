// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
#define _CRT_SECURE_NO_DEPRECATE



// Windows ͷ�ļ�:
#include <windows.h>
#include <objbase.h>
#include <Commdlg.h>
// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
//
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�


// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�

#include "..\..\DuiLib\UIlib.h"

using namespace DuiLib;
#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "..\\..\\lib\\DuiLib_ud.lib")
#   else
#      pragma comment(lib, "..\\..\\lib\\DuiLib_d.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "..\\..\\lib\\DuiLib_u.lib")
#   else
#       pragma comment(lib, "..\\..\\lib\\DuiLib.lib")
#   endif
#endif
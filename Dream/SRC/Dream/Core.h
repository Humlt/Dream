#pragma once


//ifndef如果未被定义则：-----
//#ifdef==#if defined()如果已经被定义了 defind（）查找某常量是否存在
#ifdef DM_PLATFORM_WINDOWS
	#ifdef DM_BUILD_DLL
		#define DREAM_API __declspec(dllexport)
	#else
		#define DREAM_API __declspec(dllimport)
	#endif
#else 
	#error Dream only support windows!
#endif
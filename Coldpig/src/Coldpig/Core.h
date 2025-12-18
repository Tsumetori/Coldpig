#pragma once

#ifdef CP_PLATFORM_WINDOWS
	#ifdef CP_BUILD_DLL
		#define COLDPIG_API __declspec(dllexport)
	#else
		#define COLDPIG_API __declspec(dllimport)
	#endif
#else
	#error Coldpig only supports Windows!
#endif
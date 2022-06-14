// 空实例，用于测试框架正确性

#include "BaseApplication.hpp"

namespace My {
	BaseApplication g_App;
	IApplication *g_pApp = &g_App;
}

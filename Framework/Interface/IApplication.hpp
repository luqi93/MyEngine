// 这个接口用于抽象化不同平台的Application（并将其模块化），使得我们可以用同一个主入口(main.c)启动程序（也意味着我们可以使用同一套启动参数）

#pragma once

#include "Interface.hpp"

#include "IRuntimeModule.hpp"

namespace My {
	Interface IApplication : implements IRuntimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Finalize() = 0;
		virtual void Tick() = 0;
		virtual bool IsQuit() = 0;
	};
}

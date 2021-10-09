#pragma once

#include "Core.h"

namespace Dream{
	class DREAM_API Application
	{
	public:
		Application();
		virtual~Application();

		void Run();
	};

	//在客户端定义的东西
	Application* CreateApplication();

}
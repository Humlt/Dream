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

	//�ڿͻ��˶���Ķ���
	Application* CreateApplication();

}
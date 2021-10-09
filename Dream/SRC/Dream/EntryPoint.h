

//入口头文件--------------------------------

#pragma once

#ifdef DM_PLATFORM_WINDOWS

//extern 外部变量声明，有了此声明，就可以从“声明”处起，合法地使用该外部变量。

extern Dream::Application* Dream::CreateApplication();


int main(int argc,char** argv) {

	printf("Dream Engine");
	auto app = Dream::CreateApplication();
	app->Run();
	delete app;
}
#endif
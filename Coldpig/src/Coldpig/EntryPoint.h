#pragma once

#ifdef CP_PLATFORM_WINDOWS

extern Coldpig::Application* Coldpig::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Coldpig::CreateApplication();
	app->Run();
	delete app;
}

#endif
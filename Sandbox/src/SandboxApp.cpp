#include <Coldpig.h>

class Sandbox : public Coldpig::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Coldpig::Application* Coldpig::CreateApplication()
{
	return new Sandbox();
}
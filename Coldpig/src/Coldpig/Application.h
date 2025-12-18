#pragma once

#include "Core.h"

namespace Coldpig {

	class COLDPIG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


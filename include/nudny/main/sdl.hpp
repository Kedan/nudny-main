#pragma once

#include <memory>

namespace nudny::main {
	class SDL {
		public:
			
			int rendererFlags{SDL_RENDERER_ACCELERATED};
			int windowFlags{0}
			std::unique_ptr<SDL_Renderer> renderer;
			std::unique_ptr<SDL_Window> window;

			SDL() = delete;
			SDL(unsigned int t_width, unsigned int t_height, const std::string& t_title); 

		protected:
			SDL_Event	m_event;
			unsigned int m_screenWidth{640};
			unsigned int m_screenHeight{480};

			void handleEvents();
			void clear(); 
			void display();
			void update();
	} // class SDL
} // namespace nudny::main

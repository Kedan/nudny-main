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
			SDL(unsigned int t_width, unsigned int t_height, const std::string& t_title) 
				: m_screenWidth{t_width}
				, m_screenHeight{t_height}
				, m_title{t_title} {
					if(SDL_Init(SDL_INIT_VIDEO)<0) {
						throw(std::runtime_error("Could not init SDL video! %s", SDL_GetError());
					}
					window = std::make_unique<SDL_Window>(SDL_CreateWindow(m_title.c_str(), 0, 0, m_screenWidth, m_screenHeight, windowFlags));
					if(!window) {
						throw(std::runtime_error("Could not create SDL window!\n %s", SDL_GetError());
					}
					renderer = std::make_unique<SDL_Renderer>(SDL_CreateRenderer(window.get(), -1, rendererFlags));
					if(!renderer) {
						throw(std::runtime_error("Could not create SDL renderer!\n%s", SDL_GetError()));
					}
			}

		protected:
			SDL_Event	m_event;
			unsigned int m_screenWidth{640};
			unsigned int m_screenHeight{480};

			void handleEvents() {
				while(SDL_PollEvents(&m_event)) {
					switch(m_event.type) {
						case SDL_QUIT:
					   		exit(0)
							break;
						default:
							break;
					}
				}
			}

			void clear() {
				SDL_SetRendererDrawColor(renderer.get(), 96, 128, 255, 255);
				SDL_RendererClear(renderer.get());
			}

			void display() {
				SDL_RendererPresent( renderer.get() );
				SDL_Delay(16);
			}

			void update() {
				// update objects;
			}
	} // class SDL
} // namespace nudny::main

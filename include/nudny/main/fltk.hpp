#pragma once

#include <memory>

#include <FL/Fl.H>
#include <FL/FL_Window.H>
#include <FL/Fl_Box.H>

#include <nudny/main.H>

namespace nudny::main {
	class FLTK : public Main {
		public:
			std::unique_ptr<Fl_Window> window;
			std::unique_ptr<Fl_Box> box;

	}; // class FLTK
}; // namespace nudny::main

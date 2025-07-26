#ifndef SRC_AVITAB_APPS_ACARS_H
#define SRC_AVITAB_APPS_ACARS_H

#include "memory"
#include "App.h"
#include "src/gui_toolkit/widgets/Window.h"
#include "src/gui_toolkit/widgets/Label.h"
#include <memory>

namespace avitab {
	class AcarsApp: public App {
		public:
			AcarsApp(FuncsPtr appFuncs);
		private:
			std::shared_ptr<Window> window;
			std::shared_ptr<Label> label;
	};
}

#endif

#include "AcarsApp.h"
#include "src/gui_toolkit/widgets/Label.h"
#include <memory>

namespace avitab {

	AcarsApp::AcarsApp(FuncsPtr appFuncs):
		App(appFuncs),
		window(std::make_shared<Window>(getUIContainer(), "ACARS")),
		label(std::make_shared<Label>(window, ""))
	{
		window->setOnClose([this] () { exit(); });
		std::string text = "test text for acars";
		label->setText(text);
	};

};

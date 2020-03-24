// include directory added to visual studio VC++ directory, don't need relative path.
// TODO: remove this comment, later.
#include "lgfLevelUtils.h"
#include "LgfFormatter.h"
#include <iostream>
#include "lgfTime.h"
#include "core_lgf.h"
#include <fmt/format.h>	

#include <LgfStringView.h>
#include "LgfFormatter.h"

int main()
{
	std::cout << Lgfypp::lgfTime::getTimestamp() << std::endl;
	fmt::print("Hello, {}!", "world");  // Python-like format string syntax
	/*std::cout << Lgfypp::LgfLevelUtils::toColorString(Lgfypp::Level::fatal) << "sssssss" << std::endl;
	std::cout << Lgfypp::LgfLevelUtils::toColorString(Lgfypp::Level::warn) << "sssssss" << std::endl;
	std::cout << Lgfypp::LgfLevelUtils::toColorString(Lgfypp::LgfLevelUtils::toLevel(5)) << "sssssdddss" << std::endl;
	std::cout << Lgfypp::LgfLevelUtils::toFormattedColorShortString(Lgfypp::Level::info) << "sssssss" << std::endl;
	std::cout << Lgfypp::LgfLevelUtils::toShortString(Lgfypp::Level::trace) << getProjectVersion() << std::endl;*/
	Lgfypp::LgfFormatter ss;
	STRING_VIEW ssdds("dsdada");
	fmt::memory_buffer out;
	std::cout << "___________________________" << std::endl;
	ss.toColorFormattedString(ssdds, Lgfypp::Color::RED, out);
	std::cout << Lgfypp::toStringView(out)<< std::endl ;
	std::cout << "___________________________" << Lgfypp::toStringView(out) << std::endl;
	std::cout << Lgfypp::lgfTime::getTimestamp() << std::endl;
	Lgfypp::lgfTime::setTimeFormat(Lgfypp::TIMEFORMAT::SHORT);
	std::cout << Lgfypp::lgfTime::getTimestamp() << std::endl;
	Lgfypp::lgfTime::setTimeFormat(Lgfypp::TIMEFORMAT::ALTERNATIVE);
	std::cout << Lgfypp::lgfTime::getTimestamp() << std::endl;
	return 0;
}

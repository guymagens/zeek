// See the file  in the main distribution directory for copyright.

#include "NTP.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace zeek::plugin::detail::Zeek_NTP {

class Plugin : public zeek::plugin::Plugin {
public:
	zeek::plugin::Configuration Configure() override
		{
		AddComponent(new zeek::analyzer::Component("NTP", zeek::analyzer::ntp::NTP_Analyzer::Instantiate));

		zeek::plugin::Configuration config;
		config.name = "Zeek::NTP";
		config.description = "NTP analyzer";
		return config;
		}
} plugin;

} // namespace zeek::plugin::detail::Zeek_NTP

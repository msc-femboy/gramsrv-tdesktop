/*
This file is part of 100Gramm,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "core/launcher.h"

namespace Platform {

class Launcher : public Core::Launcher {
public:
	Launcher(int argc, char *argv[]);

	int exec() override;

private:
	bool launchUpdater(UpdaterLaunch action) override;

	bool _updating = false;

};

} // namespace Platform

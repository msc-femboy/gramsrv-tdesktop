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

private:
	void initHook() override;

	bool launchUpdater(UpdaterLaunch action) override;

};

} // namespace Platform

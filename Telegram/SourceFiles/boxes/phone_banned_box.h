/*
This file is part of 100Gramm,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Window {
class Controller;
} // namespace Window

namespace Ui {

void ShowPhoneBannedError(
	not_null<Window::Controller*> controller,
	const QString &phone);

} // namespace Ui

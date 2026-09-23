/*
This file is part of 100Gramm,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace HistoryView {

enum class DoubleClickQuickAction {
	Reply, // Default.
	React,
	None,
};

[[nodiscard]] DoubleClickQuickAction CurrentQuickAction();

} // namespace HistoryView

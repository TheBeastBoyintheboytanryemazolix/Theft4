#pragma once

namespace rex::thread {
// Runtime wait fixes are enabled by default on iOS/macOS. Configure once before
// guest startup if a diagnostic build needs to disable them.
bool ConfigureRuntimeWaitFixes(bool enabled);
bool RuntimeWaitFixesEnabled();
}  // namespace rex::thread

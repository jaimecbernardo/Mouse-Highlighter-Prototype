// header.h : include file for standard system include files,
// or project specific include files
//


#pragma once

#define COMPOSITION
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>
#include <strsafe.h>
#include <hidusage.h>

#ifdef COMPOSITION
#include <windows.ui.composition.interop.h>
#include <DispatcherQueue.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.Composition.Desktop.h>
#include <winrt/Windows.Foundation.Collections.h>
#endif

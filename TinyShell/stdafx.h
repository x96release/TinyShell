#pragma once
#define WIN32_CLEAN_AND_MEAN
#include <Windows.h>
#include <tchar.h>
#include <comdef.h>
#include <iostream>
#include <fstream>

#include <metahost.h>
#pragma comment(lib, "mscoree.lib")
#import "mscorlib.tlb" raw_interfaces_only high_property_prefixes("_get", "_put", "_putref") rename("ReportEvent", "InteropServices_ReportEvent")
using namespace mscorlib;

int ResultHandler(HRESULT);
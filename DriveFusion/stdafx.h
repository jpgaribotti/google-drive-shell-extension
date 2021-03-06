/*
Copyright 2014 Google Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS  // some CString constructors will be explicit


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include "Config.h"
#include "DriveServiceConfig.h"

#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <ShlObj.h>
#include <atlcoll.h>
#include <Shobjidl.h>
#include <string>
#include <shidfact.h>
#include <propsys.h>
#include <propkey.h>
#include <atlcom.h>
#include <atlcoll.h>
#include <stdlib.h>
#include <vector>
#include <Strsafe.h>
#include <stack>
#include <shidfact.h>
#include <propkeydef.h>
#include <propkey.h>

#include "guids.h"
#include "Log.h"
#include "PropVariant.h"
#include "IDList.h"
#include "PathInfo.h"
#include "ErrorSignaling.h"
#include "FileManager.h"

#define IDI_ROOT            100
#define IDI_FOLDER          101
#define IDI_FILE            103

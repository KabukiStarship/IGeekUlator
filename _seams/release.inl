/* IGEEK Ulator @version 0.x
@link    https://github.com/kabuki-starship/igeek.ulator.git
@file    /seams/01/bar.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Cale McCollough; all right reserved (R). 
This Source Code Form is subject to the terms of the Mozilla Public License, 
v. 2.0. If a copy of the MPL was not distributed with this file, You can 
obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once
#include <module_config.h>

#if SEAM == THEATER_0
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace project { namespace theater { 
inline const CHA* _1_Bar (CHA* seam_log, CHA* seam_end, const CHA* args) {
#if SEAM >= THEATER_0
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo fun.");

#endif
  return 0;
}
}  //< namespace theater
}  //< namespace project

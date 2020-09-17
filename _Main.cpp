/* Kabuki Toolkit @version 0.x
@link    https://github.com/kabuki-starship/kabuki.toolkit.git
@file    /kabuki/seam_tree.cc
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_config.h"

#include <script2/global.h"

/*
#include <kabuki/hal/global.h"

using namespace _;

int main(int arg_count, char** args) {
  enum { kSize = 1024 };
  char _log[kSize];
  return SeamTreeTest<_0_0_0_F2>(arg_count, args, _log, kSize); */

int main(int arg_count, char** args) {
  enum { kSize = 1024 };
  char _log[kSize];
  return ::_::TestTree<TestKabukiGraph>(arg_count, args, _log, kSize);
}

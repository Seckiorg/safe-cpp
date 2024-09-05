// Copyright 2024 Christian Mazakas
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once
#feature on safety

#include <std2.h>

int main()
{
  std2::vector<int> xs = {0, 1, 2, 3};
  xs[xs.size()];
}
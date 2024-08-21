#feature on safety

#include <std2/box.h>
#include <std2/unique_ptr.h>

#include "helpers.h"

void box_constructor() safe
{
  std2::box<int> p = 1337;
  // TODO: refactor this once Sean adds syntax support
  assert_eq((^p).operator*(), 1337);
  assert_eq(*p, 1337);

  int^ x = (^p).operator*();
  *x = 7331;

  assert_eq(*p, 7331);
}

void unique_ptr_constructor() safe
{
  // std2::unique_ptr<int> p = .some(std2::box<int>(1337));
  // auto x = match(p) -> int {
  //   .some(x) => { *x };
  //   .none => { 7331 };
  // };

  // assert_eq(x, 1337);

  static_assert(sizeof(std2::unique_ptr<int>) == sizeof(std2::box<int>));
}

int main()
{
  box_constructor();
  unique_ptr_constructor();
}
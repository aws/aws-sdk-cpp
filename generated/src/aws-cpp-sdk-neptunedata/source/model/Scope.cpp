/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptunedata/model/Scope.h>

using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {
namespace ScopeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int QUADS_HASH = HashingUtils::HashString("QUADS");
static const int DICTIONARIES_HASH = HashingUtils::HashString("DICTIONARIES");

Scope GetScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return Scope::ALL;
  } else if (hashCode == QUADS_HASH) {
    return Scope::QUADS;
  } else if (hashCode == DICTIONARIES_HASH) {
    return Scope::DICTIONARIES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Scope>(hashCode);
  }

  return Scope::NOT_SET;
}

Aws::String GetNameForScope(Scope enumValue) {
  switch (enumValue) {
    case Scope::NOT_SET:
      return {};
    case Scope::ALL:
      return "ALL";
    case Scope::QUADS:
      return "QUADS";
    case Scope::DICTIONARIES:
      return "DICTIONARIES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws

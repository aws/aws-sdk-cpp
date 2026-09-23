/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/Scheme.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace SchemeMapper {

static const int internet_facing_HASH = HashingUtils::HashString("internet-facing");
static const int internal_HASH = HashingUtils::HashString("internal");

Scheme GetSchemeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == internet_facing_HASH) {
    return Scheme::internet_facing;
  } else if (hashCode == internal_HASH) {
    return Scheme::internal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Scheme>(hashCode);
  }

  return Scheme::NOT_SET;
}

Aws::String GetNameForScheme(Scheme enumValue) {
  switch (enumValue) {
    case Scheme::NOT_SET:
      return {};
    case Scheme::internet_facing:
      return "internet-facing";
    case Scheme::internal:
      return "internal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SchemeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/TlsInterceptMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace TlsInterceptModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

TlsInterceptMode GetTlsInterceptModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return TlsInterceptMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return TlsInterceptMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TlsInterceptMode>(hashCode);
  }

  return TlsInterceptMode::NOT_SET;
}

Aws::String GetNameForTlsInterceptMode(TlsInterceptMode enumValue) {
  switch (enumValue) {
    case TlsInterceptMode::NOT_SET:
      return {};
    case TlsInterceptMode::ENABLED:
      return "ENABLED";
    case TlsInterceptMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TlsInterceptModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/TLSInspectionScopeDeploymentMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace TLSInspectionScopeDeploymentModeMapper {

static const int TRANSPARENT_FIREWALL_ONLY_HASH = HashingUtils::HashString("TRANSPARENT_FIREWALL_ONLY");
static const int EXPLICIT_PROXY_ONLY_HASH = HashingUtils::HashString("EXPLICIT_PROXY_ONLY");
static const int ALL_HASH = HashingUtils::HashString("ALL");

TLSInspectionScopeDeploymentMode GetTLSInspectionScopeDeploymentModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRANSPARENT_FIREWALL_ONLY_HASH) {
    return TLSInspectionScopeDeploymentMode::TRANSPARENT_FIREWALL_ONLY;
  } else if (hashCode == EXPLICIT_PROXY_ONLY_HASH) {
    return TLSInspectionScopeDeploymentMode::EXPLICIT_PROXY_ONLY;
  } else if (hashCode == ALL_HASH) {
    return TLSInspectionScopeDeploymentMode::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TLSInspectionScopeDeploymentMode>(hashCode);
  }

  return TLSInspectionScopeDeploymentMode::NOT_SET;
}

Aws::String GetNameForTLSInspectionScopeDeploymentMode(TLSInspectionScopeDeploymentMode enumValue) {
  switch (enumValue) {
    case TLSInspectionScopeDeploymentMode::NOT_SET:
      return {};
    case TLSInspectionScopeDeploymentMode::TRANSPARENT_FIREWALL_ONLY:
      return "TRANSPARENT_FIREWALL_ONLY";
    case TLSInspectionScopeDeploymentMode::EXPLICIT_PROXY_ONLY:
      return "EXPLICIT_PROXY_ONLY";
    case TLSInspectionScopeDeploymentMode::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TLSInspectionScopeDeploymentModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws

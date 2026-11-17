/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/AzureEventHubTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace AzureEventHubTierMapper {

static const int Standard_HASH = HashingUtils::HashString("Standard");
static const int Premium_HASH = HashingUtils::HashString("Premium");

AzureEventHubTier GetAzureEventHubTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Standard_HASH) {
    return AzureEventHubTier::Standard;
  } else if (hashCode == Premium_HASH) {
    return AzureEventHubTier::Premium;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AzureEventHubTier>(hashCode);
  }

  return AzureEventHubTier::NOT_SET;
}

Aws::String GetNameForAzureEventHubTier(AzureEventHubTier enumValue) {
  switch (enumValue) {
    case AzureEventHubTier::NOT_SET:
      return {};
    case AzureEventHubTier::Standard:
      return "Standard";
    case AzureEventHubTier::Premium:
      return "Premium";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AzureEventHubTierMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws

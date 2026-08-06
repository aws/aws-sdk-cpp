/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FreeTrialType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FreeTrialTypeMapper {

static const int SECURITY_HUB_V2_HASH = HashingUtils::HashString("SECURITY_HUB_V2");
static const int SECURITY_HUB_V2_MULTI_CLOUD_AZURE_HASH = HashingUtils::HashString("SECURITY_HUB_V2_MULTI_CLOUD_AZURE");

FreeTrialType GetFreeTrialTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECURITY_HUB_V2_HASH) {
    return FreeTrialType::SECURITY_HUB_V2;
  } else if (hashCode == SECURITY_HUB_V2_MULTI_CLOUD_AZURE_HASH) {
    return FreeTrialType::SECURITY_HUB_V2_MULTI_CLOUD_AZURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FreeTrialType>(hashCode);
  }

  return FreeTrialType::NOT_SET;
}

Aws::String GetNameForFreeTrialType(FreeTrialType enumValue) {
  switch (enumValue) {
    case FreeTrialType::NOT_SET:
      return {};
    case FreeTrialType::SECURITY_HUB_V2:
      return "SECURITY_HUB_V2";
    case FreeTrialType::SECURITY_HUB_V2_MULTI_CLOUD_AZURE:
      return "SECURITY_HUB_V2_MULTI_CLOUD_AZURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FreeTrialTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

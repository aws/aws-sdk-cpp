/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/ReadinessLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace ReadinessLevelMapper {

static const int SalesReady_HASH = HashingUtils::HashString("SalesReady");
static const int MarketingReady_HASH = HashingUtils::HashString("MarketingReady");
static const int LowPotential_HASH = HashingUtils::HashString("LowPotential");

ReadinessLevel GetReadinessLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SalesReady_HASH) {
    return ReadinessLevel::SalesReady;
  } else if (hashCode == MarketingReady_HASH) {
    return ReadinessLevel::MarketingReady;
  } else if (hashCode == LowPotential_HASH) {
    return ReadinessLevel::LowPotential;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReadinessLevel>(hashCode);
  }

  return ReadinessLevel::NOT_SET;
}

Aws::String GetNameForReadinessLevel(ReadinessLevel enumValue) {
  switch (enumValue) {
    case ReadinessLevel::NOT_SET:
      return {};
    case ReadinessLevel::SalesReady:
      return "SalesReady";
    case ReadinessLevel::MarketingReady:
      return "MarketingReady";
    case ReadinessLevel::LowPotential:
      return "LowPotential";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReadinessLevelMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws

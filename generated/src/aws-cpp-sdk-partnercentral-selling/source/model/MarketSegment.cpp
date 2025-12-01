/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/MarketSegment.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace MarketSegmentMapper {

static const int Enterprise_HASH = HashingUtils::HashString("Enterprise");
static const int Large_HASH = HashingUtils::HashString("Large");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int Small_HASH = HashingUtils::HashString("Small");
static const int Micro_HASH = HashingUtils::HashString("Micro");

MarketSegment GetMarketSegmentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enterprise_HASH) {
    return MarketSegment::Enterprise;
  } else if (hashCode == Large_HASH) {
    return MarketSegment::Large;
  } else if (hashCode == Medium_HASH) {
    return MarketSegment::Medium;
  } else if (hashCode == Small_HASH) {
    return MarketSegment::Small;
  } else if (hashCode == Micro_HASH) {
    return MarketSegment::Micro;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MarketSegment>(hashCode);
  }

  return MarketSegment::NOT_SET;
}

Aws::String GetNameForMarketSegment(MarketSegment enumValue) {
  switch (enumValue) {
    case MarketSegment::NOT_SET:
      return {};
    case MarketSegment::Enterprise:
      return "Enterprise";
    case MarketSegment::Large:
      return "Large";
    case MarketSegment::Medium:
      return "Medium";
    case MarketSegment::Small:
      return "Small";
    case MarketSegment::Micro:
      return "Micro";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MarketSegmentMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws

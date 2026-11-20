/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/AZAffinityLocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace AZAffinityLocationTypeMapper {

static const int AvailabilityZone_HASH = HashingUtils::HashString("AvailabilityZone");
static const int AvailabilityZoneGroup_HASH = HashingUtils::HashString("AvailabilityZoneGroup");
static const int Region_HASH = HashingUtils::HashString("Region");
static const int Partition_HASH = HashingUtils::HashString("Partition");
static const int Global_HASH = HashingUtils::HashString("Global");

AZAffinityLocationType GetAZAffinityLocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AvailabilityZone_HASH) {
    return AZAffinityLocationType::AvailabilityZone;
  } else if (hashCode == AvailabilityZoneGroup_HASH) {
    return AZAffinityLocationType::AvailabilityZoneGroup;
  } else if (hashCode == Region_HASH) {
    return AZAffinityLocationType::Region;
  } else if (hashCode == Partition_HASH) {
    return AZAffinityLocationType::Partition;
  } else if (hashCode == Global_HASH) {
    return AZAffinityLocationType::Global;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AZAffinityLocationType>(hashCode);
  }

  return AZAffinityLocationType::NOT_SET;
}

Aws::String GetNameForAZAffinityLocationType(AZAffinityLocationType enumValue) {
  switch (enumValue) {
    case AZAffinityLocationType::NOT_SET:
      return {};
    case AZAffinityLocationType::AvailabilityZone:
      return "AvailabilityZone";
    case AZAffinityLocationType::AvailabilityZoneGroup:
      return "AvailabilityZoneGroup";
    case AZAffinityLocationType::Region:
      return "Region";
    case AZAffinityLocationType::Partition:
      return "Partition";
    case AZAffinityLocationType::Global:
      return "Global";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AZAffinityLocationTypeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws

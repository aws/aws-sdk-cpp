/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/HostedZoneAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace HostedZoneAssociationStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

HostedZoneAssociationStatus GetHostedZoneAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return HostedZoneAssociationStatus::CREATING;
  } else if (hashCode == OPERATIONAL_HASH) {
    return HostedZoneAssociationStatus::OPERATIONAL;
  } else if (hashCode == DELETING_HASH) {
    return HostedZoneAssociationStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HostedZoneAssociationStatus>(hashCode);
  }

  return HostedZoneAssociationStatus::NOT_SET;
}

Aws::String GetNameForHostedZoneAssociationStatus(HostedZoneAssociationStatus enumValue) {
  switch (enumValue) {
    case HostedZoneAssociationStatus::NOT_SET:
      return {};
    case HostedZoneAssociationStatus::CREATING:
      return "CREATING";
    case HostedZoneAssociationStatus::OPERATIONAL:
      return "OPERATIONAL";
    case HostedZoneAssociationStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HostedZoneAssociationStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws

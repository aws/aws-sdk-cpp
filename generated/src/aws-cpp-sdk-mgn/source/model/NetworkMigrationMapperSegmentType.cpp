/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationMapperSegmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationMapperSegmentTypeMapper {

static const int WORKLOAD_HASH = HashingUtils::HashString("WORKLOAD");
static const int APPLIANCE_HASH = HashingUtils::HashString("APPLIANCE");

NetworkMigrationMapperSegmentType GetNetworkMigrationMapperSegmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WORKLOAD_HASH) {
    return NetworkMigrationMapperSegmentType::WORKLOAD;
  } else if (hashCode == APPLIANCE_HASH) {
    return NetworkMigrationMapperSegmentType::APPLIANCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationMapperSegmentType>(hashCode);
  }

  return NetworkMigrationMapperSegmentType::NOT_SET;
}

Aws::String GetNameForNetworkMigrationMapperSegmentType(NetworkMigrationMapperSegmentType enumValue) {
  switch (enumValue) {
    case NetworkMigrationMapperSegmentType::NOT_SET:
      return {};
    case NetworkMigrationMapperSegmentType::WORKLOAD:
      return "WORKLOAD";
    case NetworkMigrationMapperSegmentType::APPLIANCE:
      return "APPLIANCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationMapperSegmentTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws

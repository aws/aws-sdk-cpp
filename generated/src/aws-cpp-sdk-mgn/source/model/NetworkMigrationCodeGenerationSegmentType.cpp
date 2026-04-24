/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationSegmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationCodeGenerationSegmentTypeMapper {

static const int WORKLOAD_HASH = HashingUtils::HashString("WORKLOAD");
static const int APPLIANCE_HASH = HashingUtils::HashString("APPLIANCE");
static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");

NetworkMigrationCodeGenerationSegmentType GetNetworkMigrationCodeGenerationSegmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WORKLOAD_HASH) {
    return NetworkMigrationCodeGenerationSegmentType::WORKLOAD;
  } else if (hashCode == APPLIANCE_HASH) {
    return NetworkMigrationCodeGenerationSegmentType::APPLIANCE;
  } else if (hashCode == NETWORK_HASH) {
    return NetworkMigrationCodeGenerationSegmentType::NETWORK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationCodeGenerationSegmentType>(hashCode);
  }

  return NetworkMigrationCodeGenerationSegmentType::NOT_SET;
}

Aws::String GetNameForNetworkMigrationCodeGenerationSegmentType(NetworkMigrationCodeGenerationSegmentType enumValue) {
  switch (enumValue) {
    case NetworkMigrationCodeGenerationSegmentType::NOT_SET:
      return {};
    case NetworkMigrationCodeGenerationSegmentType::WORKLOAD:
      return "WORKLOAD";
    case NetworkMigrationCodeGenerationSegmentType::APPLIANCE:
      return "APPLIANCE";
    case NetworkMigrationCodeGenerationSegmentType::NETWORK:
      return "NETWORK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationCodeGenerationSegmentTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/ResourceDeploymentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace ResourceDeploymentTypeMapper {

static const int SINGLE_AZ_HASH = HashingUtils::HashString("SINGLE_AZ");
static const int WITH_MULTIAZ_STANDBY_HASH = HashingUtils::HashString("WITH_MULTIAZ_STANDBY");
static const int MULTI_NODE_READ_REPLICAS_HASH = HashingUtils::HashString("MULTI_NODE_READ_REPLICAS");

ResourceDeploymentType GetResourceDeploymentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_AZ_HASH) {
    return ResourceDeploymentType::SINGLE_AZ;
  } else if (hashCode == WITH_MULTIAZ_STANDBY_HASH) {
    return ResourceDeploymentType::WITH_MULTIAZ_STANDBY;
  } else if (hashCode == MULTI_NODE_READ_REPLICAS_HASH) {
    return ResourceDeploymentType::MULTI_NODE_READ_REPLICAS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceDeploymentType>(hashCode);
  }

  return ResourceDeploymentType::NOT_SET;
}

Aws::String GetNameForResourceDeploymentType(ResourceDeploymentType enumValue) {
  switch (enumValue) {
    case ResourceDeploymentType::NOT_SET:
      return {};
    case ResourceDeploymentType::SINGLE_AZ:
      return "SINGLE_AZ";
    case ResourceDeploymentType::WITH_MULTIAZ_STANDBY:
      return "WITH_MULTIAZ_STANDBY";
    case ResourceDeploymentType::MULTI_NODE_READ_REPLICAS:
      return "MULTI_NODE_READ_REPLICAS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceDeploymentTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws

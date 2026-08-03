/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace ResourceTypeMapper {

static const int DB_INSTANCE_HASH = HashingUtils::HashString("DB_INSTANCE");
static const int DB_CLUSTER_HASH = HashingUtils::HashString("DB_CLUSTER");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DB_INSTANCE_HASH) {
    return ResourceType::DB_INSTANCE;
  } else if (hashCode == DB_CLUSTER_HASH) {
    return ResourceType::DB_CLUSTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::DB_INSTANCE:
      return "DB_INSTANCE";
    case ResourceType::DB_CLUSTER:
      return "DB_CLUSTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws

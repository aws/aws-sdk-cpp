/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/EngineType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace EngineTypeMapper {

static const int INFLUXDB_V2_HASH = HashingUtils::HashString("INFLUXDB_V2");
static const int INFLUXDB_V3_CORE_HASH = HashingUtils::HashString("INFLUXDB_V3_CORE");
static const int INFLUXDB_V3_ENTERPRISE_HASH = HashingUtils::HashString("INFLUXDB_V3_ENTERPRISE");

EngineType GetEngineTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INFLUXDB_V2_HASH) {
    return EngineType::INFLUXDB_V2;
  } else if (hashCode == INFLUXDB_V3_CORE_HASH) {
    return EngineType::INFLUXDB_V3_CORE;
  } else if (hashCode == INFLUXDB_V3_ENTERPRISE_HASH) {
    return EngineType::INFLUXDB_V3_ENTERPRISE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngineType>(hashCode);
  }

  return EngineType::NOT_SET;
}

Aws::String GetNameForEngineType(EngineType enumValue) {
  switch (enumValue) {
    case EngineType::NOT_SET:
      return {};
    case EngineType::INFLUXDB_V2:
      return "INFLUXDB_V2";
    case EngineType::INFLUXDB_V3_CORE:
      return "INFLUXDB_V3_CORE";
    case EngineType::INFLUXDB_V3_ENTERPRISE:
      return "INFLUXDB_V3_ENTERPRISE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngineTypeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws

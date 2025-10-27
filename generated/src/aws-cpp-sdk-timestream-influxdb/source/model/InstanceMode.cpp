/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/model/InstanceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {
namespace InstanceModeMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");
static const int INGEST_HASH = HashingUtils::HashString("INGEST");
static const int QUERY_HASH = HashingUtils::HashString("QUERY");
static const int COMPACT_HASH = HashingUtils::HashString("COMPACT");
static const int PROCESS_HASH = HashingUtils::HashString("PROCESS");

InstanceMode GetInstanceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return InstanceMode::PRIMARY;
  } else if (hashCode == STANDBY_HASH) {
    return InstanceMode::STANDBY;
  } else if (hashCode == REPLICA_HASH) {
    return InstanceMode::REPLICA;
  } else if (hashCode == INGEST_HASH) {
    return InstanceMode::INGEST;
  } else if (hashCode == QUERY_HASH) {
    return InstanceMode::QUERY;
  } else if (hashCode == COMPACT_HASH) {
    return InstanceMode::COMPACT;
  } else if (hashCode == PROCESS_HASH) {
    return InstanceMode::PROCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceMode>(hashCode);
  }

  return InstanceMode::NOT_SET;
}

Aws::String GetNameForInstanceMode(InstanceMode enumValue) {
  switch (enumValue) {
    case InstanceMode::NOT_SET:
      return {};
    case InstanceMode::PRIMARY:
      return "PRIMARY";
    case InstanceMode::STANDBY:
      return "STANDBY";
    case InstanceMode::REPLICA:
      return "REPLICA";
    case InstanceMode::INGEST:
      return "INGEST";
    case InstanceMode::QUERY:
      return "QUERY";
    case InstanceMode::COMPACT:
      return "COMPACT";
    case InstanceMode::PROCESS:
      return "PROCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceModeMapper
}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DataSafeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DataSafeStatusMapper {

static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
static const int NOT_REGISTERED_HASH = HashingUtils::HashString("NOT_REGISTERED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DataSafeStatus GetDataSafeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGISTERING_HASH) {
    return DataSafeStatus::REGISTERING;
  } else if (hashCode == REGISTERED_HASH) {
    return DataSafeStatus::REGISTERED;
  } else if (hashCode == DEREGISTERING_HASH) {
    return DataSafeStatus::DEREGISTERING;
  } else if (hashCode == NOT_REGISTERED_HASH) {
    return DataSafeStatus::NOT_REGISTERED;
  } else if (hashCode == FAILED_HASH) {
    return DataSafeStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSafeStatus>(hashCode);
  }

  return DataSafeStatus::NOT_SET;
}

Aws::String GetNameForDataSafeStatus(DataSafeStatus enumValue) {
  switch (enumValue) {
    case DataSafeStatus::NOT_SET:
      return {};
    case DataSafeStatus::REGISTERING:
      return "REGISTERING";
    case DataSafeStatus::REGISTERED:
      return "REGISTERED";
    case DataSafeStatus::DEREGISTERING:
      return "DEREGISTERING";
    case DataSafeStatus::NOT_REGISTERED:
      return "NOT_REGISTERED";
    case DataSafeStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSafeStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws

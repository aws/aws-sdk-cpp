/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DataSetStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DataSetStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

DataSetStatus GetDataSetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return DataSetStatus::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return DataSetStatus::UPDATING;
  } else if (hashCode == ACTIVE_HASH) {
    return DataSetStatus::ACTIVE;
  } else if (hashCode == FAILED_HASH) {
    return DataSetStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return DataSetStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSetStatus>(hashCode);
  }

  return DataSetStatus::NOT_SET;
}

Aws::String GetNameForDataSetStatus(DataSetStatus enumValue) {
  switch (enumValue) {
    case DataSetStatus::NOT_SET:
      return {};
    case DataSetStatus::CREATING:
      return "CREATING";
    case DataSetStatus::UPDATING:
      return "UPDATING";
    case DataSetStatus::ACTIVE:
      return "ACTIVE";
    case DataSetStatus::FAILED:
      return "FAILED";
    case DataSetStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSetStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

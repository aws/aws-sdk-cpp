/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3files/model/LifeCycleState.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {
namespace LifeCycleStateMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int creating_HASH = HashingUtils::HashString("creating");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");
static const int error_HASH = HashingUtils::HashString("error");
static const int updating_HASH = HashingUtils::HashString("updating");

LifeCycleState GetLifeCycleStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return LifeCycleState::available;
  } else if (hashCode == creating_HASH) {
    return LifeCycleState::creating;
  } else if (hashCode == deleting_HASH) {
    return LifeCycleState::deleting;
  } else if (hashCode == deleted_HASH) {
    return LifeCycleState::deleted;
  } else if (hashCode == error_HASH) {
    return LifeCycleState::error;
  } else if (hashCode == updating_HASH) {
    return LifeCycleState::updating;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LifeCycleState>(hashCode);
  }

  return LifeCycleState::NOT_SET;
}

Aws::String GetNameForLifeCycleState(LifeCycleState enumValue) {
  switch (enumValue) {
    case LifeCycleState::NOT_SET:
      return {};
    case LifeCycleState::available:
      return "available";
    case LifeCycleState::creating:
      return "creating";
    case LifeCycleState::deleting:
      return "deleting";
    case LifeCycleState::deleted:
      return "deleted";
    case LifeCycleState::error:
      return "error";
    case LifeCycleState::updating:
      return "updating";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LifeCycleStateMapper
}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

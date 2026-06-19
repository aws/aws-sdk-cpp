/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mq/model/SharedResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {
namespace SharedResourceStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int SETUP_IN_PROGRESS_HASH = HashingUtils::HashString("SETUP_IN_PROGRESS");
static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
static const int PENDING_CREATE_HASH = HashingUtils::HashString("PENDING_CREATE");
static const int PENDING_DELETE_HASH = HashingUtils::HashString("PENDING_DELETE");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

SharedResourceStatus GetSharedResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return SharedResourceStatus::AVAILABLE;
  } else if (hashCode == SETUP_IN_PROGRESS_HASH) {
    return SharedResourceStatus::SETUP_IN_PROGRESS;
  } else if (hashCode == DELETION_IN_PROGRESS_HASH) {
    return SharedResourceStatus::DELETION_IN_PROGRESS;
  } else if (hashCode == PENDING_CREATE_HASH) {
    return SharedResourceStatus::PENDING_CREATE;
  } else if (hashCode == PENDING_DELETE_HASH) {
    return SharedResourceStatus::PENDING_DELETE;
  } else if (hashCode == ERROR__HASH) {
    return SharedResourceStatus::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SharedResourceStatus>(hashCode);
  }

  return SharedResourceStatus::NOT_SET;
}

Aws::String GetNameForSharedResourceStatus(SharedResourceStatus enumValue) {
  switch (enumValue) {
    case SharedResourceStatus::NOT_SET:
      return {};
    case SharedResourceStatus::AVAILABLE:
      return "AVAILABLE";
    case SharedResourceStatus::SETUP_IN_PROGRESS:
      return "SETUP_IN_PROGRESS";
    case SharedResourceStatus::DELETION_IN_PROGRESS:
      return "DELETION_IN_PROGRESS";
    case SharedResourceStatus::PENDING_CREATE:
      return "PENDING_CREATE";
    case SharedResourceStatus::PENDING_DELETE:
      return "PENDING_DELETE";
    case SharedResourceStatus::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SharedResourceStatusMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws

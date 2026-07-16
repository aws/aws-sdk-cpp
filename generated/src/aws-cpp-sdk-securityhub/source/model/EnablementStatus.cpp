/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/EnablementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace EnablementStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int PENDING_ENABLEMENT_HASH = HashingUtils::HashString("PENDING_ENABLEMENT");
static const int FAILED_TO_ENABLE_HASH = HashingUtils::HashString("FAILED_TO_ENABLE");
static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");
static const int FAILED_TO_UPDATE_HASH = HashingUtils::HashString("FAILED_TO_UPDATE");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
static const int FAILED_TO_DELETE_HASH = HashingUtils::HashString("FAILED_TO_DELETE");

EnablementStatus GetEnablementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EnablementStatus::ENABLED;
  } else if (hashCode == PENDING_ENABLEMENT_HASH) {
    return EnablementStatus::PENDING_ENABLEMENT;
  } else if (hashCode == FAILED_TO_ENABLE_HASH) {
    return EnablementStatus::FAILED_TO_ENABLE;
  } else if (hashCode == PENDING_UPDATE_HASH) {
    return EnablementStatus::PENDING_UPDATE;
  } else if (hashCode == FAILED_TO_UPDATE_HASH) {
    return EnablementStatus::FAILED_TO_UPDATE;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return EnablementStatus::PENDING_DELETION;
  } else if (hashCode == FAILED_TO_DELETE_HASH) {
    return EnablementStatus::FAILED_TO_DELETE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnablementStatus>(hashCode);
  }

  return EnablementStatus::NOT_SET;
}

Aws::String GetNameForEnablementStatus(EnablementStatus enumValue) {
  switch (enumValue) {
    case EnablementStatus::NOT_SET:
      return {};
    case EnablementStatus::ENABLED:
      return "ENABLED";
    case EnablementStatus::PENDING_ENABLEMENT:
      return "PENDING_ENABLEMENT";
    case EnablementStatus::FAILED_TO_ENABLE:
      return "FAILED_TO_ENABLE";
    case EnablementStatus::PENDING_UPDATE:
      return "PENDING_UPDATE";
    case EnablementStatus::FAILED_TO_UPDATE:
      return "FAILED_TO_UPDATE";
    case EnablementStatus::PENDING_DELETION:
      return "PENDING_DELETION";
    case EnablementStatus::FAILED_TO_DELETE:
      return "FAILED_TO_DELETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnablementStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

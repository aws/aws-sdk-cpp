/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KbIngestionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KbIngestionStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");

KbIngestionStatus GetKbIngestionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return KbIngestionStatus::QUEUED;
  } else if (hashCode == RUNNING_HASH) {
    return KbIngestionStatus::RUNNING;
  } else if (hashCode == FAILED_HASH) {
    return KbIngestionStatus::FAILED;
  } else if (hashCode == COMPLETED_HASH) {
    return KbIngestionStatus::COMPLETED;
  } else if (hashCode == INCOMPLETE_HASH) {
    return KbIngestionStatus::INCOMPLETE;
  } else if (hashCode == CANCELLED_HASH) {
    return KbIngestionStatus::CANCELLED;
  } else if (hashCode == CANCELLING_HASH) {
    return KbIngestionStatus::CANCELLING;
  } else if (hashCode == TIMEOUT_HASH) {
    return KbIngestionStatus::TIMEOUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KbIngestionStatus>(hashCode);
  }

  return KbIngestionStatus::NOT_SET;
}

Aws::String GetNameForKbIngestionStatus(KbIngestionStatus enumValue) {
  switch (enumValue) {
    case KbIngestionStatus::NOT_SET:
      return {};
    case KbIngestionStatus::QUEUED:
      return "QUEUED";
    case KbIngestionStatus::RUNNING:
      return "RUNNING";
    case KbIngestionStatus::FAILED:
      return "FAILED";
    case KbIngestionStatus::COMPLETED:
      return "COMPLETED";
    case KbIngestionStatus::INCOMPLETE:
      return "INCOMPLETE";
    case KbIngestionStatus::CANCELLED:
      return "CANCELLED";
    case KbIngestionStatus::CANCELLING:
      return "CANCELLING";
    case KbIngestionStatus::TIMEOUT:
      return "TIMEOUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KbIngestionStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

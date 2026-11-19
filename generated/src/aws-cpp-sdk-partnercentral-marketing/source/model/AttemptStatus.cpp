/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/AttemptStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace AttemptStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AttemptStatus GetAttemptStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return AttemptStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return AttemptStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return AttemptStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttemptStatus>(hashCode);
  }

  return AttemptStatus::NOT_SET;
}

Aws::String GetNameForAttemptStatus(AttemptStatus enumValue) {
  switch (enumValue) {
    case AttemptStatus::NOT_SET:
      return {};
    case AttemptStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case AttemptStatus::SUCCEEDED:
      return "SUCCEEDED";
    case AttemptStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttemptStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws

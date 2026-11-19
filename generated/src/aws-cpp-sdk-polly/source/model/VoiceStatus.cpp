/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/VoiceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace VoiceStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int active_HASH = HashingUtils::HashString("active");
static const int failed_HASH = HashingUtils::HashString("failed");

VoiceStatus GetVoiceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return VoiceStatus::pending;
  } else if (hashCode == active_HASH) {
    return VoiceStatus::active;
  } else if (hashCode == failed_HASH) {
    return VoiceStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VoiceStatus>(hashCode);
  }

  return VoiceStatus::NOT_SET;
}

Aws::String GetNameForVoiceStatus(VoiceStatus enumValue) {
  switch (enumValue) {
    case VoiceStatus::NOT_SET:
      return {};
    case VoiceStatus::pending:
      return "pending";
    case VoiceStatus::active:
      return "active";
    case VoiceStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VoiceStatusMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws

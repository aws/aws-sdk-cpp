/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/MfaSyncStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace MfaSyncStatusMapper {

static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
static const int OUT_OF_SYNC_HASH = HashingUtils::HashString("OUT_OF_SYNC");

MfaSyncStatus GetMfaSyncStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_SYNC_HASH) {
    return MfaSyncStatus::IN_SYNC;
  } else if (hashCode == OUT_OF_SYNC_HASH) {
    return MfaSyncStatus::OUT_OF_SYNC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MfaSyncStatus>(hashCode);
  }

  return MfaSyncStatus::NOT_SET;
}

Aws::String GetNameForMfaSyncStatus(MfaSyncStatus enumValue) {
  switch (enumValue) {
    case MfaSyncStatus::NOT_SET:
      return {};
    case MfaSyncStatus::IN_SYNC:
      return "IN_SYNC";
    case MfaSyncStatus::OUT_OF_SYNC:
      return "OUT_OF_SYNC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MfaSyncStatusMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws

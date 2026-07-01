/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/supportauthz/model/SupportPermitStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {
namespace SupportPermitStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

SupportPermitStatus GetSupportPermitStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return SupportPermitStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return SupportPermitStatus::INACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return SupportPermitStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupportPermitStatus>(hashCode);
  }

  return SupportPermitStatus::NOT_SET;
}

Aws::String GetNameForSupportPermitStatus(SupportPermitStatus enumValue) {
  switch (enumValue) {
    case SupportPermitStatus::NOT_SET:
      return {};
    case SupportPermitStatus::ACTIVE:
      return "ACTIVE";
    case SupportPermitStatus::INACTIVE:
      return "INACTIVE";
    case SupportPermitStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupportPermitStatusMapper
}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/CspmEnablementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace CspmEnablementStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int PENDING_ENABLEMENT_HASH = HashingUtils::HashString("PENDING_ENABLEMENT");
static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");

CspmEnablementStatus GetCspmEnablementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return CspmEnablementStatus::ENABLED;
  } else if (hashCode == PENDING_ENABLEMENT_HASH) {
    return CspmEnablementStatus::PENDING_ENABLEMENT;
  } else if (hashCode == PENDING_UPDATE_HASH) {
    return CspmEnablementStatus::PENDING_UPDATE;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return CspmEnablementStatus::PENDING_DELETION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CspmEnablementStatus>(hashCode);
  }

  return CspmEnablementStatus::NOT_SET;
}

Aws::String GetNameForCspmEnablementStatus(CspmEnablementStatus enumValue) {
  switch (enumValue) {
    case CspmEnablementStatus::NOT_SET:
      return {};
    case CspmEnablementStatus::ENABLED:
      return "ENABLED";
    case CspmEnablementStatus::PENDING_ENABLEMENT:
      return "PENDING_ENABLEMENT";
    case CspmEnablementStatus::PENDING_UPDATE:
      return "PENDING_UPDATE";
    case CspmEnablementStatus::PENDING_DELETION:
      return "PENDING_DELETION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CspmEnablementStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

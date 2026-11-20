/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/DueStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace DueStatusMapper {

static const int DUE_HASH = HashingUtils::HashString("DUE");
static const int PAST_DUE_HASH = HashingUtils::HashString("PAST_DUE");

DueStatus GetDueStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DUE_HASH) {
    return DueStatus::DUE;
  } else if (hashCode == PAST_DUE_HASH) {
    return DueStatus::PAST_DUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DueStatus>(hashCode);
  }

  return DueStatus::NOT_SET;
}

Aws::String GetNameForDueStatus(DueStatus enumValue) {
  switch (enumValue) {
    case DueStatus::NOT_SET:
      return {};
    case DueStatus::DUE:
      return "DUE";
    case DueStatus::PAST_DUE:
      return "PAST_DUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DueStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws

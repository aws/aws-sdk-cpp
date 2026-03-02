/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/trustedadvisor/model/StatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace TrustedAdvisor {
namespace Model {
namespace StatusReasonMapper {

static const int no_data_ok_HASH = HashingUtils::HashString("no_data_ok");

StatusReason GetStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == no_data_ok_HASH) {
    return StatusReason::no_data_ok;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StatusReason>(hashCode);
  }

  return StatusReason::NOT_SET;
}

Aws::String GetNameForStatusReason(StatusReason enumValue) {
  switch (enumValue) {
    case StatusReason::NOT_SET:
      return {};
    case StatusReason::no_data_ok:
      return "no_data_ok";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusReasonMapper
}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/OrderingRequirementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace OrderingRequirementStatusMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");
static const int EXEMPT_HASH = HashingUtils::HashString("EXEMPT");

OrderingRequirementStatus GetOrderingRequirementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return OrderingRequirementStatus::PASS;
  } else if (hashCode == FAIL_HASH) {
    return OrderingRequirementStatus::FAIL;
  } else if (hashCode == EXEMPT_HASH) {
    return OrderingRequirementStatus::EXEMPT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrderingRequirementStatus>(hashCode);
  }

  return OrderingRequirementStatus::NOT_SET;
}

Aws::String GetNameForOrderingRequirementStatus(OrderingRequirementStatus enumValue) {
  switch (enumValue) {
    case OrderingRequirementStatus::NOT_SET:
      return {};
    case OrderingRequirementStatus::PASS:
      return "PASS";
    case OrderingRequirementStatus::FAIL:
      return "FAIL";
    case OrderingRequirementStatus::EXEMPT:
      return "EXEMPT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrderingRequirementStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws

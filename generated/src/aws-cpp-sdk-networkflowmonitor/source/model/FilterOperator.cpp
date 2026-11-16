/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkflowmonitor/model/FilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
namespace FilterOperatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
static const int IN_HASH = HashingUtils::HashString("IN");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");

FilterOperator GetFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return FilterOperator::EQUALS;
  } else if (hashCode == NOT_EQUALS_HASH) {
    return FilterOperator::NOT_EQUALS;
  } else if (hashCode == IN_HASH) {
    return FilterOperator::IN;
  } else if (hashCode == CONTAINS_HASH) {
    return FilterOperator::CONTAINS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterOperator>(hashCode);
  }

  return FilterOperator::NOT_SET;
}

Aws::String GetNameForFilterOperator(FilterOperator enumValue) {
  switch (enumValue) {
    case FilterOperator::NOT_SET:
      return {};
    case FilterOperator::EQUALS:
      return "EQUALS";
    case FilterOperator::NOT_EQUALS:
      return "NOT_EQUALS";
    case FilterOperator::IN:
      return "IN";
    case FilterOperator::CONTAINS:
      return "CONTAINS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws

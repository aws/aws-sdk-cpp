/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/FailureCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace FailureCategoryMapper {

static const int SHARED_FATE_HASH = HashingUtils::HashString("SHARED_FATE");
static const int EXCESSIVE_LOAD_HASH = HashingUtils::HashString("EXCESSIVE_LOAD");
static const int EXCESSIVE_LATENCY_HASH = HashingUtils::HashString("EXCESSIVE_LATENCY");
static const int MISCONFIGURATION_AND_BUGS_HASH = HashingUtils::HashString("MISCONFIGURATION_AND_BUGS");
static const int SINGLE_POINT_OF_FAILURE_HASH = HashingUtils::HashString("SINGLE_POINT_OF_FAILURE");

FailureCategory GetFailureCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_FATE_HASH) {
    return FailureCategory::SHARED_FATE;
  } else if (hashCode == EXCESSIVE_LOAD_HASH) {
    return FailureCategory::EXCESSIVE_LOAD;
  } else if (hashCode == EXCESSIVE_LATENCY_HASH) {
    return FailureCategory::EXCESSIVE_LATENCY;
  } else if (hashCode == MISCONFIGURATION_AND_BUGS_HASH) {
    return FailureCategory::MISCONFIGURATION_AND_BUGS;
  } else if (hashCode == SINGLE_POINT_OF_FAILURE_HASH) {
    return FailureCategory::SINGLE_POINT_OF_FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FailureCategory>(hashCode);
  }

  return FailureCategory::NOT_SET;
}

Aws::String GetNameForFailureCategory(FailureCategory enumValue) {
  switch (enumValue) {
    case FailureCategory::NOT_SET:
      return {};
    case FailureCategory::SHARED_FATE:
      return "SHARED_FATE";
    case FailureCategory::EXCESSIVE_LOAD:
      return "EXCESSIVE_LOAD";
    case FailureCategory::EXCESSIVE_LATENCY:
      return "EXCESSIVE_LATENCY";
    case FailureCategory::MISCONFIGURATION_AND_BUGS:
      return "MISCONFIGURATION_AND_BUGS";
    case FailureCategory::SINGLE_POINT_OF_FAILURE:
      return "SINGLE_POINT_OF_FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FailureCategoryMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestRunSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestRunSourceTypeMapper {

static const int SUCCESS_CRITERIA_HASH = HashingUtils::HashString("SUCCESS_CRITERIA");
static const int OBSERVABILITY_HASH = HashingUtils::HashString("OBSERVABILITY");

TestRunSourceType GetTestRunSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_CRITERIA_HASH) {
    return TestRunSourceType::SUCCESS_CRITERIA;
  } else if (hashCode == OBSERVABILITY_HASH) {
    return TestRunSourceType::OBSERVABILITY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestRunSourceType>(hashCode);
  }

  return TestRunSourceType::NOT_SET;
}

Aws::String GetNameForTestRunSourceType(TestRunSourceType enumValue) {
  switch (enumValue) {
    case TestRunSourceType::NOT_SET:
      return {};
    case TestRunSourceType::SUCCESS_CRITERIA:
      return "SUCCESS_CRITERIA";
    case TestRunSourceType::OBSERVABILITY:
      return "OBSERVABILITY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestRunSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

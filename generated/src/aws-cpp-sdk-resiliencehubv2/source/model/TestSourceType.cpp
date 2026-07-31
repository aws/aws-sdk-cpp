/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestSourceTypeMapper {

static const int SUCCESS_CRITERIA_HASH = HashingUtils::HashString("SUCCESS_CRITERIA");
static const int OBSERVABILITY_HASH = HashingUtils::HashString("OBSERVABILITY");

TestSourceType GetTestSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUCCESS_CRITERIA_HASH) {
    return TestSourceType::SUCCESS_CRITERIA;
  } else if (hashCode == OBSERVABILITY_HASH) {
    return TestSourceType::OBSERVABILITY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestSourceType>(hashCode);
  }

  return TestSourceType::NOT_SET;
}

Aws::String GetNameForTestSourceType(TestSourceType enumValue) {
  switch (enumValue) {
    case TestSourceType::NOT_SET:
      return {};
    case TestSourceType::SUCCESS_CRITERIA:
      return "SUCCESS_CRITERIA";
    case TestSourceType::OBSERVABILITY:
      return "OBSERVABILITY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestSourceTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

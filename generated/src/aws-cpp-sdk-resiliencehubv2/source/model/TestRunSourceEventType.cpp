/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestRunSourceEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestRunSourceEventTypeMapper {

static const int ALARM_HASH = HashingUtils::HashString("ALARM");

TestRunSourceEventType GetTestRunSourceEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALARM_HASH) {
    return TestRunSourceEventType::ALARM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestRunSourceEventType>(hashCode);
  }

  return TestRunSourceEventType::NOT_SET;
}

Aws::String GetNameForTestRunSourceEventType(TestRunSourceEventType enumValue) {
  switch (enumValue) {
    case TestRunSourceEventType::NOT_SET:
      return {};
    case TestRunSourceEventType::ALARM:
      return "ALARM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestRunSourceEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

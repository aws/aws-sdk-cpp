/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestSourceOutcome.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestSourceOutcomeMapper {

static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

TestSourceOutcome GetTestSourceOutcomeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASSED_HASH) {
    return TestSourceOutcome::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return TestSourceOutcome::FAILED;
  } else if (hashCode == ERROR__HASH) {
    return TestSourceOutcome::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestSourceOutcome>(hashCode);
  }

  return TestSourceOutcome::NOT_SET;
}

Aws::String GetNameForTestSourceOutcome(TestSourceOutcome enumValue) {
  switch (enumValue) {
    case TestSourceOutcome::NOT_SET:
      return {};
    case TestSourceOutcome::PASSED:
      return "PASSED";
    case TestSourceOutcome::FAILED:
      return "FAILED";
    case TestSourceOutcome::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestSourceOutcomeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

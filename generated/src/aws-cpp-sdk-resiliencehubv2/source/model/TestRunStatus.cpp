/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestRunStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestRunStatusMapper {

static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int PASSED_HASH = HashingUtils::HashString("PASSED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

TestRunStatus GetTestRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIALIZING_HASH) {
    return TestRunStatus::INITIALIZING;
  } else if (hashCode == RUNNING_HASH) {
    return TestRunStatus::RUNNING;
  } else if (hashCode == STOPPING_HASH) {
    return TestRunStatus::STOPPING;
  } else if (hashCode == PASSED_HASH) {
    return TestRunStatus::PASSED;
  } else if (hashCode == FAILED_HASH) {
    return TestRunStatus::FAILED;
  } else if (hashCode == STOPPED_HASH) {
    return TestRunStatus::STOPPED;
  } else if (hashCode == ERROR__HASH) {
    return TestRunStatus::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestRunStatus>(hashCode);
  }

  return TestRunStatus::NOT_SET;
}

Aws::String GetNameForTestRunStatus(TestRunStatus enumValue) {
  switch (enumValue) {
    case TestRunStatus::NOT_SET:
      return {};
    case TestRunStatus::INITIALIZING:
      return "INITIALIZING";
    case TestRunStatus::RUNNING:
      return "RUNNING";
    case TestRunStatus::STOPPING:
      return "STOPPING";
    case TestRunStatus::PASSED:
      return "PASSED";
    case TestRunStatus::FAILED:
      return "FAILED";
    case TestRunStatus::STOPPED:
      return "STOPPED";
    case TestRunStatus::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestRunStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

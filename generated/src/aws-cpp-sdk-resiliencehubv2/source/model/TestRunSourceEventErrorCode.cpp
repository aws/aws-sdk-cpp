/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestRunSourceEventErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestRunSourceEventErrorCodeMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

TestRunSourceEventErrorCode GetTestRunSourceEventErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return TestRunSourceEventErrorCode::ACCESS_DENIED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return TestRunSourceEventErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestRunSourceEventErrorCode>(hashCode);
  }

  return TestRunSourceEventErrorCode::NOT_SET;
}

Aws::String GetNameForTestRunSourceEventErrorCode(TestRunSourceEventErrorCode enumValue) {
  switch (enumValue) {
    case TestRunSourceEventErrorCode::NOT_SET:
      return {};
    case TestRunSourceEventErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case TestRunSourceEventErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestRunSourceEventErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

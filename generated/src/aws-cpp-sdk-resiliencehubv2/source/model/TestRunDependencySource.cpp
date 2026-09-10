/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/TestRunDependencySource.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace TestRunDependencySourceMapper {

static const int DISCOVERED_HASH = HashingUtils::HashString("DISCOVERED");
static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");

TestRunDependencySource GetTestRunDependencySourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISCOVERED_HASH) {
    return TestRunDependencySource::DISCOVERED;
  } else if (hashCode == MANUAL_HASH) {
    return TestRunDependencySource::MANUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestRunDependencySource>(hashCode);
  }

  return TestRunDependencySource::NOT_SET;
}

Aws::String GetNameForTestRunDependencySource(TestRunDependencySource enumValue) {
  switch (enumValue) {
    case TestRunDependencySource::NOT_SET:
      return {};
    case TestRunDependencySource::DISCOVERED:
      return "DISCOVERED";
    case TestRunDependencySource::MANUAL:
      return "MANUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestRunDependencySourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

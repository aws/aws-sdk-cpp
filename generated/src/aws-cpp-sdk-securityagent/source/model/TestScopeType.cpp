/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/TestScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace TestScopeTypeMapper {

static const int WEB_APP_HASH = HashingUtils::HashString("WEB_APP");
static const int GENERATIVE_AI_APP_HASH = HashingUtils::HashString("GENERATIVE_AI_APP");

TestScopeType GetTestScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WEB_APP_HASH) {
    return TestScopeType::WEB_APP;
  } else if (hashCode == GENERATIVE_AI_APP_HASH) {
    return TestScopeType::GENERATIVE_AI_APP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TestScopeType>(hashCode);
  }

  return TestScopeType::NOT_SET;
}

Aws::String GetNameForTestScopeType(TestScopeType enumValue) {
  switch (enumValue) {
    case TestScopeType::NOT_SET:
      return {};
    case TestScopeType::WEB_APP:
      return "WEB_APP";
    case TestScopeType::GENERATIVE_AI_APP:
      return "GENERATIVE_AI_APP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TestScopeTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

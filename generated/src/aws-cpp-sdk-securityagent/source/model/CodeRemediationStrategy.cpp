/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/CodeRemediationStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace CodeRemediationStrategyMapper {

static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

CodeRemediationStrategy GetCodeRemediationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTOMATIC_HASH) {
    return CodeRemediationStrategy::AUTOMATIC;
  } else if (hashCode == DISABLED_HASH) {
    return CodeRemediationStrategy::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CodeRemediationStrategy>(hashCode);
  }

  return CodeRemediationStrategy::NOT_SET;
}

Aws::String GetNameForCodeRemediationStrategy(CodeRemediationStrategy enumValue) {
  switch (enumValue) {
    case CodeRemediationStrategy::NOT_SET:
      return {};
    case CodeRemediationStrategy::AUTOMATIC:
      return "AUTOMATIC";
    case CodeRemediationStrategy::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CodeRemediationStrategyMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

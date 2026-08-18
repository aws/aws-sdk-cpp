/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/AssessmentResult.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace AssessmentResultMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");

AssessmentResult GetAssessmentResultForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return AssessmentResult::PASS;
  } else if (hashCode == FAIL_HASH) {
    return AssessmentResult::FAIL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentResult>(hashCode);
  }

  return AssessmentResult::NOT_SET;
}

Aws::String GetNameForAssessmentResult(AssessmentResult enumValue) {
  switch (enumValue) {
    case AssessmentResult::NOT_SET:
      return {};
    case AssessmentResult::PASS:
      return "PASS";
    case AssessmentResult::FAIL:
      return "FAIL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentResultMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ControlAssessmentResult.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ControlAssessmentResultMapper {

static const int PASS_HASH = HashingUtils::HashString("PASS");
static const int FAIL_HASH = HashingUtils::HashString("FAIL");
static const int NOT_EXECUTED_HASH = HashingUtils::HashString("NOT_EXECUTED");
static const int EXEMPTION_PASS_HASH = HashingUtils::HashString("EXEMPTION_PASS");

ControlAssessmentResult GetControlAssessmentResultForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PASS_HASH) {
    return ControlAssessmentResult::PASS;
  } else if (hashCode == FAIL_HASH) {
    return ControlAssessmentResult::FAIL;
  } else if (hashCode == NOT_EXECUTED_HASH) {
    return ControlAssessmentResult::NOT_EXECUTED;
  } else if (hashCode == EXEMPTION_PASS_HASH) {
    return ControlAssessmentResult::EXEMPTION_PASS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlAssessmentResult>(hashCode);
  }

  return ControlAssessmentResult::NOT_SET;
}

Aws::String GetNameForControlAssessmentResult(ControlAssessmentResult enumValue) {
  switch (enumValue) {
    case ControlAssessmentResult::NOT_SET:
      return {};
    case ControlAssessmentResult::PASS:
      return "PASS";
    case ControlAssessmentResult::FAIL:
      return "FAIL";
    case ControlAssessmentResult::NOT_EXECUTED:
      return "NOT_EXECUTED";
    case ControlAssessmentResult::EXEMPTION_PASS:
      return "EXEMPTION_PASS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlAssessmentResultMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws

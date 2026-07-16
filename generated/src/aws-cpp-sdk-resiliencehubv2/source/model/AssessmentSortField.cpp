/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/AssessmentSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace AssessmentSortFieldMapper {

static const int STARTED_AT_HASH = HashingUtils::HashString("STARTED_AT");

AssessmentSortField GetAssessmentSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTED_AT_HASH) {
    return AssessmentSortField::STARTED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssessmentSortField>(hashCode);
  }

  return AssessmentSortField::NOT_SET;
}

Aws::String GetNameForAssessmentSortField(AssessmentSortField enumValue) {
  switch (enumValue) {
    case AssessmentSortField::NOT_SET:
      return {};
    case AssessmentSortField::STARTED_AT:
      return "STARTED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssessmentSortFieldMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

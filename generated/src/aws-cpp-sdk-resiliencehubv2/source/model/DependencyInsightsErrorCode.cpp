/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/DependencyInsightsErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace DependencyInsightsErrorCodeMapper {

static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");
static const int LLM_GENERATION_FAILED_HASH = HashingUtils::HashString("LLM_GENERATION_FAILED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

DependencyInsightsErrorCode GetDependencyInsightsErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INSUFFICIENT_DATA_HASH) {
    return DependencyInsightsErrorCode::INSUFFICIENT_DATA;
  } else if (hashCode == LLM_GENERATION_FAILED_HASH) {
    return DependencyInsightsErrorCode::LLM_GENERATION_FAILED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return DependencyInsightsErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DependencyInsightsErrorCode>(hashCode);
  }

  return DependencyInsightsErrorCode::NOT_SET;
}

Aws::String GetNameForDependencyInsightsErrorCode(DependencyInsightsErrorCode enumValue) {
  switch (enumValue) {
    case DependencyInsightsErrorCode::NOT_SET:
      return {};
    case DependencyInsightsErrorCode::INSUFFICIENT_DATA:
      return "INSUFFICIENT_DATA";
    case DependencyInsightsErrorCode::LLM_GENERATION_FAILED:
      return "LLM_GENERATION_FAILED";
    case DependencyInsightsErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DependencyInsightsErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

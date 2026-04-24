/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/EvaluationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace EvaluationStateMapper {

static const int PARTIAL_DATA_HASH = HashingUtils::HashString("PARTIAL_DATA");
static const int EVALUATION_FAILURE_HASH = HashingUtils::HashString("EVALUATION_FAILURE");
static const int EVALUATION_ERROR_HASH = HashingUtils::HashString("EVALUATION_ERROR");

EvaluationState GetEvaluationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PARTIAL_DATA_HASH) {
    return EvaluationState::PARTIAL_DATA;
  } else if (hashCode == EVALUATION_FAILURE_HASH) {
    return EvaluationState::EVALUATION_FAILURE;
  } else if (hashCode == EVALUATION_ERROR_HASH) {
    return EvaluationState::EVALUATION_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationState>(hashCode);
  }

  return EvaluationState::NOT_SET;
}

Aws::String GetNameForEvaluationState(EvaluationState enumValue) {
  switch (enumValue) {
    case EvaluationState::NOT_SET:
      return {};
    case EvaluationState::PARTIAL_DATA:
      return "PARTIAL_DATA";
    case EvaluationState::EVALUATION_FAILURE:
      return "EVALUATION_FAILURE";
    case EvaluationState::EVALUATION_ERROR:
      return "EVALUATION_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationStateMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws

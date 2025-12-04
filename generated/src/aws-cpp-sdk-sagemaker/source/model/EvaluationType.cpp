/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/EvaluationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace EvaluationTypeMapper {

static const int LLMAJEvaluation_HASH = HashingUtils::HashString("LLMAJEvaluation");
static const int CustomScorerEvaluation_HASH = HashingUtils::HashString("CustomScorerEvaluation");
static const int BenchmarkEvaluation_HASH = HashingUtils::HashString("BenchmarkEvaluation");

EvaluationType GetEvaluationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LLMAJEvaluation_HASH) {
    return EvaluationType::LLMAJEvaluation;
  } else if (hashCode == CustomScorerEvaluation_HASH) {
    return EvaluationType::CustomScorerEvaluation;
  } else if (hashCode == BenchmarkEvaluation_HASH) {
    return EvaluationType::BenchmarkEvaluation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationType>(hashCode);
  }

  return EvaluationType::NOT_SET;
}

Aws::String GetNameForEvaluationType(EvaluationType enumValue) {
  switch (enumValue) {
    case EvaluationType::NOT_SET:
      return {};
    case EvaluationType::LLMAJEvaluation:
      return "LLMAJEvaluation";
    case EvaluationType::CustomScorerEvaluation:
      return "CustomScorerEvaluation";
    case EvaluationType::BenchmarkEvaluation:
      return "BenchmarkEvaluation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

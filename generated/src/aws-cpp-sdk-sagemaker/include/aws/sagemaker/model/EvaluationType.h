/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class EvaluationType { NOT_SET, LLMAJEvaluation, CustomScorerEvaluation, BenchmarkEvaluation };

namespace EvaluationTypeMapper {
AWS_SAGEMAKER_API EvaluationType GetEvaluationTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEvaluationType(EvaluationType value);
}  // namespace EvaluationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

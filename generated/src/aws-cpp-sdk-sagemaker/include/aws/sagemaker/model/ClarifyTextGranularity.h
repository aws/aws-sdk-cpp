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
enum class ClarifyTextGranularity { NOT_SET, token, sentence, paragraph };

namespace ClarifyTextGranularityMapper {
AWS_SAGEMAKER_API ClarifyTextGranularity GetClarifyTextGranularityForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClarifyTextGranularity(ClarifyTextGranularity value);
}  // namespace ClarifyTextGranularityMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

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
enum class BooleanOperator { NOT_SET, And, Or };

namespace BooleanOperatorMapper {
AWS_SAGEMAKER_API BooleanOperator GetBooleanOperatorForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBooleanOperator(BooleanOperator value);
}  // namespace BooleanOperatorMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

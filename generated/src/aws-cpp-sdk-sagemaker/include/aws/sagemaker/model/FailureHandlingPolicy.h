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
enum class FailureHandlingPolicy { NOT_SET, ROLLBACK_ON_FAILURE, DO_NOTHING };

namespace FailureHandlingPolicyMapper {
AWS_SAGEMAKER_API FailureHandlingPolicy GetFailureHandlingPolicyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFailureHandlingPolicy(FailureHandlingPolicy value);
}  // namespace FailureHandlingPolicyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

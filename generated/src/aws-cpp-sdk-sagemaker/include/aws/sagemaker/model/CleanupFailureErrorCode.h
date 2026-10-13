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
enum class CleanupFailureErrorCode { NOT_SET, ClientError, InternalFailure };

namespace CleanupFailureErrorCodeMapper {
AWS_SAGEMAKER_API CleanupFailureErrorCode GetCleanupFailureErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCleanupFailureErrorCode(CleanupFailureErrorCode value);
}  // namespace CleanupFailureErrorCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

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
enum class ActiveClusterOperationName { NOT_SET, Scaling };

namespace ActiveClusterOperationNameMapper {
AWS_SAGEMAKER_API ActiveClusterOperationName GetActiveClusterOperationNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForActiveClusterOperationName(ActiveClusterOperationName value);
}  // namespace ActiveClusterOperationNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

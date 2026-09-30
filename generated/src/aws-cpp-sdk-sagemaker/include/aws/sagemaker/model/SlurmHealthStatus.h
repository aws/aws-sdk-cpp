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
enum class SlurmHealthStatus { NOT_SET, Healthy, Unhealthy };

namespace SlurmHealthStatusMapper {
AWS_SAGEMAKER_API SlurmHealthStatus GetSlurmHealthStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSlurmHealthStatus(SlurmHealthStatus value);
}  // namespace SlurmHealthStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

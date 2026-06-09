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
enum class ClusterEventLevel { NOT_SET, Info, Warn, Error };

namespace ClusterEventLevelMapper {
AWS_SAGEMAKER_API ClusterEventLevel GetClusterEventLevelForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterEventLevel(ClusterEventLevel value);
}  // namespace ClusterEventLevelMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

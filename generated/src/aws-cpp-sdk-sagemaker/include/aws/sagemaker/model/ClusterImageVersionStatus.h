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
enum class ClusterImageVersionStatus { NOT_SET, UpToDate, UpdateAvailable, SecurityUpdateRequired, EndOfLife };

namespace ClusterImageVersionStatusMapper {
AWS_SAGEMAKER_API ClusterImageVersionStatus GetClusterImageVersionStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterImageVersionStatus(ClusterImageVersionStatus value);
}  // namespace ClusterImageVersionStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

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
enum class ClusterNodeRecovery { NOT_SET, Automatic, None };

namespace ClusterNodeRecoveryMapper {
AWS_SAGEMAKER_API ClusterNodeRecovery GetClusterNodeRecoveryForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterNodeRecovery(ClusterNodeRecovery value);
}  // namespace ClusterNodeRecoveryMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

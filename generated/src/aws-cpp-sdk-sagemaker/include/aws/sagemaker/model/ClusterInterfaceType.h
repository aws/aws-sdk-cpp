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
enum class ClusterInterfaceType { NOT_SET, efa, efa_only };

namespace ClusterInterfaceTypeMapper {
AWS_SAGEMAKER_API ClusterInterfaceType GetClusterInterfaceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterInterfaceType(ClusterInterfaceType value);
}  // namespace ClusterInterfaceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

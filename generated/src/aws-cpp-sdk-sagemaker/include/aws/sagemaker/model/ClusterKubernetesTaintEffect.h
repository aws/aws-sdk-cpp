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
enum class ClusterKubernetesTaintEffect { NOT_SET, NoSchedule, PreferNoSchedule, NoExecute };

namespace ClusterKubernetesTaintEffectMapper {
AWS_SAGEMAKER_API ClusterKubernetesTaintEffect GetClusterKubernetesTaintEffectForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterKubernetesTaintEffect(ClusterKubernetesTaintEffect value);
}  // namespace ClusterKubernetesTaintEffectMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

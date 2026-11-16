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
enum class InferenceRouterRoutingPreference { NOT_SET, LocalRegionFirst, InstancePoolOrder };

namespace InferenceRouterRoutingPreferenceMapper {
AWS_SAGEMAKER_API InferenceRouterRoutingPreference GetInferenceRouterRoutingPreferenceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceRouterRoutingPreference(InferenceRouterRoutingPreference value);
}  // namespace InferenceRouterRoutingPreferenceMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

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
enum class RoutingStatus { NOT_SET, Routable, Unroutable, Unknown };

namespace RoutingStatusMapper {
AWS_SAGEMAKER_API RoutingStatus GetRoutingStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRoutingStatus(RoutingStatus value);
}  // namespace RoutingStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

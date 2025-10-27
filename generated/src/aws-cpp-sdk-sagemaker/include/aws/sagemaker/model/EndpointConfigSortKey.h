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
enum class EndpointConfigSortKey { NOT_SET, Name, CreationTime };

namespace EndpointConfigSortKeyMapper {
AWS_SAGEMAKER_API EndpointConfigSortKey GetEndpointConfigSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEndpointConfigSortKey(EndpointConfigSortKey value);
}  // namespace EndpointConfigSortKeyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

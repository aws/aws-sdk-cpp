/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class ResourceCriticality { NOT_SET, Very_High, High, Medium, Low, Unknown };

namespace ResourceCriticalityMapper {
AWS_SECURITYHUB_API ResourceCriticality GetResourceCriticalityForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourceCriticality(ResourceCriticality value);
}  // namespace ResourceCriticalityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

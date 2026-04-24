/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class ResourceType { NOT_SET, CODE_REPOSITORY };

namespace ResourceTypeMapper {
AWS_SECURITYAGENT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

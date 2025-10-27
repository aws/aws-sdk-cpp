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
enum class ResourcesMapField { NOT_SET, ResourceTags };

namespace ResourcesMapFieldMapper {
AWS_SECURITYHUB_API ResourcesMapField GetResourcesMapFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesMapField(ResourcesMapField value);
}  // namespace ResourcesMapFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

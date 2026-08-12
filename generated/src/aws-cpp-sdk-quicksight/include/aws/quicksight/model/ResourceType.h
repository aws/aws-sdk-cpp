/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class ResourceType { NOT_SET, INDEX_STORAGE, AGENT_HOURS };

namespace ResourceTypeMapper {
AWS_QUICKSIGHT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

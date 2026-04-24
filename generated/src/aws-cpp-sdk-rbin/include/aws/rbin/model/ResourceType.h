/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>

namespace Aws {
namespace RecycleBin {
namespace Model {
enum class ResourceType { NOT_SET, EBS_SNAPSHOT, EC2_IMAGE, EBS_VOLUME };

namespace ResourceTypeMapper {
AWS_RECYCLEBIN_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws

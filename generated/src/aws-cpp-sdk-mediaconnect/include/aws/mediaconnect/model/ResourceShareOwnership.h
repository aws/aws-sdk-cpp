/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class ResourceShareOwnership { NOT_SET, OWNED, CONSUMED };

namespace ResourceShareOwnershipMapper {
AWS_MEDIACONNECT_API ResourceShareOwnership GetResourceShareOwnershipForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForResourceShareOwnership(ResourceShareOwnership value);
}  // namespace ResourceShareOwnershipMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

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
enum class ResourceShareState { NOT_SET, SHARED, UNSHARED };

namespace ResourceShareStateMapper {
AWS_MEDIACONNECT_API ResourceShareState GetResourceShareStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForResourceShareState(ResourceShareState value);
}  // namespace ResourceShareStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

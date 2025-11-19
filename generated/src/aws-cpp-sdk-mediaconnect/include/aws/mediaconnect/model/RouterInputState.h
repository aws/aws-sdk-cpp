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
enum class RouterInputState { NOT_SET, CREATING, STANDBY, STARTING, ACTIVE, STOPPING, DELETING, UPDATING, ERROR_, RECOVERING, MIGRATING };

namespace RouterInputStateMapper {
AWS_MEDIACONNECT_API RouterInputState GetRouterInputStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterInputState(RouterInputState value);
}  // namespace RouterInputStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

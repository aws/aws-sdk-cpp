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
enum class RouterOutputState { NOT_SET, CREATING, STANDBY, STARTING, ACTIVE, STOPPING, DELETING, UPDATING, ERROR_, RECOVERING, MIGRATING };

namespace RouterOutputStateMapper {
AWS_MEDIACONNECT_API RouterOutputState GetRouterOutputStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterOutputState(RouterOutputState value);
}  // namespace RouterOutputStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

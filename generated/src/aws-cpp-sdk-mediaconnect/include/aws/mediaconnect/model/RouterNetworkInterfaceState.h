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
enum class RouterNetworkInterfaceState { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, ERROR_, RECOVERING };

namespace RouterNetworkInterfaceStateMapper {
AWS_MEDIACONNECT_API RouterNetworkInterfaceState GetRouterNetworkInterfaceStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterNetworkInterfaceState(RouterNetworkInterfaceState value);
}  // namespace RouterNetworkInterfaceStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

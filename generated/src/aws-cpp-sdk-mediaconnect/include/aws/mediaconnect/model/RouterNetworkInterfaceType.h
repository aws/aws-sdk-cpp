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
enum class RouterNetworkInterfaceType { NOT_SET, PUBLIC_, VPC };

namespace RouterNetworkInterfaceTypeMapper {
AWS_MEDIACONNECT_API RouterNetworkInterfaceType GetRouterNetworkInterfaceTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterNetworkInterfaceType(RouterNetworkInterfaceType value);
}  // namespace RouterNetworkInterfaceTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

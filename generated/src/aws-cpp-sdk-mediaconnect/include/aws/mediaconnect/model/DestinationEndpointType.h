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
enum class DestinationEndpointType { NOT_SET, STANDARD, ROUTER_INPUT };

namespace DestinationEndpointTypeMapper {
AWS_MEDIACONNECT_API DestinationEndpointType GetDestinationEndpointTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDestinationEndpointType(DestinationEndpointType value);
}  // namespace DestinationEndpointTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

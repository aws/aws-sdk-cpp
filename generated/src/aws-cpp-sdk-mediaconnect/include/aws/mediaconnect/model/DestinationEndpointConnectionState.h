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
enum class DestinationEndpointConnectionState { NOT_SET, CONNECTED, DISCONNECTED, CONNECTING, DISCONNECTING };

namespace DestinationEndpointConnectionStateMapper {
AWS_MEDIACONNECT_API DestinationEndpointConnectionState GetDestinationEndpointConnectionStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDestinationEndpointConnectionState(DestinationEndpointConnectionState value);
}  // namespace DestinationEndpointConnectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

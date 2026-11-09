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
enum class SourceEndpointConnectionState { NOT_SET, CONNECTED, DISCONNECTED, CONNECTING, DISCONNECTING };

namespace SourceEndpointConnectionStateMapper {
AWS_MEDIACONNECT_API SourceEndpointConnectionState GetSourceEndpointConnectionStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceEndpointConnectionState(SourceEndpointConnectionState value);
}  // namespace SourceEndpointConnectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

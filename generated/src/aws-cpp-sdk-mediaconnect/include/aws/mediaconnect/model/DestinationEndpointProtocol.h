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
enum class DestinationEndpointProtocol { NOT_SET, RTP, RIST, SRT_CALLER, SRT_LISTENER };

namespace DestinationEndpointProtocolMapper {
AWS_MEDIACONNECT_API DestinationEndpointProtocol GetDestinationEndpointProtocolForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDestinationEndpointProtocol(DestinationEndpointProtocol value);
}  // namespace DestinationEndpointProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

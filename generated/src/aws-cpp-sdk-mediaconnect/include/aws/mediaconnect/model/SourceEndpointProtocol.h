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
enum class SourceEndpointProtocol { NOT_SET, RTP, RIST, SRT_CALLER, SRT_LISTENER };

namespace SourceEndpointProtocolMapper {
AWS_MEDIACONNECT_API SourceEndpointProtocol GetSourceEndpointProtocolForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceEndpointProtocol(SourceEndpointProtocol value);
}  // namespace SourceEndpointProtocolMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

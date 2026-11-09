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
enum class SourceEndpointType { NOT_SET, STANDARD, ROUTER_OUTPUT };

namespace SourceEndpointTypeMapper {
AWS_MEDIACONNECT_API SourceEndpointType GetSourceEndpointTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceEndpointType(SourceEndpointType value);
}  // namespace SourceEndpointTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

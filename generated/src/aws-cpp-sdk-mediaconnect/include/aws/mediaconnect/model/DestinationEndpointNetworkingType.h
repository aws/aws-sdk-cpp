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
enum class DestinationEndpointNetworkingType { NOT_SET, PUBLIC_, VPC };

namespace DestinationEndpointNetworkingTypeMapper {
AWS_MEDIACONNECT_API DestinationEndpointNetworkingType GetDestinationEndpointNetworkingTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDestinationEndpointNetworkingType(DestinationEndpointNetworkingType value);
}  // namespace DestinationEndpointNetworkingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

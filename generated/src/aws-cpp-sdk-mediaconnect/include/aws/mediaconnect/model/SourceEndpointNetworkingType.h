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
enum class SourceEndpointNetworkingType { NOT_SET, PUBLIC_, VPC };

namespace SourceEndpointNetworkingTypeMapper {
AWS_MEDIACONNECT_API SourceEndpointNetworkingType GetSourceEndpointNetworkingTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceEndpointNetworkingType(SourceEndpointNetworkingType value);
}  // namespace SourceEndpointNetworkingTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

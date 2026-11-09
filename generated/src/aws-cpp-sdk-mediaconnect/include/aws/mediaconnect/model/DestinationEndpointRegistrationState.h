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
enum class DestinationEndpointRegistrationState { NOT_SET, REGISTERED, REGISTERING, DEREGISTERING, REGISTRATION_FAILED };

namespace DestinationEndpointRegistrationStateMapper {
AWS_MEDIACONNECT_API DestinationEndpointRegistrationState GetDestinationEndpointRegistrationStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDestinationEndpointRegistrationState(DestinationEndpointRegistrationState value);
}  // namespace DestinationEndpointRegistrationStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

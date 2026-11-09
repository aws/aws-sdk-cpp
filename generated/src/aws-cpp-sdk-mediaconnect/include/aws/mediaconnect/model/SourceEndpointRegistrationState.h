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
enum class SourceEndpointRegistrationState { NOT_SET, REGISTERED, REGISTERING, DEREGISTERING, REGISTRATION_FAILED };

namespace SourceEndpointRegistrationStateMapper {
AWS_MEDIACONNECT_API SourceEndpointRegistrationState GetSourceEndpointRegistrationStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceEndpointRegistrationState(SourceEndpointRegistrationState value);
}  // namespace SourceEndpointRegistrationStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

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
enum class EndpointLifecycle { NOT_SET, MANAGED, UNMANAGED };

namespace EndpointLifecycleMapper {
AWS_MEDIACONNECT_API EndpointLifecycle GetEndpointLifecycleForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEndpointLifecycle(EndpointLifecycle value);
}  // namespace EndpointLifecycleMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

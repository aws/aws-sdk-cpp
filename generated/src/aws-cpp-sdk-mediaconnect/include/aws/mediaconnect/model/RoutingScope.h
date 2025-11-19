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
enum class RoutingScope { NOT_SET, REGIONAL, GLOBAL };

namespace RoutingScopeMapper {
AWS_MEDIACONNECT_API RoutingScope GetRoutingScopeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRoutingScope(RoutingScope value);
}  // namespace RoutingScopeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

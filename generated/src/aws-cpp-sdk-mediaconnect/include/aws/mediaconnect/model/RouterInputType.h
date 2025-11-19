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
enum class RouterInputType { NOT_SET, STANDARD, FAILOVER, MERGE, MEDIACONNECT_FLOW };

namespace RouterInputTypeMapper {
AWS_MEDIACONNECT_API RouterInputType GetRouterInputTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterInputType(RouterInputType value);
}  // namespace RouterInputTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

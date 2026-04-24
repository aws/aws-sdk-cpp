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
enum class RouterOutputType { NOT_SET, STANDARD, MEDIACONNECT_FLOW, MEDIALIVE_INPUT };

namespace RouterOutputTypeMapper {
AWS_MEDIACONNECT_API RouterOutputType GetRouterOutputTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterOutputType(RouterOutputType value);
}  // namespace RouterOutputTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

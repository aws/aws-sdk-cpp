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
enum class RouterOutputTier { NOT_SET, OUTPUT_100, OUTPUT_50, OUTPUT_20 };

namespace RouterOutputTierMapper {
AWS_MEDIACONNECT_API RouterOutputTier GetRouterOutputTierForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterOutputTier(RouterOutputTier value);
}  // namespace RouterOutputTierMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

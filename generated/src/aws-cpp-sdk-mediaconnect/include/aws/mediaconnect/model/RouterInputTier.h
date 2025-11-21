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
enum class RouterInputTier { NOT_SET, INPUT_100, INPUT_50, INPUT_20 };

namespace RouterInputTierMapper {
AWS_MEDIACONNECT_API RouterInputTier GetRouterInputTierForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterInputTier(RouterInputTier value);
}  // namespace RouterInputTierMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

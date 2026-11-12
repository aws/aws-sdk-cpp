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
enum class FabricSwitchingMode { NOT_SET, IMMEDIATE, KEY_FRAME };

namespace FabricSwitchingModeMapper {
AWS_MEDIACONNECT_API FabricSwitchingMode GetFabricSwitchingModeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForFabricSwitchingMode(FabricSwitchingMode value);
}  // namespace FabricSwitchingModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

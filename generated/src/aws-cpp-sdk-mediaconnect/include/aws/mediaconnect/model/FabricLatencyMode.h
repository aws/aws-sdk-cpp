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
enum class FabricLatencyMode { NOT_SET, BALANCED, LOW_LATENCY };

namespace FabricLatencyModeMapper {
AWS_MEDIACONNECT_API FabricLatencyMode GetFabricLatencyModeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForFabricLatencyMode(FabricLatencyMode value);
}  // namespace FabricLatencyModeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

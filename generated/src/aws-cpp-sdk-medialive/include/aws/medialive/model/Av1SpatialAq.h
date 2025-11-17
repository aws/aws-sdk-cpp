/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class Av1SpatialAq { NOT_SET, DISABLED, ENABLED };

namespace Av1SpatialAqMapper {
AWS_MEDIALIVE_API Av1SpatialAq GetAv1SpatialAqForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1SpatialAq(Av1SpatialAq value);
}  // namespace Av1SpatialAqMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws

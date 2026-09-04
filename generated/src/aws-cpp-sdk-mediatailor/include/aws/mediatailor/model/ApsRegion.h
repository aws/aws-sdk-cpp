/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class ApsRegion { NOT_SET, AMERICAS, EUROPE, ASIA_PACIFIC };

namespace ApsRegionMapper {
AWS_MEDIATAILOR_API ApsRegion GetApsRegionForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForApsRegion(ApsRegion value);
}  // namespace ApsRegionMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws

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
enum class Tier { NOT_SET, BASIC, STANDARD };

namespace TierMapper {
AWS_MEDIATAILOR_API Tier GetTierForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForTier(Tier value);
}  // namespace TierMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws

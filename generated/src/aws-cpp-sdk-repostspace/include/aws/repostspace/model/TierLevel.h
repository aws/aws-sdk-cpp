/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/Repostspace_EXPORTS.h>

namespace Aws {
namespace repostspace {
namespace Model {
enum class TierLevel { NOT_SET, BASIC, STANDARD };

namespace TierLevelMapper {
AWS_REPOSTSPACE_API TierLevel GetTierLevelForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForTierLevel(TierLevel value);
}  // namespace TierLevelMapper
}  // namespace Model
}  // namespace repostspace
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class RankingSortBy { NOT_SET, REVENUE, PERCENTAGE, NAME };

namespace RankingSortByMapper {
AWS_WAFV2_API RankingSortBy GetRankingSortByForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForRankingSortBy(RankingSortBy value);
}  // namespace RankingSortByMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

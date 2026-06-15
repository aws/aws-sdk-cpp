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
enum class RankingStatisticType { NOT_SET, TOP_SOURCES_BY_REVENUE, TOP_PATHS_BY_REVENUE };

namespace RankingStatisticTypeMapper {
AWS_WAFV2_API RankingStatisticType GetRankingStatisticTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForRankingStatisticType(RankingStatisticType value);
}  // namespace RankingStatisticTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

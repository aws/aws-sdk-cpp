/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/Personalize_EXPORTS.h>

namespace Aws {
namespace Personalize {
namespace Model {
enum class RankingInfluenceType { NOT_SET, POPULARITY, FRESHNESS };

namespace RankingInfluenceTypeMapper {
AWS_PERSONALIZE_API RankingInfluenceType GetRankingInfluenceTypeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForRankingInfluenceType(RankingInfluenceType value);
}  // namespace RankingInfluenceTypeMapper
}  // namespace Model
}  // namespace Personalize
}  // namespace Aws

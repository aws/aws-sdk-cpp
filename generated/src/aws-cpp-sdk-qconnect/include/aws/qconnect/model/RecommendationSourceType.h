/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class RecommendationSourceType
  {
    NOT_SET,
    ISSUE_DETECTION,
    RULE_EVALUATION,
    OTHER
  };

namespace RecommendationSourceTypeMapper
{
AWS_QCONNECT_API RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRecommendationSourceType(RecommendationSourceType value);
} // namespace RecommendationSourceTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class RecommendationStatus
  {
    NOT_SET,
    OPEN,
    FIXED
  };

namespace RecommendationStatusMapper
{
AWS_SESV2_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
} // namespace RecommendationStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws

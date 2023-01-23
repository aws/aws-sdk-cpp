/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class RecommendationTriggerType
  {
    NOT_SET,
    QUERY
  };

namespace RecommendationTriggerTypeMapper
{
AWS_CONNECTWISDOMSERVICE_API RecommendationTriggerType GetRecommendationTriggerTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForRecommendationTriggerType(RecommendationTriggerType value);
} // namespace RecommendationTriggerTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

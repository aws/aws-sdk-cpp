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
  enum class RecommendationTriggerType
  {
    NOT_SET,
    QUERY,
    GENERATIVE
  };

namespace RecommendationTriggerTypeMapper
{
AWS_QCONNECT_API RecommendationTriggerType GetRecommendationTriggerTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRecommendationTriggerType(RecommendationTriggerType value);
} // namespace RecommendationTriggerTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws

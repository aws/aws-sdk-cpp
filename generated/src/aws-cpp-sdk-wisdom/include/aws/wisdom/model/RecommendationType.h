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
  enum class RecommendationType
  {
    NOT_SET,
    KNOWLEDGE_CONTENT
  };

namespace RecommendationTypeMapper
{
AWS_CONNECTWISDOMSERVICE_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForRecommendationType(RecommendationType value);
} // namespace RecommendationTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws

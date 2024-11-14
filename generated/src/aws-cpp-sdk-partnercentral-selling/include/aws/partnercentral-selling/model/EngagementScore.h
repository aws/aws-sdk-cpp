/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class EngagementScore
  {
    NOT_SET,
    High,
    Medium,
    Low
  };

namespace EngagementScoreMapper
{
AWS_PARTNERCENTRALSELLING_API EngagementScore GetEngagementScoreForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEngagementScore(EngagementScore value);
} // namespace EngagementScoreMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

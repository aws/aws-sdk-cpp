/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ContributionAnalysisDirection
  {
    NOT_SET,
    INCREASE,
    DECREASE,
    NEUTRAL
  };

namespace ContributionAnalysisDirectionMapper
{
AWS_QUICKSIGHT_API ContributionAnalysisDirection GetContributionAnalysisDirectionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForContributionAnalysisDirection(ContributionAnalysisDirection value);
} // namespace ContributionAnalysisDirectionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

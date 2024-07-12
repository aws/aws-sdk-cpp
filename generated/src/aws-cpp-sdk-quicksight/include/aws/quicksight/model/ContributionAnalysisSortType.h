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
  enum class ContributionAnalysisSortType
  {
    NOT_SET,
    ABSOLUTE_DIFFERENCE,
    CONTRIBUTION_PERCENTAGE,
    DEVIATION_FROM_EXPECTED,
    PERCENTAGE_DIFFERENCE
  };

namespace ContributionAnalysisSortTypeMapper
{
AWS_QUICKSIGHT_API ContributionAnalysisSortType GetContributionAnalysisSortTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForContributionAnalysisSortType(ContributionAnalysisSortType value);
} // namespace ContributionAnalysisSortTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

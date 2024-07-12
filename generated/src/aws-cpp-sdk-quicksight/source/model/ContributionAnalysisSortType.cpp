/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ContributionAnalysisSortType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ContributionAnalysisSortTypeMapper
      {

        static const int ABSOLUTE_DIFFERENCE_HASH = HashingUtils::HashString("ABSOLUTE_DIFFERENCE");
        static const int CONTRIBUTION_PERCENTAGE_HASH = HashingUtils::HashString("CONTRIBUTION_PERCENTAGE");
        static const int DEVIATION_FROM_EXPECTED_HASH = HashingUtils::HashString("DEVIATION_FROM_EXPECTED");
        static const int PERCENTAGE_DIFFERENCE_HASH = HashingUtils::HashString("PERCENTAGE_DIFFERENCE");


        ContributionAnalysisSortType GetContributionAnalysisSortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABSOLUTE_DIFFERENCE_HASH)
          {
            return ContributionAnalysisSortType::ABSOLUTE_DIFFERENCE;
          }
          else if (hashCode == CONTRIBUTION_PERCENTAGE_HASH)
          {
            return ContributionAnalysisSortType::CONTRIBUTION_PERCENTAGE;
          }
          else if (hashCode == DEVIATION_FROM_EXPECTED_HASH)
          {
            return ContributionAnalysisSortType::DEVIATION_FROM_EXPECTED;
          }
          else if (hashCode == PERCENTAGE_DIFFERENCE_HASH)
          {
            return ContributionAnalysisSortType::PERCENTAGE_DIFFERENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContributionAnalysisSortType>(hashCode);
          }

          return ContributionAnalysisSortType::NOT_SET;
        }

        Aws::String GetNameForContributionAnalysisSortType(ContributionAnalysisSortType enumValue)
        {
          switch(enumValue)
          {
          case ContributionAnalysisSortType::NOT_SET:
            return {};
          case ContributionAnalysisSortType::ABSOLUTE_DIFFERENCE:
            return "ABSOLUTE_DIFFERENCE";
          case ContributionAnalysisSortType::CONTRIBUTION_PERCENTAGE:
            return "CONTRIBUTION_PERCENTAGE";
          case ContributionAnalysisSortType::DEVIATION_FROM_EXPECTED:
            return "DEVIATION_FROM_EXPECTED";
          case ContributionAnalysisSortType::PERCENTAGE_DIFFERENCE:
            return "PERCENTAGE_DIFFERENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContributionAnalysisSortTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

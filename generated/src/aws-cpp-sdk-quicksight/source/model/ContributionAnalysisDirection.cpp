/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ContributionAnalysisDirection.h>
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
      namespace ContributionAnalysisDirectionMapper
      {

        static const int INCREASE_HASH = HashingUtils::HashString("INCREASE");
        static const int DECREASE_HASH = HashingUtils::HashString("DECREASE");
        static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");


        ContributionAnalysisDirection GetContributionAnalysisDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCREASE_HASH)
          {
            return ContributionAnalysisDirection::INCREASE;
          }
          else if (hashCode == DECREASE_HASH)
          {
            return ContributionAnalysisDirection::DECREASE;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return ContributionAnalysisDirection::NEUTRAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContributionAnalysisDirection>(hashCode);
          }

          return ContributionAnalysisDirection::NOT_SET;
        }

        Aws::String GetNameForContributionAnalysisDirection(ContributionAnalysisDirection enumValue)
        {
          switch(enumValue)
          {
          case ContributionAnalysisDirection::NOT_SET:
            return {};
          case ContributionAnalysisDirection::INCREASE:
            return "INCREASE";
          case ContributionAnalysisDirection::DECREASE:
            return "DECREASE";
          case ContributionAnalysisDirection::NEUTRAL:
            return "NEUTRAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContributionAnalysisDirectionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

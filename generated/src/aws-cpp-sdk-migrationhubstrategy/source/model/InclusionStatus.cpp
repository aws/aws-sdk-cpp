/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/InclusionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace InclusionStatusMapper
      {

        static const int excludeFromAssessment_HASH = HashingUtils::HashString("excludeFromAssessment");
        static const int includeInAssessment_HASH = HashingUtils::HashString("includeInAssessment");


        InclusionStatus GetInclusionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == excludeFromAssessment_HASH)
          {
            return InclusionStatus::excludeFromAssessment;
          }
          else if (hashCode == includeInAssessment_HASH)
          {
            return InclusionStatus::includeInAssessment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InclusionStatus>(hashCode);
          }

          return InclusionStatus::NOT_SET;
        }

        Aws::String GetNameForInclusionStatus(InclusionStatus enumValue)
        {
          switch(enumValue)
          {
          case InclusionStatus::NOT_SET:
            return {};
          case InclusionStatus::excludeFromAssessment:
            return "excludeFromAssessment";
          case InclusionStatus::includeInAssessment:
            return "includeInAssessment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InclusionStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws

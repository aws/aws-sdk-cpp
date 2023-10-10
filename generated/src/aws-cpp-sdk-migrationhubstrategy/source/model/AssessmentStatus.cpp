/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AssessmentStatus.h>
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
      namespace AssessmentStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        AssessmentStatus GetAssessmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AssessmentStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return AssessmentStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssessmentStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return AssessmentStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentStatus>(hashCode);
          }

          return AssessmentStatus::NOT_SET;
        }

        Aws::String GetNameForAssessmentStatus(AssessmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AssessmentStatus::NOT_SET:
            return {};
          case AssessmentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AssessmentStatus::COMPLETE:
            return "COMPLETE";
          case AssessmentStatus::FAILED:
            return "FAILED";
          case AssessmentStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws

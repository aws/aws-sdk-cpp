/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RunTimeAssessmentStatus.h>
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
      namespace RunTimeAssessmentStatusMapper
      {

        static const int dataCollectionTaskToBeScheduled_HASH = HashingUtils::HashString("dataCollectionTaskToBeScheduled");
        static const int dataCollectionTaskScheduled_HASH = HashingUtils::HashString("dataCollectionTaskScheduled");
        static const int dataCollectionTaskStarted_HASH = HashingUtils::HashString("dataCollectionTaskStarted");
        static const int dataCollectionTaskStopped_HASH = HashingUtils::HashString("dataCollectionTaskStopped");
        static const int dataCollectionTaskSuccess_HASH = HashingUtils::HashString("dataCollectionTaskSuccess");
        static const int dataCollectionTaskFailed_HASH = HashingUtils::HashString("dataCollectionTaskFailed");
        static const int dataCollectionTaskPartialSuccess_HASH = HashingUtils::HashString("dataCollectionTaskPartialSuccess");


        RunTimeAssessmentStatus GetRunTimeAssessmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dataCollectionTaskToBeScheduled_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskToBeScheduled;
          }
          else if (hashCode == dataCollectionTaskScheduled_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskScheduled;
          }
          else if (hashCode == dataCollectionTaskStarted_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskStarted;
          }
          else if (hashCode == dataCollectionTaskStopped_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskStopped;
          }
          else if (hashCode == dataCollectionTaskSuccess_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskSuccess;
          }
          else if (hashCode == dataCollectionTaskFailed_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskFailed;
          }
          else if (hashCode == dataCollectionTaskPartialSuccess_HASH)
          {
            return RunTimeAssessmentStatus::dataCollectionTaskPartialSuccess;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunTimeAssessmentStatus>(hashCode);
          }

          return RunTimeAssessmentStatus::NOT_SET;
        }

        Aws::String GetNameForRunTimeAssessmentStatus(RunTimeAssessmentStatus enumValue)
        {
          switch(enumValue)
          {
          case RunTimeAssessmentStatus::NOT_SET:
            return {};
          case RunTimeAssessmentStatus::dataCollectionTaskToBeScheduled:
            return "dataCollectionTaskToBeScheduled";
          case RunTimeAssessmentStatus::dataCollectionTaskScheduled:
            return "dataCollectionTaskScheduled";
          case RunTimeAssessmentStatus::dataCollectionTaskStarted:
            return "dataCollectionTaskStarted";
          case RunTimeAssessmentStatus::dataCollectionTaskStopped:
            return "dataCollectionTaskStopped";
          case RunTimeAssessmentStatus::dataCollectionTaskSuccess:
            return "dataCollectionTaskSuccess";
          case RunTimeAssessmentStatus::dataCollectionTaskFailed:
            return "dataCollectionTaskFailed";
          case RunTimeAssessmentStatus::dataCollectionTaskPartialSuccess:
            return "dataCollectionTaskPartialSuccess";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunTimeAssessmentStatusMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws

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

        static constexpr uint32_t dataCollectionTaskToBeScheduled_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskToBeScheduled");
        static constexpr uint32_t dataCollectionTaskScheduled_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskScheduled");
        static constexpr uint32_t dataCollectionTaskStarted_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskStarted");
        static constexpr uint32_t dataCollectionTaskStopped_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskStopped");
        static constexpr uint32_t dataCollectionTaskSuccess_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskSuccess");
        static constexpr uint32_t dataCollectionTaskFailed_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskFailed");
        static constexpr uint32_t dataCollectionTaskPartialSuccess_HASH = ConstExprHashingUtils::HashString("dataCollectionTaskPartialSuccess");


        RunTimeAssessmentStatus GetRunTimeAssessmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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

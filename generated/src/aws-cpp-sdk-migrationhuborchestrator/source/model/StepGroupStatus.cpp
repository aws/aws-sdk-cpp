/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepGroupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace StepGroupStatusMapper
      {

        static const int AWAITING_DEPENDENCIES_HASH = HashingUtils::HashString("AWAITING_DEPENDENCIES");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int PAUSING_HASH = HashingUtils::HashString("PAUSING");
        static const int USER_ATTENTION_REQUIRED_HASH = HashingUtils::HashString("USER_ATTENTION_REQUIRED");


        StepGroupStatus GetStepGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWAITING_DEPENDENCIES_HASH)
          {
            return StepGroupStatus::AWAITING_DEPENDENCIES;
          }
          else if (hashCode == READY_HASH)
          {
            return StepGroupStatus::READY;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return StepGroupStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StepGroupStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StepGroupStatus::FAILED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return StepGroupStatus::PAUSED;
          }
          else if (hashCode == PAUSING_HASH)
          {
            return StepGroupStatus::PAUSING;
          }
          else if (hashCode == USER_ATTENTION_REQUIRED_HASH)
          {
            return StepGroupStatus::USER_ATTENTION_REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepGroupStatus>(hashCode);
          }

          return StepGroupStatus::NOT_SET;
        }

        Aws::String GetNameForStepGroupStatus(StepGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case StepGroupStatus::AWAITING_DEPENDENCIES:
            return "AWAITING_DEPENDENCIES";
          case StepGroupStatus::READY:
            return "READY";
          case StepGroupStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case StepGroupStatus::COMPLETED:
            return "COMPLETED";
          case StepGroupStatus::FAILED:
            return "FAILED";
          case StepGroupStatus::PAUSED:
            return "PAUSED";
          case StepGroupStatus::PAUSING:
            return "PAUSING";
          case StepGroupStatus::USER_ATTENTION_REQUIRED:
            return "USER_ATTENTION_REQUIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepGroupStatusMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StepStatus.h>
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
      namespace StepStatusMapper
      {

        static const int AWAITING_DEPENDENCIES_HASH = HashingUtils::HashString("AWAITING_DEPENDENCIES");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int USER_ATTENTION_REQUIRED_HASH = HashingUtils::HashString("USER_ATTENTION_REQUIRED");


        StepStatus GetStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWAITING_DEPENDENCIES_HASH)
          {
            return StepStatus::AWAITING_DEPENDENCIES;
          }
          else if (hashCode == READY_HASH)
          {
            return StepStatus::READY;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return StepStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StepStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StepStatus::FAILED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return StepStatus::PAUSED;
          }
          else if (hashCode == USER_ATTENTION_REQUIRED_HASH)
          {
            return StepStatus::USER_ATTENTION_REQUIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepStatus>(hashCode);
          }

          return StepStatus::NOT_SET;
        }

        Aws::String GetNameForStepStatus(StepStatus enumValue)
        {
          switch(enumValue)
          {
          case StepStatus::AWAITING_DEPENDENCIES:
            return "AWAITING_DEPENDENCIES";
          case StepStatus::READY:
            return "READY";
          case StepStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case StepStatus::COMPLETED:
            return "COMPLETED";
          case StepStatus::FAILED:
            return "FAILED";
          case StepStatus::PAUSED:
            return "PAUSED";
          case StepStatus::USER_ATTENTION_REQUIRED:
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

      } // namespace StepStatusMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws

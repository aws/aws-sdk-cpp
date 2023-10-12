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

        static constexpr uint32_t AWAITING_DEPENDENCIES_HASH = ConstExprHashingUtils::HashString("AWAITING_DEPENDENCIES");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t PAUSING_HASH = ConstExprHashingUtils::HashString("PAUSING");
        static constexpr uint32_t USER_ATTENTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("USER_ATTENTION_REQUIRED");


        StepGroupStatus GetStepGroupStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StepGroupStatus::NOT_SET:
            return {};
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

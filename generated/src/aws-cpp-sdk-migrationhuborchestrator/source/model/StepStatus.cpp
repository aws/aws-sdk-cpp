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

        static constexpr uint32_t AWAITING_DEPENDENCIES_HASH = ConstExprHashingUtils::HashString("AWAITING_DEPENDENCIES");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t USER_ATTENTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("USER_ATTENTION_REQUIRED");


        StepStatus GetStepStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StepStatus::NOT_SET:
            return {};
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

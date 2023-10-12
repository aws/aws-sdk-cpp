/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t CompletedWithViolations_HASH = ConstExprHashingUtils::HashString("CompletedWithViolations");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ExecutionStatus::Pending;
          }
          else if (hashCode == Completed_HASH)
          {
            return ExecutionStatus::Completed;
          }
          else if (hashCode == CompletedWithViolations_HASH)
          {
            return ExecutionStatus::CompletedWithViolations;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ExecutionStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return ExecutionStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ExecutionStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ExecutionStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatus>(hashCode);
          }

          return ExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatus::NOT_SET:
            return {};
          case ExecutionStatus::Pending:
            return "Pending";
          case ExecutionStatus::Completed:
            return "Completed";
          case ExecutionStatus::CompletedWithViolations:
            return "CompletedWithViolations";
          case ExecutionStatus::InProgress:
            return "InProgress";
          case ExecutionStatus::Failed:
            return "Failed";
          case ExecutionStatus::Stopping:
            return "Stopping";
          case ExecutionStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

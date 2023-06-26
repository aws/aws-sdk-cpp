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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int CompletedWithViolations_HASH = HashingUtils::HashString("CompletedWithViolations");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

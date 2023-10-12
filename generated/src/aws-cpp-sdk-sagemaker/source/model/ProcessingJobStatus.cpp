/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingJobStatus.h>
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
      namespace ProcessingJobStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        ProcessingJobStatus GetProcessingJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ProcessingJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ProcessingJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ProcessingJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ProcessingJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ProcessingJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingJobStatus>(hashCode);
          }

          return ProcessingJobStatus::NOT_SET;
        }

        Aws::String GetNameForProcessingJobStatus(ProcessingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ProcessingJobStatus::NOT_SET:
            return {};
          case ProcessingJobStatus::InProgress:
            return "InProgress";
          case ProcessingJobStatus::Completed:
            return "Completed";
          case ProcessingJobStatus::Failed:
            return "Failed";
          case ProcessingJobStatus::Stopping:
            return "Stopping";
          case ProcessingJobStatus::Stopped:
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

      } // namespace ProcessingJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobStatus.h>
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
      namespace LabelingJobStatusMapper
      {

        static constexpr uint32_t Initializing_HASH = ConstExprHashingUtils::HashString("Initializing");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        LabelingJobStatus GetLabelingJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return LabelingJobStatus::Initializing;
          }
          else if (hashCode == InProgress_HASH)
          {
            return LabelingJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return LabelingJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return LabelingJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return LabelingJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return LabelingJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelingJobStatus>(hashCode);
          }

          return LabelingJobStatus::NOT_SET;
        }

        Aws::String GetNameForLabelingJobStatus(LabelingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case LabelingJobStatus::NOT_SET:
            return {};
          case LabelingJobStatus::Initializing:
            return "Initializing";
          case LabelingJobStatus::InProgress:
            return "InProgress";
          case LabelingJobStatus::Completed:
            return "Completed";
          case LabelingJobStatus::Failed:
            return "Failed";
          case LabelingJobStatus::Stopping:
            return "Stopping";
          case LabelingJobStatus::Stopped:
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

      } // namespace LabelingJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

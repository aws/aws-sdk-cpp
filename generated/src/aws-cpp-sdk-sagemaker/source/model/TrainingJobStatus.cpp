/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobStatus.h>
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
      namespace TrainingJobStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        TrainingJobStatus GetTrainingJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return TrainingJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return TrainingJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return TrainingJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return TrainingJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return TrainingJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingJobStatus>(hashCode);
          }

          return TrainingJobStatus::NOT_SET;
        }

        Aws::String GetNameForTrainingJobStatus(TrainingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainingJobStatus::NOT_SET:
            return {};
          case TrainingJobStatus::InProgress:
            return "InProgress";
          case TrainingJobStatus::Completed:
            return "Completed";
          case TrainingJobStatus::Failed:
            return "Failed";
          case TrainingJobStatus::Stopping:
            return "Stopping";
          case TrainingJobStatus::Stopped:
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

      } // namespace TrainingJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

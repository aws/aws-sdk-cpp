/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SecondaryStatus.h>
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
      namespace SecondaryStatusMapper
      {

        static constexpr uint32_t Starting_HASH = ConstExprHashingUtils::HashString("Starting");
        static constexpr uint32_t LaunchingMLInstances_HASH = ConstExprHashingUtils::HashString("LaunchingMLInstances");
        static constexpr uint32_t PreparingTrainingStack_HASH = ConstExprHashingUtils::HashString("PreparingTrainingStack");
        static constexpr uint32_t Downloading_HASH = ConstExprHashingUtils::HashString("Downloading");
        static constexpr uint32_t DownloadingTrainingImage_HASH = ConstExprHashingUtils::HashString("DownloadingTrainingImage");
        static constexpr uint32_t Training_HASH = ConstExprHashingUtils::HashString("Training");
        static constexpr uint32_t Uploading_HASH = ConstExprHashingUtils::HashString("Uploading");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t MaxRuntimeExceeded_HASH = ConstExprHashingUtils::HashString("MaxRuntimeExceeded");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Interrupted_HASH = ConstExprHashingUtils::HashString("Interrupted");
        static constexpr uint32_t MaxWaitTimeExceeded_HASH = ConstExprHashingUtils::HashString("MaxWaitTimeExceeded");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Restarting_HASH = ConstExprHashingUtils::HashString("Restarting");


        SecondaryStatus GetSecondaryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return SecondaryStatus::Starting;
          }
          else if (hashCode == LaunchingMLInstances_HASH)
          {
            return SecondaryStatus::LaunchingMLInstances;
          }
          else if (hashCode == PreparingTrainingStack_HASH)
          {
            return SecondaryStatus::PreparingTrainingStack;
          }
          else if (hashCode == Downloading_HASH)
          {
            return SecondaryStatus::Downloading;
          }
          else if (hashCode == DownloadingTrainingImage_HASH)
          {
            return SecondaryStatus::DownloadingTrainingImage;
          }
          else if (hashCode == Training_HASH)
          {
            return SecondaryStatus::Training;
          }
          else if (hashCode == Uploading_HASH)
          {
            return SecondaryStatus::Uploading;
          }
          else if (hashCode == Stopping_HASH)
          {
            return SecondaryStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return SecondaryStatus::Stopped;
          }
          else if (hashCode == MaxRuntimeExceeded_HASH)
          {
            return SecondaryStatus::MaxRuntimeExceeded;
          }
          else if (hashCode == Completed_HASH)
          {
            return SecondaryStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return SecondaryStatus::Failed;
          }
          else if (hashCode == Interrupted_HASH)
          {
            return SecondaryStatus::Interrupted;
          }
          else if (hashCode == MaxWaitTimeExceeded_HASH)
          {
            return SecondaryStatus::MaxWaitTimeExceeded;
          }
          else if (hashCode == Updating_HASH)
          {
            return SecondaryStatus::Updating;
          }
          else if (hashCode == Restarting_HASH)
          {
            return SecondaryStatus::Restarting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecondaryStatus>(hashCode);
          }

          return SecondaryStatus::NOT_SET;
        }

        Aws::String GetNameForSecondaryStatus(SecondaryStatus enumValue)
        {
          switch(enumValue)
          {
          case SecondaryStatus::NOT_SET:
            return {};
          case SecondaryStatus::Starting:
            return "Starting";
          case SecondaryStatus::LaunchingMLInstances:
            return "LaunchingMLInstances";
          case SecondaryStatus::PreparingTrainingStack:
            return "PreparingTrainingStack";
          case SecondaryStatus::Downloading:
            return "Downloading";
          case SecondaryStatus::DownloadingTrainingImage:
            return "DownloadingTrainingImage";
          case SecondaryStatus::Training:
            return "Training";
          case SecondaryStatus::Uploading:
            return "Uploading";
          case SecondaryStatus::Stopping:
            return "Stopping";
          case SecondaryStatus::Stopped:
            return "Stopped";
          case SecondaryStatus::MaxRuntimeExceeded:
            return "MaxRuntimeExceeded";
          case SecondaryStatus::Completed:
            return "Completed";
          case SecondaryStatus::Failed:
            return "Failed";
          case SecondaryStatus::Interrupted:
            return "Interrupted";
          case SecondaryStatus::MaxWaitTimeExceeded:
            return "MaxWaitTimeExceeded";
          case SecondaryStatus::Updating:
            return "Updating";
          case SecondaryStatus::Restarting:
            return "Restarting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecondaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

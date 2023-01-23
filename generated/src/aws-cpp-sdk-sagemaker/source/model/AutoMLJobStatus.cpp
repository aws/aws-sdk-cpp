/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobStatus.h>
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
      namespace AutoMLJobStatusMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");


        AutoMLJobStatus GetAutoMLJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return AutoMLJobStatus::Completed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutoMLJobStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutoMLJobStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return AutoMLJobStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return AutoMLJobStatus::Stopping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLJobStatus>(hashCode);
          }

          return AutoMLJobStatus::NOT_SET;
        }

        Aws::String GetNameForAutoMLJobStatus(AutoMLJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoMLJobStatus::Completed:
            return "Completed";
          case AutoMLJobStatus::InProgress:
            return "InProgress";
          case AutoMLJobStatus::Failed:
            return "Failed";
          case AutoMLJobStatus::Stopped:
            return "Stopped";
          case AutoMLJobStatus::Stopping:
            return "Stopping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

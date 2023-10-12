/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Cancelling_HASH = ConstExprHashingUtils::HashString("Cancelling");
        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t Completing_HASH = ConstExprHashingUtils::HashString("Completing");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Failing_HASH = ConstExprHashingUtils::HashString("Failing");
        static constexpr uint32_t New_HASH = ConstExprHashingUtils::HashString("New");
        static constexpr uint32_t Paused_HASH = ConstExprHashingUtils::HashString("Paused");
        static constexpr uint32_t Pausing_HASH = ConstExprHashingUtils::HashString("Pausing");
        static constexpr uint32_t Preparing_HASH = ConstExprHashingUtils::HashString("Preparing");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");
        static constexpr uint32_t Suspended_HASH = ConstExprHashingUtils::HashString("Suspended");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return JobStatus::Active;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return JobStatus::Cancelled;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return JobStatus::Cancelling;
          }
          else if (hashCode == Complete_HASH)
          {
            return JobStatus::Complete;
          }
          else if (hashCode == Completing_HASH)
          {
            return JobStatus::Completing;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobStatus::Failed;
          }
          else if (hashCode == Failing_HASH)
          {
            return JobStatus::Failing;
          }
          else if (hashCode == New_HASH)
          {
            return JobStatus::New;
          }
          else if (hashCode == Paused_HASH)
          {
            return JobStatus::Paused;
          }
          else if (hashCode == Pausing_HASH)
          {
            return JobStatus::Pausing;
          }
          else if (hashCode == Preparing_HASH)
          {
            return JobStatus::Preparing;
          }
          else if (hashCode == Ready_HASH)
          {
            return JobStatus::Ready;
          }
          else if (hashCode == Suspended_HASH)
          {
            return JobStatus::Suspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStatus>(hashCode);
          }

          return JobStatus::NOT_SET;
        }

        Aws::String GetNameForJobStatus(JobStatus enumValue)
        {
          switch(enumValue)
          {
          case JobStatus::NOT_SET:
            return {};
          case JobStatus::Active:
            return "Active";
          case JobStatus::Cancelled:
            return "Cancelled";
          case JobStatus::Cancelling:
            return "Cancelling";
          case JobStatus::Complete:
            return "Complete";
          case JobStatus::Completing:
            return "Completing";
          case JobStatus::Failed:
            return "Failed";
          case JobStatus::Failing:
            return "Failing";
          case JobStatus::New:
            return "New";
          case JobStatus::Paused:
            return "Paused";
          case JobStatus::Pausing:
            return "Pausing";
          case JobStatus::Preparing:
            return "Preparing";
          case JobStatus::Ready:
            return "Ready";
          case JobStatus::Suspended:
            return "Suspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws

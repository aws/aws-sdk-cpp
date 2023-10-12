/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t PREPARING_FOR_INITIALIZATION_HASH = ConstExprHashingUtils::HashString("PREPARING_FOR_INITIALIZATION");
        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t PENDING_JOB_HASH = ConstExprHashingUtils::HashString("PENDING_JOB");
        static constexpr uint32_t COMPLETING_HASH = ConstExprHashingUtils::HashString("COMPLETING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILING_HASH = ConstExprHashingUtils::HashString("FAILING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return JobStatus::CREATED;
          }
          else if (hashCode == PREPARING_FOR_INITIALIZATION_HASH)
          {
            return JobStatus::PREPARING_FOR_INITIALIZATION;
          }
          else if (hashCode == INITIALIZING_HASH)
          {
            return JobStatus::INITIALIZING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return JobStatus::PROCESSING;
          }
          else if (hashCode == PENDING_JOB_HASH)
          {
            return JobStatus::PENDING_JOB;
          }
          else if (hashCode == COMPLETING_HASH)
          {
            return JobStatus::COMPLETING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobStatus::COMPLETED;
          }
          else if (hashCode == FAILING_HASH)
          {
            return JobStatus::FAILING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
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
          case JobStatus::CREATED:
            return "CREATED";
          case JobStatus::PREPARING_FOR_INITIALIZATION:
            return "PREPARING_FOR_INITIALIZATION";
          case JobStatus::INITIALIZING:
            return "INITIALIZING";
          case JobStatus::PROCESSING:
            return "PROCESSING";
          case JobStatus::PENDING_JOB:
            return "PENDING_JOB";
          case JobStatus::COMPLETING:
            return "COMPLETING";
          case JobStatus::COMPLETED:
            return "COMPLETED";
          case JobStatus::FAILING:
            return "FAILING";
          case JobStatus::FAILED:
            return "FAILED";
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
  } // namespace Pinpoint
} // namespace Aws

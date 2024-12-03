/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int Not_Yet_Run_HASH = HashingUtils::HashString("Not_Yet_Run");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Not_Yet_Run_HASH)
          {
            return JobStatus::Not_Yet_Run;
          }
          else if (hashCode == Successful_HASH)
          {
            return JobStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobStatus::Failed;
          }
          else if (hashCode == Disabled_HASH)
          {
            return JobStatus::Disabled;
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
          case JobStatus::Not_Yet_Run:
            return "Not_Yet_Run";
          case JobStatus::Successful:
            return "Successful";
          case JobStatus::Failed:
            return "Failed";
          case JobStatus::Disabled:
            return "Disabled";
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
  } // namespace S3Tables
} // namespace Aws

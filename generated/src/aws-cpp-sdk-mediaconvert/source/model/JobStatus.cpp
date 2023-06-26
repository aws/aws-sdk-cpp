/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int PROGRESSING_HASH = HashingUtils::HashString("PROGRESSING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return JobStatus::SUBMITTED;
          }
          else if (hashCode == PROGRESSING_HASH)
          {
            return JobStatus::PROGRESSING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return JobStatus::COMPLETE;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return JobStatus::CANCELED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return JobStatus::ERROR_;
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
          case JobStatus::SUBMITTED:
            return "SUBMITTED";
          case JobStatus::PROGRESSING:
            return "PROGRESSING";
          case JobStatus::COMPLETE:
            return "COMPLETE";
          case JobStatus::CANCELED:
            return "CANCELED";
          case JobStatus::ERROR_:
            return "ERROR";
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
  } // namespace MediaConvert
} // namespace Aws

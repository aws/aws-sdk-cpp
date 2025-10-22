/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobsQueryStatus.h>
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
      namespace JobsQueryStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int PROGRESSING_HASH = HashingUtils::HashString("PROGRESSING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        JobsQueryStatus GetJobsQueryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return JobsQueryStatus::SUBMITTED;
          }
          else if (hashCode == PROGRESSING_HASH)
          {
            return JobsQueryStatus::PROGRESSING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return JobsQueryStatus::COMPLETE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return JobsQueryStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobsQueryStatus>(hashCode);
          }

          return JobsQueryStatus::NOT_SET;
        }

        Aws::String GetNameForJobsQueryStatus(JobsQueryStatus enumValue)
        {
          switch(enumValue)
          {
          case JobsQueryStatus::NOT_SET:
            return {};
          case JobsQueryStatus::SUBMITTED:
            return "SUBMITTED";
          case JobsQueryStatus::PROGRESSING:
            return "PROGRESSING";
          case JobsQueryStatus::COMPLETE:
            return "COMPLETE";
          case JobsQueryStatus::ERROR_:
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

      } // namespace JobsQueryStatusMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

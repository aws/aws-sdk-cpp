/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/JobLogEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace JobLogEventMapper
      {

        static constexpr uint32_t JOB_START_HASH = ConstExprHashingUtils::HashString("JOB_START");
        static constexpr uint32_t SERVER_SKIPPED_HASH = ConstExprHashingUtils::HashString("SERVER_SKIPPED");
        static constexpr uint32_t CLEANUP_START_HASH = ConstExprHashingUtils::HashString("CLEANUP_START");
        static constexpr uint32_t CLEANUP_END_HASH = ConstExprHashingUtils::HashString("CLEANUP_END");
        static constexpr uint32_t CLEANUP_FAIL_HASH = ConstExprHashingUtils::HashString("CLEANUP_FAIL");
        static constexpr uint32_t SNAPSHOT_START_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_START");
        static constexpr uint32_t SNAPSHOT_END_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_END");
        static constexpr uint32_t SNAPSHOT_FAIL_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_FAIL");
        static constexpr uint32_t USING_PREVIOUS_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("USING_PREVIOUS_SNAPSHOT");
        static constexpr uint32_t CONVERSION_START_HASH = ConstExprHashingUtils::HashString("CONVERSION_START");
        static constexpr uint32_t CONVERSION_END_HASH = ConstExprHashingUtils::HashString("CONVERSION_END");
        static constexpr uint32_t CONVERSION_FAIL_HASH = ConstExprHashingUtils::HashString("CONVERSION_FAIL");
        static constexpr uint32_t LAUNCH_START_HASH = ConstExprHashingUtils::HashString("LAUNCH_START");
        static constexpr uint32_t LAUNCH_FAILED_HASH = ConstExprHashingUtils::HashString("LAUNCH_FAILED");
        static constexpr uint32_t JOB_CANCEL_HASH = ConstExprHashingUtils::HashString("JOB_CANCEL");
        static constexpr uint32_t JOB_END_HASH = ConstExprHashingUtils::HashString("JOB_END");


        JobLogEvent GetJobLogEventForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JOB_START_HASH)
          {
            return JobLogEvent::JOB_START;
          }
          else if (hashCode == SERVER_SKIPPED_HASH)
          {
            return JobLogEvent::SERVER_SKIPPED;
          }
          else if (hashCode == CLEANUP_START_HASH)
          {
            return JobLogEvent::CLEANUP_START;
          }
          else if (hashCode == CLEANUP_END_HASH)
          {
            return JobLogEvent::CLEANUP_END;
          }
          else if (hashCode == CLEANUP_FAIL_HASH)
          {
            return JobLogEvent::CLEANUP_FAIL;
          }
          else if (hashCode == SNAPSHOT_START_HASH)
          {
            return JobLogEvent::SNAPSHOT_START;
          }
          else if (hashCode == SNAPSHOT_END_HASH)
          {
            return JobLogEvent::SNAPSHOT_END;
          }
          else if (hashCode == SNAPSHOT_FAIL_HASH)
          {
            return JobLogEvent::SNAPSHOT_FAIL;
          }
          else if (hashCode == USING_PREVIOUS_SNAPSHOT_HASH)
          {
            return JobLogEvent::USING_PREVIOUS_SNAPSHOT;
          }
          else if (hashCode == CONVERSION_START_HASH)
          {
            return JobLogEvent::CONVERSION_START;
          }
          else if (hashCode == CONVERSION_END_HASH)
          {
            return JobLogEvent::CONVERSION_END;
          }
          else if (hashCode == CONVERSION_FAIL_HASH)
          {
            return JobLogEvent::CONVERSION_FAIL;
          }
          else if (hashCode == LAUNCH_START_HASH)
          {
            return JobLogEvent::LAUNCH_START;
          }
          else if (hashCode == LAUNCH_FAILED_HASH)
          {
            return JobLogEvent::LAUNCH_FAILED;
          }
          else if (hashCode == JOB_CANCEL_HASH)
          {
            return JobLogEvent::JOB_CANCEL;
          }
          else if (hashCode == JOB_END_HASH)
          {
            return JobLogEvent::JOB_END;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobLogEvent>(hashCode);
          }

          return JobLogEvent::NOT_SET;
        }

        Aws::String GetNameForJobLogEvent(JobLogEvent enumValue)
        {
          switch(enumValue)
          {
          case JobLogEvent::NOT_SET:
            return {};
          case JobLogEvent::JOB_START:
            return "JOB_START";
          case JobLogEvent::SERVER_SKIPPED:
            return "SERVER_SKIPPED";
          case JobLogEvent::CLEANUP_START:
            return "CLEANUP_START";
          case JobLogEvent::CLEANUP_END:
            return "CLEANUP_END";
          case JobLogEvent::CLEANUP_FAIL:
            return "CLEANUP_FAIL";
          case JobLogEvent::SNAPSHOT_START:
            return "SNAPSHOT_START";
          case JobLogEvent::SNAPSHOT_END:
            return "SNAPSHOT_END";
          case JobLogEvent::SNAPSHOT_FAIL:
            return "SNAPSHOT_FAIL";
          case JobLogEvent::USING_PREVIOUS_SNAPSHOT:
            return "USING_PREVIOUS_SNAPSHOT";
          case JobLogEvent::CONVERSION_START:
            return "CONVERSION_START";
          case JobLogEvent::CONVERSION_END:
            return "CONVERSION_END";
          case JobLogEvent::CONVERSION_FAIL:
            return "CONVERSION_FAIL";
          case JobLogEvent::LAUNCH_START:
            return "LAUNCH_START";
          case JobLogEvent::LAUNCH_FAILED:
            return "LAUNCH_FAILED";
          case JobLogEvent::JOB_CANCEL:
            return "JOB_CANCEL";
          case JobLogEvent::JOB_END:
            return "JOB_END";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobLogEventMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws

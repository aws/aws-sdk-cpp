/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace CallAnalyticsJobStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        CallAnalyticsJobStatus GetCallAnalyticsJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return CallAnalyticsJobStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CallAnalyticsJobStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CallAnalyticsJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CallAnalyticsJobStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallAnalyticsJobStatus>(hashCode);
          }

          return CallAnalyticsJobStatus::NOT_SET;
        }

        Aws::String GetNameForCallAnalyticsJobStatus(CallAnalyticsJobStatus enumValue)
        {
          switch(enumValue)
          {
          case CallAnalyticsJobStatus::NOT_SET:
            return {};
          case CallAnalyticsJobStatus::QUEUED:
            return "QUEUED";
          case CallAnalyticsJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CallAnalyticsJobStatus::FAILED:
            return "FAILED";
          case CallAnalyticsJobStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallAnalyticsJobStatusMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws

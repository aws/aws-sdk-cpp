/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/HarvestJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace HarvestJobStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        HarvestJobStatus GetHarvestJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return HarvestJobStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return HarvestJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return HarvestJobStatus::CANCELLED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return HarvestJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return HarvestJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HarvestJobStatus>(hashCode);
          }

          return HarvestJobStatus::NOT_SET;
        }

        Aws::String GetNameForHarvestJobStatus(HarvestJobStatus enumValue)
        {
          switch(enumValue)
          {
          case HarvestJobStatus::NOT_SET:
            return {};
          case HarvestJobStatus::QUEUED:
            return "QUEUED";
          case HarvestJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case HarvestJobStatus::CANCELLED:
            return "CANCELLED";
          case HarvestJobStatus::COMPLETED:
            return "COMPLETED";
          case HarvestJobStatus::FAILED:
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

      } // namespace HarvestJobStatusMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

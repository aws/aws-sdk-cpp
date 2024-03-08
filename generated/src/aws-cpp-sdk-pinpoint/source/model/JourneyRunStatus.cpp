/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyRunStatus.h>
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
      namespace JourneyRunStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        JourneyRunStatus GetJourneyRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return JourneyRunStatus::SCHEDULED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JourneyRunStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JourneyRunStatus::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JourneyRunStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JourneyRunStatus>(hashCode);
          }

          return JourneyRunStatus::NOT_SET;
        }

        Aws::String GetNameForJourneyRunStatus(JourneyRunStatus enumValue)
        {
          switch(enumValue)
          {
          case JourneyRunStatus::NOT_SET:
            return {};
          case JourneyRunStatus::SCHEDULED:
            return "SCHEDULED";
          case JourneyRunStatus::RUNNING:
            return "RUNNING";
          case JourneyRunStatus::COMPLETED:
            return "COMPLETED";
          case JourneyRunStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JourneyRunStatusMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws

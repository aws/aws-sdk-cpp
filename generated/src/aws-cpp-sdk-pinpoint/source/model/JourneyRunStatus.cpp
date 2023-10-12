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

        static constexpr uint32_t SCHEDULED_HASH = ConstExprHashingUtils::HashString("SCHEDULED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");


        JourneyRunStatus GetJourneyRunStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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

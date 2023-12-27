/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/TimelineEventSort.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace TimelineEventSortMapper
      {

        static const int EVENT_TIME_HASH = HashingUtils::HashString("EVENT_TIME");


        TimelineEventSort GetTimelineEventSortForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_TIME_HASH)
          {
            return TimelineEventSort::EVENT_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimelineEventSort>(hashCode);
          }

          return TimelineEventSort::NOT_SET;
        }

        Aws::String GetNameForTimelineEventSort(TimelineEventSort enumValue)
        {
          switch(enumValue)
          {
          case TimelineEventSort::NOT_SET:
            return {};
          case TimelineEventSort::EVENT_TIME:
            return "EVENT_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimelineEventSortMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ScheduleAt.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ScheduleAtMapper
      {

        static const int NOW_HASH = HashingUtils::HashString("NOW");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int OFF_PEAK_WINDOW_HASH = HashingUtils::HashString("OFF_PEAK_WINDOW");


        ScheduleAt GetScheduleAtForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOW_HASH)
          {
            return ScheduleAt::NOW;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ScheduleAt::TIMESTAMP;
          }
          else if (hashCode == OFF_PEAK_WINDOW_HASH)
          {
            return ScheduleAt::OFF_PEAK_WINDOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleAt>(hashCode);
          }

          return ScheduleAt::NOT_SET;
        }

        Aws::String GetNameForScheduleAt(ScheduleAt enumValue)
        {
          switch(enumValue)
          {
          case ScheduleAt::NOT_SET:
            return {};
          case ScheduleAt::NOW:
            return "NOW";
          case ScheduleAt::TIMESTAMP:
            return "TIMESTAMP";
          case ScheduleAt::OFF_PEAK_WINDOW:
            return "OFF_PEAK_WINDOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleAtMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws

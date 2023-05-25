/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TimeRangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace TimeRangeTypeMapper
      {

        static const int TraceId_HASH = HashingUtils::HashString("TraceId");
        static const int Event_HASH = HashingUtils::HashString("Event");


        TimeRangeType GetTimeRangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TraceId_HASH)
          {
            return TimeRangeType::TraceId;
          }
          else if (hashCode == Event_HASH)
          {
            return TimeRangeType::Event;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeRangeType>(hashCode);
          }

          return TimeRangeType::NOT_SET;
        }

        Aws::String GetNameForTimeRangeType(TimeRangeType enumValue)
        {
          switch(enumValue)
          {
          case TimeRangeType::TraceId:
            return "TraceId";
          case TimeRangeType::Event:
            return "Event";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeRangeTypeMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DurationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamInfluxDB
  {
    namespace Model
    {
      namespace DurationTypeMapper
      {

        static const int hours_HASH = HashingUtils::HashString("hours");
        static const int minutes_HASH = HashingUtils::HashString("minutes");
        static const int seconds_HASH = HashingUtils::HashString("seconds");
        static const int milliseconds_HASH = HashingUtils::HashString("milliseconds");


        DurationType GetDurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hours_HASH)
          {
            return DurationType::hours;
          }
          else if (hashCode == minutes_HASH)
          {
            return DurationType::minutes;
          }
          else if (hashCode == seconds_HASH)
          {
            return DurationType::seconds;
          }
          else if (hashCode == milliseconds_HASH)
          {
            return DurationType::milliseconds;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DurationType>(hashCode);
          }

          return DurationType::NOT_SET;
        }

        Aws::String GetNameForDurationType(DurationType enumValue)
        {
          switch(enumValue)
          {
          case DurationType::NOT_SET:
            return {};
          case DurationType::hours:
            return "hours";
          case DurationType::minutes:
            return "minutes";
          case DurationType::seconds:
            return "seconds";
          case DurationType::milliseconds:
            return "milliseconds";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationTypeMapper
    } // namespace Model
  } // namespace TimestreamInfluxDB
} // namespace Aws

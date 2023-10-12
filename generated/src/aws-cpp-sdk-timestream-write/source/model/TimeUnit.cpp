/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/TimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamWrite
  {
    namespace Model
    {
      namespace TimeUnitMapper
      {

        static constexpr uint32_t MILLISECONDS_HASH = ConstExprHashingUtils::HashString("MILLISECONDS");
        static constexpr uint32_t SECONDS_HASH = ConstExprHashingUtils::HashString("SECONDS");
        static constexpr uint32_t MICROSECONDS_HASH = ConstExprHashingUtils::HashString("MICROSECONDS");
        static constexpr uint32_t NANOSECONDS_HASH = ConstExprHashingUtils::HashString("NANOSECONDS");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECONDS_HASH)
          {
            return TimeUnit::MILLISECONDS;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return TimeUnit::SECONDS;
          }
          else if (hashCode == MICROSECONDS_HASH)
          {
            return TimeUnit::MICROSECONDS;
          }
          else if (hashCode == NANOSECONDS_HASH)
          {
            return TimeUnit::NANOSECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnit>(hashCode);
          }

          return TimeUnit::NOT_SET;
        }

        Aws::String GetNameForTimeUnit(TimeUnit enumValue)
        {
          switch(enumValue)
          {
          case TimeUnit::NOT_SET:
            return {};
          case TimeUnit::MILLISECONDS:
            return "MILLISECONDS";
          case TimeUnit::SECONDS:
            return "SECONDS";
          case TimeUnit::MICROSECONDS:
            return "MICROSECONDS";
          case TimeUnit::NANOSECONDS:
            return "NANOSECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws

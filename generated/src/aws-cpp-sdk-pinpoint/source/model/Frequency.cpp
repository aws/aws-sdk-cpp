/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Frequency.h>
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
      namespace FrequencyMapper
      {

        static constexpr uint32_t ONCE_HASH = ConstExprHashingUtils::HashString("ONCE");
        static constexpr uint32_t HOURLY_HASH = ConstExprHashingUtils::HashString("HOURLY");
        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t WEEKLY_HASH = ConstExprHashingUtils::HashString("WEEKLY");
        static constexpr uint32_t MONTHLY_HASH = ConstExprHashingUtils::HashString("MONTHLY");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t IN_APP_EVENT_HASH = ConstExprHashingUtils::HashString("IN_APP_EVENT");


        Frequency GetFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONCE_HASH)
          {
            return Frequency::ONCE;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return Frequency::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return Frequency::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return Frequency::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Frequency::MONTHLY;
          }
          else if (hashCode == EVENT_HASH)
          {
            return Frequency::EVENT;
          }
          else if (hashCode == IN_APP_EVENT_HASH)
          {
            return Frequency::IN_APP_EVENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Frequency>(hashCode);
          }

          return Frequency::NOT_SET;
        }

        Aws::String GetNameForFrequency(Frequency enumValue)
        {
          switch(enumValue)
          {
          case Frequency::NOT_SET:
            return {};
          case Frequency::ONCE:
            return "ONCE";
          case Frequency::HOURLY:
            return "HOURLY";
          case Frequency::DAILY:
            return "DAILY";
          case Frequency::WEEKLY:
            return "WEEKLY";
          case Frequency::MONTHLY:
            return "MONTHLY";
          case Frequency::EVENT:
            return "EVENT";
          case Frequency::IN_APP_EVENT:
            return "IN_APP_EVENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrequencyMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws

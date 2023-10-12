/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UplinkCount.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace UplinkCountMapper
      {

        static constexpr uint32_t UPLINK_COUNT_1_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_1");
        static constexpr uint32_t UPLINK_COUNT_2_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_2");
        static constexpr uint32_t UPLINK_COUNT_3_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_3");
        static constexpr uint32_t UPLINK_COUNT_4_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_4");
        static constexpr uint32_t UPLINK_COUNT_5_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_5");
        static constexpr uint32_t UPLINK_COUNT_6_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_6");
        static constexpr uint32_t UPLINK_COUNT_7_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_7");
        static constexpr uint32_t UPLINK_COUNT_8_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_8");
        static constexpr uint32_t UPLINK_COUNT_12_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_12");
        static constexpr uint32_t UPLINK_COUNT_16_HASH = ConstExprHashingUtils::HashString("UPLINK_COUNT_16");


        UplinkCount GetUplinkCountForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPLINK_COUNT_1_HASH)
          {
            return UplinkCount::UPLINK_COUNT_1;
          }
          else if (hashCode == UPLINK_COUNT_2_HASH)
          {
            return UplinkCount::UPLINK_COUNT_2;
          }
          else if (hashCode == UPLINK_COUNT_3_HASH)
          {
            return UplinkCount::UPLINK_COUNT_3;
          }
          else if (hashCode == UPLINK_COUNT_4_HASH)
          {
            return UplinkCount::UPLINK_COUNT_4;
          }
          else if (hashCode == UPLINK_COUNT_5_HASH)
          {
            return UplinkCount::UPLINK_COUNT_5;
          }
          else if (hashCode == UPLINK_COUNT_6_HASH)
          {
            return UplinkCount::UPLINK_COUNT_6;
          }
          else if (hashCode == UPLINK_COUNT_7_HASH)
          {
            return UplinkCount::UPLINK_COUNT_7;
          }
          else if (hashCode == UPLINK_COUNT_8_HASH)
          {
            return UplinkCount::UPLINK_COUNT_8;
          }
          else if (hashCode == UPLINK_COUNT_12_HASH)
          {
            return UplinkCount::UPLINK_COUNT_12;
          }
          else if (hashCode == UPLINK_COUNT_16_HASH)
          {
            return UplinkCount::UPLINK_COUNT_16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UplinkCount>(hashCode);
          }

          return UplinkCount::NOT_SET;
        }

        Aws::String GetNameForUplinkCount(UplinkCount enumValue)
        {
          switch(enumValue)
          {
          case UplinkCount::NOT_SET:
            return {};
          case UplinkCount::UPLINK_COUNT_1:
            return "UPLINK_COUNT_1";
          case UplinkCount::UPLINK_COUNT_2:
            return "UPLINK_COUNT_2";
          case UplinkCount::UPLINK_COUNT_3:
            return "UPLINK_COUNT_3";
          case UplinkCount::UPLINK_COUNT_4:
            return "UPLINK_COUNT_4";
          case UplinkCount::UPLINK_COUNT_5:
            return "UPLINK_COUNT_5";
          case UplinkCount::UPLINK_COUNT_6:
            return "UPLINK_COUNT_6";
          case UplinkCount::UPLINK_COUNT_7:
            return "UPLINK_COUNT_7";
          case UplinkCount::UPLINK_COUNT_8:
            return "UPLINK_COUNT_8";
          case UplinkCount::UPLINK_COUNT_12:
            return "UPLINK_COUNT_12";
          case UplinkCount::UPLINK_COUNT_16:
            return "UPLINK_COUNT_16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UplinkCountMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws

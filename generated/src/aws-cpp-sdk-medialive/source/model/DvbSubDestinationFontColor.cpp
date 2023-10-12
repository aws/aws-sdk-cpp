/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubDestinationFontColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace DvbSubDestinationFontColorMapper
      {

        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t BLUE_HASH = ConstExprHashingUtils::HashString("BLUE");
        static constexpr uint32_t GREEN_HASH = ConstExprHashingUtils::HashString("GREEN");
        static constexpr uint32_t RED_HASH = ConstExprHashingUtils::HashString("RED");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t YELLOW_HASH = ConstExprHashingUtils::HashString("YELLOW");


        DvbSubDestinationFontColor GetDvbSubDestinationFontColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubDestinationFontColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubDestinationFontColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubDestinationFontColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubDestinationFontColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubDestinationFontColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubDestinationFontColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationFontColor>(hashCode);
          }

          return DvbSubDestinationFontColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationFontColor(DvbSubDestinationFontColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationFontColor::NOT_SET:
            return {};
          case DvbSubDestinationFontColor::BLACK:
            return "BLACK";
          case DvbSubDestinationFontColor::BLUE:
            return "BLUE";
          case DvbSubDestinationFontColor::GREEN:
            return "GREEN";
          case DvbSubDestinationFontColor::RED:
            return "RED";
          case DvbSubDestinationFontColor::WHITE:
            return "WHITE";
          case DvbSubDestinationFontColor::YELLOW:
            return "YELLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubDestinationFontColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

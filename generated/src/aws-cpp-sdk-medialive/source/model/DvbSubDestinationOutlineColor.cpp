/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubDestinationOutlineColor.h>
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
      namespace DvbSubDestinationOutlineColorMapper
      {

        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t BLUE_HASH = ConstExprHashingUtils::HashString("BLUE");
        static constexpr uint32_t GREEN_HASH = ConstExprHashingUtils::HashString("GREEN");
        static constexpr uint32_t RED_HASH = ConstExprHashingUtils::HashString("RED");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t YELLOW_HASH = ConstExprHashingUtils::HashString("YELLOW");


        DvbSubDestinationOutlineColor GetDvbSubDestinationOutlineColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return DvbSubDestinationOutlineColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return DvbSubDestinationOutlineColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return DvbSubDestinationOutlineColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return DvbSubDestinationOutlineColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubDestinationOutlineColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return DvbSubDestinationOutlineColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationOutlineColor>(hashCode);
          }

          return DvbSubDestinationOutlineColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationOutlineColor(DvbSubDestinationOutlineColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationOutlineColor::NOT_SET:
            return {};
          case DvbSubDestinationOutlineColor::BLACK:
            return "BLACK";
          case DvbSubDestinationOutlineColor::BLUE:
            return "BLUE";
          case DvbSubDestinationOutlineColor::GREEN:
            return "GREEN";
          case DvbSubDestinationOutlineColor::RED:
            return "RED";
          case DvbSubDestinationOutlineColor::WHITE:
            return "WHITE";
          case DvbSubDestinationOutlineColor::YELLOW:
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

      } // namespace DvbSubDestinationOutlineColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInFontColor.h>
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
      namespace BurnInFontColorMapper
      {

        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t BLUE_HASH = ConstExprHashingUtils::HashString("BLUE");
        static constexpr uint32_t GREEN_HASH = ConstExprHashingUtils::HashString("GREEN");
        static constexpr uint32_t RED_HASH = ConstExprHashingUtils::HashString("RED");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t YELLOW_HASH = ConstExprHashingUtils::HashString("YELLOW");


        BurnInFontColor GetBurnInFontColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurnInFontColor::BLACK;
          }
          else if (hashCode == BLUE_HASH)
          {
            return BurnInFontColor::BLUE;
          }
          else if (hashCode == GREEN_HASH)
          {
            return BurnInFontColor::GREEN;
          }
          else if (hashCode == RED_HASH)
          {
            return BurnInFontColor::RED;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurnInFontColor::WHITE;
          }
          else if (hashCode == YELLOW_HASH)
          {
            return BurnInFontColor::YELLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInFontColor>(hashCode);
          }

          return BurnInFontColor::NOT_SET;
        }

        Aws::String GetNameForBurnInFontColor(BurnInFontColor enumValue)
        {
          switch(enumValue)
          {
          case BurnInFontColor::NOT_SET:
            return {};
          case BurnInFontColor::BLACK:
            return "BLACK";
          case BurnInFontColor::BLUE:
            return "BLUE";
          case BurnInFontColor::GREEN:
            return "GREEN";
          case BurnInFontColor::RED:
            return "RED";
          case BurnInFontColor::WHITE:
            return "WHITE";
          case BurnInFontColor::YELLOW:
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

      } // namespace BurnInFontColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

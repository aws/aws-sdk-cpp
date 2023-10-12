/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleShadowColor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace BurninSubtitleShadowColorMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        BurninSubtitleShadowColor GetBurninSubtitleShadowColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return BurninSubtitleShadowColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return BurninSubtitleShadowColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurninSubtitleShadowColor::WHITE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return BurninSubtitleShadowColor::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleShadowColor>(hashCode);
          }

          return BurninSubtitleShadowColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleShadowColor(BurninSubtitleShadowColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleShadowColor::NOT_SET:
            return {};
          case BurninSubtitleShadowColor::NONE:
            return "NONE";
          case BurninSubtitleShadowColor::BLACK:
            return "BLACK";
          case BurninSubtitleShadowColor::WHITE:
            return "WHITE";
          case BurninSubtitleShadowColor::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleShadowColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

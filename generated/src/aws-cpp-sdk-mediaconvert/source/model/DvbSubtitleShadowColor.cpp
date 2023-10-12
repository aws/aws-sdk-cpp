/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleShadowColor.h>
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
      namespace DvbSubtitleShadowColorMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        DvbSubtitleShadowColor GetDvbSubtitleShadowColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DvbSubtitleShadowColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleShadowColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleShadowColor::WHITE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return DvbSubtitleShadowColor::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleShadowColor>(hashCode);
          }

          return DvbSubtitleShadowColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleShadowColor(DvbSubtitleShadowColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleShadowColor::NOT_SET:
            return {};
          case DvbSubtitleShadowColor::NONE:
            return "NONE";
          case DvbSubtitleShadowColor::BLACK:
            return "BLACK";
          case DvbSubtitleShadowColor::WHITE:
            return "WHITE";
          case DvbSubtitleShadowColor::AUTO:
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

      } // namespace DvbSubtitleShadowColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

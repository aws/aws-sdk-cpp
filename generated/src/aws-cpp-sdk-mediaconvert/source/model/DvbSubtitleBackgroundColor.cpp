/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleBackgroundColor.h>
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
      namespace DvbSubtitleBackgroundColorMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t BLACK_HASH = ConstExprHashingUtils::HashString("BLACK");
        static constexpr uint32_t WHITE_HASH = ConstExprHashingUtils::HashString("WHITE");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        DvbSubtitleBackgroundColor GetDvbSubtitleBackgroundColorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DvbSubtitleBackgroundColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleBackgroundColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleBackgroundColor::WHITE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return DvbSubtitleBackgroundColor::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleBackgroundColor>(hashCode);
          }

          return DvbSubtitleBackgroundColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleBackgroundColor(DvbSubtitleBackgroundColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleBackgroundColor::NOT_SET:
            return {};
          case DvbSubtitleBackgroundColor::NONE:
            return "NONE";
          case DvbSubtitleBackgroundColor::BLACK:
            return "BLACK";
          case DvbSubtitleBackgroundColor::WHITE:
            return "WHITE";
          case DvbSubtitleBackgroundColor::AUTO:
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

      } // namespace DvbSubtitleBackgroundColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

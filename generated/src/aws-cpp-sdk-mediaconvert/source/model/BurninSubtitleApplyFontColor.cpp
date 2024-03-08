/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleApplyFontColor.h>
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
      namespace BurninSubtitleApplyFontColorMapper
      {

        static const int WHITE_TEXT_ONLY_HASH = HashingUtils::HashString("WHITE_TEXT_ONLY");
        static const int ALL_TEXT_HASH = HashingUtils::HashString("ALL_TEXT");


        BurninSubtitleApplyFontColor GetBurninSubtitleApplyFontColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHITE_TEXT_ONLY_HASH)
          {
            return BurninSubtitleApplyFontColor::WHITE_TEXT_ONLY;
          }
          else if (hashCode == ALL_TEXT_HASH)
          {
            return BurninSubtitleApplyFontColor::ALL_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleApplyFontColor>(hashCode);
          }

          return BurninSubtitleApplyFontColor::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleApplyFontColor(BurninSubtitleApplyFontColor enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleApplyFontColor::NOT_SET:
            return {};
          case BurninSubtitleApplyFontColor::WHITE_TEXT_ONLY:
            return "WHITE_TEXT_ONLY";
          case BurninSubtitleApplyFontColor::ALL_TEXT:
            return "ALL_TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurninSubtitleApplyFontColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

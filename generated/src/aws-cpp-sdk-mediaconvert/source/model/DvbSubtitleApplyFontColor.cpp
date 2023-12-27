/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleApplyFontColor.h>
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
      namespace DvbSubtitleApplyFontColorMapper
      {

        static const int WHITE_TEXT_ONLY_HASH = HashingUtils::HashString("WHITE_TEXT_ONLY");
        static const int ALL_TEXT_HASH = HashingUtils::HashString("ALL_TEXT");


        DvbSubtitleApplyFontColor GetDvbSubtitleApplyFontColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHITE_TEXT_ONLY_HASH)
          {
            return DvbSubtitleApplyFontColor::WHITE_TEXT_ONLY;
          }
          else if (hashCode == ALL_TEXT_HASH)
          {
            return DvbSubtitleApplyFontColor::ALL_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleApplyFontColor>(hashCode);
          }

          return DvbSubtitleApplyFontColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleApplyFontColor(DvbSubtitleApplyFontColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleApplyFontColor::NOT_SET:
            return {};
          case DvbSubtitleApplyFontColor::WHITE_TEXT_ONLY:
            return "WHITE_TEXT_ONLY";
          case DvbSubtitleApplyFontColor::ALL_TEXT:
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

      } // namespace DvbSubtitleApplyFontColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

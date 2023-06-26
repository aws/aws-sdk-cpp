/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontStyle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FontStyleMapper
      {

        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
        static const int ITALIC_HASH = HashingUtils::HashString("ITALIC");


        FontStyle GetFontStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NORMAL_HASH)
          {
            return FontStyle::NORMAL;
          }
          else if (hashCode == ITALIC_HASH)
          {
            return FontStyle::ITALIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FontStyle>(hashCode);
          }

          return FontStyle::NOT_SET;
        }

        Aws::String GetNameForFontStyle(FontStyle enumValue)
        {
          switch(enumValue)
          {
          case FontStyle::NORMAL:
            return "NORMAL";
          case FontStyle::ITALIC:
            return "ITALIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FontStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

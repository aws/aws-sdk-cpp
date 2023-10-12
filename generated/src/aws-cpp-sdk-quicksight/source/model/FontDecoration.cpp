/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontDecoration.h>
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
      namespace FontDecorationMapper
      {

        static constexpr uint32_t UNDERLINE_HASH = ConstExprHashingUtils::HashString("UNDERLINE");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        FontDecoration GetFontDecorationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNDERLINE_HASH)
          {
            return FontDecoration::UNDERLINE;
          }
          else if (hashCode == NONE_HASH)
          {
            return FontDecoration::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FontDecoration>(hashCode);
          }

          return FontDecoration::NOT_SET;
        }

        Aws::String GetNameForFontDecoration(FontDecoration enumValue)
        {
          switch(enumValue)
          {
          case FontDecoration::NOT_SET:
            return {};
          case FontDecoration::UNDERLINE:
            return "UNDERLINE";
          case FontDecoration::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FontDecorationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

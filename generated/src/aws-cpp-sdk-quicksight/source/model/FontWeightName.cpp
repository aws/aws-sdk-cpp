/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontWeightName.h>
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
      namespace FontWeightNameMapper
      {

        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
        static const int BOLD_HASH = HashingUtils::HashString("BOLD");


        FontWeightName GetFontWeightNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NORMAL_HASH)
          {
            return FontWeightName::NORMAL;
          }
          else if (hashCode == BOLD_HASH)
          {
            return FontWeightName::BOLD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FontWeightName>(hashCode);
          }

          return FontWeightName::NOT_SET;
        }

        Aws::String GetNameForFontWeightName(FontWeightName enumValue)
        {
          switch(enumValue)
          {
          case FontWeightName::NORMAL:
            return "NORMAL";
          case FontWeightName::BOLD:
            return "BOLD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FontWeightNameMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingIconDisplayOption.h>
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
      namespace ConditionalFormattingIconDisplayOptionMapper
      {

        static const int ICON_ONLY_HASH = HashingUtils::HashString("ICON_ONLY");


        ConditionalFormattingIconDisplayOption GetConditionalFormattingIconDisplayOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ICON_ONLY_HASH)
          {
            return ConditionalFormattingIconDisplayOption::ICON_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionalFormattingIconDisplayOption>(hashCode);
          }

          return ConditionalFormattingIconDisplayOption::NOT_SET;
        }

        Aws::String GetNameForConditionalFormattingIconDisplayOption(ConditionalFormattingIconDisplayOption enumValue)
        {
          switch(enumValue)
          {
          case ConditionalFormattingIconDisplayOption::ICON_ONLY:
            return "ICON_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionalFormattingIconDisplayOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

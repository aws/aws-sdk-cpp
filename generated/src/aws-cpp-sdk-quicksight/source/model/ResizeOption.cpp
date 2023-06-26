/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ResizeOption.h>
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
      namespace ResizeOptionMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int RESPONSIVE_HASH = HashingUtils::HashString("RESPONSIVE");


        ResizeOption GetResizeOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return ResizeOption::FIXED;
          }
          else if (hashCode == RESPONSIVE_HASH)
          {
            return ResizeOption::RESPONSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResizeOption>(hashCode);
          }

          return ResizeOption::NOT_SET;
        }

        Aws::String GetNameForResizeOption(ResizeOption enumValue)
        {
          switch(enumValue)
          {
          case ResizeOption::FIXED:
            return "FIXED";
          case ResizeOption::RESPONSIVE:
            return "RESPONSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResizeOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

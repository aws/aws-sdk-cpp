/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TooltipTarget.h>
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
      namespace TooltipTargetMapper
      {

        static const int BOTH_HASH = HashingUtils::HashString("BOTH");
        static const int BAR_HASH = HashingUtils::HashString("BAR");
        static const int LINE_HASH = HashingUtils::HashString("LINE");


        TooltipTarget GetTooltipTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOTH_HASH)
          {
            return TooltipTarget::BOTH;
          }
          else if (hashCode == BAR_HASH)
          {
            return TooltipTarget::BAR;
          }
          else if (hashCode == LINE_HASH)
          {
            return TooltipTarget::LINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TooltipTarget>(hashCode);
          }

          return TooltipTarget::NOT_SET;
        }

        Aws::String GetNameForTooltipTarget(TooltipTarget enumValue)
        {
          switch(enumValue)
          {
          case TooltipTarget::NOT_SET:
            return {};
          case TooltipTarget::BOTH:
            return "BOTH";
          case TooltipTarget::BAR:
            return "BAR";
          case TooltipTarget::LINE:
            return "LINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TooltipTargetMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

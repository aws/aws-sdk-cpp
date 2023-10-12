/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LegendPosition.h>
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
      namespace LegendPositionMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t RIGHT_HASH = ConstExprHashingUtils::HashString("RIGHT");
        static constexpr uint32_t BOTTOM_HASH = ConstExprHashingUtils::HashString("BOTTOM");
        static constexpr uint32_t TOP_HASH = ConstExprHashingUtils::HashString("TOP");


        LegendPosition GetLegendPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return LegendPosition::AUTO;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return LegendPosition::RIGHT;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return LegendPosition::BOTTOM;
          }
          else if (hashCode == TOP_HASH)
          {
            return LegendPosition::TOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LegendPosition>(hashCode);
          }

          return LegendPosition::NOT_SET;
        }

        Aws::String GetNameForLegendPosition(LegendPosition enumValue)
        {
          switch(enumValue)
          {
          case LegendPosition::NOT_SET:
            return {};
          case LegendPosition::AUTO:
            return "AUTO";
          case LegendPosition::RIGHT:
            return "RIGHT";
          case LegendPosition::BOTTOM:
            return "BOTTOM";
          case LegendPosition::TOP:
            return "TOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LegendPositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

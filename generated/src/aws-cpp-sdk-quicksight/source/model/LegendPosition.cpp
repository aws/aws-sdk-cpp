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

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");
        static const int BOTTOM_HASH = HashingUtils::HashString("BOTTOM");
        static const int TOP_HASH = HashingUtils::HashString("TOP");


        LegendPosition GetLegendPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

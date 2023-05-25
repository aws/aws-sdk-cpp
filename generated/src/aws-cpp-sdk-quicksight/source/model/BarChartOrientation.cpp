/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BarChartOrientation.h>
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
      namespace BarChartOrientationMapper
      {

        static const int HORIZONTAL_HASH = HashingUtils::HashString("HORIZONTAL");
        static const int VERTICAL_HASH = HashingUtils::HashString("VERTICAL");


        BarChartOrientation GetBarChartOrientationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HORIZONTAL_HASH)
          {
            return BarChartOrientation::HORIZONTAL;
          }
          else if (hashCode == VERTICAL_HASH)
          {
            return BarChartOrientation::VERTICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BarChartOrientation>(hashCode);
          }

          return BarChartOrientation::NOT_SET;
        }

        Aws::String GetNameForBarChartOrientation(BarChartOrientation enumValue)
        {
          switch(enumValue)
          {
          case BarChartOrientation::HORIZONTAL:
            return "HORIZONTAL";
          case BarChartOrientation::VERTICAL:
            return "VERTICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BarChartOrientationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartType.h>
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
      namespace LineChartTypeMapper
      {

        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int AREA_HASH = HashingUtils::HashString("AREA");
        static const int STACKED_AREA_HASH = HashingUtils::HashString("STACKED_AREA");


        LineChartType GetLineChartTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_HASH)
          {
            return LineChartType::LINE;
          }
          else if (hashCode == AREA_HASH)
          {
            return LineChartType::AREA;
          }
          else if (hashCode == STACKED_AREA_HASH)
          {
            return LineChartType::STACKED_AREA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineChartType>(hashCode);
          }

          return LineChartType::NOT_SET;
        }

        Aws::String GetNameForLineChartType(LineChartType enumValue)
        {
          switch(enumValue)
          {
          case LineChartType::LINE:
            return "LINE";
          case LineChartType::AREA:
            return "AREA";
          case LineChartType::STACKED_AREA:
            return "STACKED_AREA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineChartTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

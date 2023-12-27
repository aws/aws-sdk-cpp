/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartShape.h>
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
      namespace RadarChartShapeMapper
      {

        static const int CIRCLE_HASH = HashingUtils::HashString("CIRCLE");
        static const int POLYGON_HASH = HashingUtils::HashString("POLYGON");


        RadarChartShape GetRadarChartShapeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CIRCLE_HASH)
          {
            return RadarChartShape::CIRCLE;
          }
          else if (hashCode == POLYGON_HASH)
          {
            return RadarChartShape::POLYGON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RadarChartShape>(hashCode);
          }

          return RadarChartShape::NOT_SET;
        }

        Aws::String GetNameForRadarChartShape(RadarChartShape enumValue)
        {
          switch(enumValue)
          {
          case RadarChartShape::NOT_SET:
            return {};
          case RadarChartShape::CIRCLE:
            return "CIRCLE";
          case RadarChartShape::POLYGON:
            return "POLYGON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RadarChartShapeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

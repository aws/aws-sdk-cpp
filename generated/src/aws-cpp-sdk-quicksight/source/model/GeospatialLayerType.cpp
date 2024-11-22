/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerType.h>
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
      namespace GeospatialLayerTypeMapper
      {

        static const int POINT_HASH = HashingUtils::HashString("POINT");
        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int POLYGON_HASH = HashingUtils::HashString("POLYGON");


        GeospatialLayerType GetGeospatialLayerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POINT_HASH)
          {
            return GeospatialLayerType::POINT;
          }
          else if (hashCode == LINE_HASH)
          {
            return GeospatialLayerType::LINE;
          }
          else if (hashCode == POLYGON_HASH)
          {
            return GeospatialLayerType::POLYGON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeospatialLayerType>(hashCode);
          }

          return GeospatialLayerType::NOT_SET;
        }

        Aws::String GetNameForGeospatialLayerType(GeospatialLayerType enumValue)
        {
          switch(enumValue)
          {
          case GeospatialLayerType::NOT_SET:
            return {};
          case GeospatialLayerType::POINT:
            return "POINT";
          case GeospatialLayerType::LINE:
            return "LINE";
          case GeospatialLayerType::POLYGON:
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

      } // namespace GeospatialLayerTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

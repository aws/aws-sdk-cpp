/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapNavigation.h>
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
      namespace GeospatialMapNavigationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        GeospatialMapNavigation GetGeospatialMapNavigationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return GeospatialMapNavigation::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GeospatialMapNavigation::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeospatialMapNavigation>(hashCode);
          }

          return GeospatialMapNavigation::NOT_SET;
        }

        Aws::String GetNameForGeospatialMapNavigation(GeospatialMapNavigation enumValue)
        {
          switch(enumValue)
          {
          case GeospatialMapNavigation::NOT_SET:
            return {};
          case GeospatialMapNavigation::ENABLED:
            return "ENABLED";
          case GeospatialMapNavigation::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeospatialMapNavigationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

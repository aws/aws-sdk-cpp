/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeoSpatialCountryCode.h>
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
      namespace GeoSpatialCountryCodeMapper
      {

        static const int US_HASH = HashingUtils::HashString("US");


        GeoSpatialCountryCode GetGeoSpatialCountryCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == US_HASH)
          {
            return GeoSpatialCountryCode::US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoSpatialCountryCode>(hashCode);
          }

          return GeoSpatialCountryCode::NOT_SET;
        }

        Aws::String GetNameForGeoSpatialCountryCode(GeoSpatialCountryCode enumValue)
        {
          switch(enumValue)
          {
          case GeoSpatialCountryCode::US:
            return "US";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeoSpatialCountryCodeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

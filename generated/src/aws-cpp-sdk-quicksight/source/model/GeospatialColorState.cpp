/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialColorState.h>
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
      namespace GeospatialColorStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        GeospatialColorState GetGeospatialColorStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return GeospatialColorState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GeospatialColorState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeospatialColorState>(hashCode);
          }

          return GeospatialColorState::NOT_SET;
        }

        Aws::String GetNameForGeospatialColorState(GeospatialColorState enumValue)
        {
          switch(enumValue)
          {
          case GeospatialColorState::NOT_SET:
            return {};
          case GeospatialColorState::ENABLED:
            return "ENABLED";
          case GeospatialColorState::DISABLED:
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

      } // namespace GeospatialColorStateMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws

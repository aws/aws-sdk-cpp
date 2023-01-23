/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264SpatialAq.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H264SpatialAqMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264SpatialAq GetH264SpatialAqForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264SpatialAq::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264SpatialAq::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264SpatialAq>(hashCode);
          }

          return H264SpatialAq::NOT_SET;
        }

        Aws::String GetNameForH264SpatialAq(H264SpatialAq enumValue)
        {
          switch(enumValue)
          {
          case H264SpatialAq::DISABLED:
            return "DISABLED";
          case H264SpatialAq::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264SpatialAqMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

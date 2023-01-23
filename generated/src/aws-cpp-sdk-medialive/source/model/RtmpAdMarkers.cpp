/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RtmpAdMarkers.h>
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
      namespace RtmpAdMarkersMapper
      {

        static const int ON_CUE_POINT_SCTE35_HASH = HashingUtils::HashString("ON_CUE_POINT_SCTE35");


        RtmpAdMarkers GetRtmpAdMarkersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_CUE_POINT_SCTE35_HASH)
          {
            return RtmpAdMarkers::ON_CUE_POINT_SCTE35;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RtmpAdMarkers>(hashCode);
          }

          return RtmpAdMarkers::NOT_SET;
        }

        Aws::String GetNameForRtmpAdMarkers(RtmpAdMarkers enumValue)
        {
          switch(enumValue)
          {
          case RtmpAdMarkers::ON_CUE_POINT_SCTE35:
            return "ON_CUE_POINT_SCTE35";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RtmpAdMarkersMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

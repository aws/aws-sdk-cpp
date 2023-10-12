/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/AdMarkers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace AdMarkersMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t SCTE35_ENHANCED_HASH = ConstExprHashingUtils::HashString("SCTE35_ENHANCED");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        AdMarkers GetAdMarkersForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AdMarkers::NONE;
          }
          else if (hashCode == SCTE35_ENHANCED_HASH)
          {
            return AdMarkers::SCTE35_ENHANCED;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return AdMarkers::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdMarkers>(hashCode);
          }

          return AdMarkers::NOT_SET;
        }

        Aws::String GetNameForAdMarkers(AdMarkers enumValue)
        {
          switch(enumValue)
          {
          case AdMarkers::NOT_SET:
            return {};
          case AdMarkers::NONE:
            return "NONE";
          case AdMarkers::SCTE35_ENHANCED:
            return "SCTE35_ENHANCED";
          case AdMarkers::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdMarkersMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws

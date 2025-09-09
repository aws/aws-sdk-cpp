/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/AdMarkerHls.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace AdMarkerHlsMapper
      {

        static const int DATERANGE_HASH = HashingUtils::HashString("DATERANGE");
        static const int SCTE35_ENHANCED_HASH = HashingUtils::HashString("SCTE35_ENHANCED");


        AdMarkerHls GetAdMarkerHlsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATERANGE_HASH)
          {
            return AdMarkerHls::DATERANGE;
          }
          else if (hashCode == SCTE35_ENHANCED_HASH)
          {
            return AdMarkerHls::SCTE35_ENHANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdMarkerHls>(hashCode);
          }

          return AdMarkerHls::NOT_SET;
        }

        Aws::String GetNameForAdMarkerHls(AdMarkerHls enumValue)
        {
          switch(enumValue)
          {
          case AdMarkerHls::NOT_SET:
            return {};
          case AdMarkerHls::DATERANGE:
            return "DATERANGE";
          case AdMarkerHls::SCTE35_ENHANCED:
            return "SCTE35_ENHANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdMarkerHlsMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

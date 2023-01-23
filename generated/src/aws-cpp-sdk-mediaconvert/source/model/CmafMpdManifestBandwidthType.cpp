/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafMpdManifestBandwidthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmafMpdManifestBandwidthTypeMapper
      {

        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        CmafMpdManifestBandwidthType GetCmafMpdManifestBandwidthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVERAGE_HASH)
          {
            return CmafMpdManifestBandwidthType::AVERAGE;
          }
          else if (hashCode == MAX_HASH)
          {
            return CmafMpdManifestBandwidthType::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafMpdManifestBandwidthType>(hashCode);
          }

          return CmafMpdManifestBandwidthType::NOT_SET;
        }

        Aws::String GetNameForCmafMpdManifestBandwidthType(CmafMpdManifestBandwidthType enumValue)
        {
          switch(enumValue)
          {
          case CmafMpdManifestBandwidthType::AVERAGE:
            return "AVERAGE";
          case CmafMpdManifestBandwidthType::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafMpdManifestBandwidthTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

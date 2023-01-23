/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoPlaybackDeviceCompatibility.h>
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
      namespace DashIsoPlaybackDeviceCompatibilityMapper
      {

        static const int CENC_V1_HASH = HashingUtils::HashString("CENC_V1");
        static const int UNENCRYPTED_SEI_HASH = HashingUtils::HashString("UNENCRYPTED_SEI");


        DashIsoPlaybackDeviceCompatibility GetDashIsoPlaybackDeviceCompatibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENC_V1_HASH)
          {
            return DashIsoPlaybackDeviceCompatibility::CENC_V1;
          }
          else if (hashCode == UNENCRYPTED_SEI_HASH)
          {
            return DashIsoPlaybackDeviceCompatibility::UNENCRYPTED_SEI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoPlaybackDeviceCompatibility>(hashCode);
          }

          return DashIsoPlaybackDeviceCompatibility::NOT_SET;
        }

        Aws::String GetNameForDashIsoPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility enumValue)
        {
          switch(enumValue)
          {
          case DashIsoPlaybackDeviceCompatibility::CENC_V1:
            return "CENC_V1";
          case DashIsoPlaybackDeviceCompatibility::UNENCRYPTED_SEI:
            return "UNENCRYPTED_SEI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoPlaybackDeviceCompatibilityMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

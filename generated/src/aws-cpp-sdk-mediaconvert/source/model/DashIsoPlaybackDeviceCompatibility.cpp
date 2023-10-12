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

        static constexpr uint32_t CENC_V1_HASH = ConstExprHashingUtils::HashString("CENC_V1");
        static constexpr uint32_t UNENCRYPTED_SEI_HASH = ConstExprHashingUtils::HashString("UNENCRYPTED_SEI");


        DashIsoPlaybackDeviceCompatibility GetDashIsoPlaybackDeviceCompatibilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DashIsoPlaybackDeviceCompatibility::NOT_SET:
            return {};
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

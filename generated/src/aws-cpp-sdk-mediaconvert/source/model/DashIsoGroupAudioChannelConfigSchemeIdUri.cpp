/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoGroupAudioChannelConfigSchemeIdUri.h>
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
      namespace DashIsoGroupAudioChannelConfigSchemeIdUriMapper
      {

        static const int MPEG_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("MPEG_CHANNEL_CONFIGURATION");
        static const int DOLBY_CHANNEL_CONFIGURATION_HASH = HashingUtils::HashString("DOLBY_CHANNEL_CONFIGURATION");


        DashIsoGroupAudioChannelConfigSchemeIdUri GetDashIsoGroupAudioChannelConfigSchemeIdUriForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG_CHANNEL_CONFIGURATION_HASH)
          {
            return DashIsoGroupAudioChannelConfigSchemeIdUri::MPEG_CHANNEL_CONFIGURATION;
          }
          else if (hashCode == DOLBY_CHANNEL_CONFIGURATION_HASH)
          {
            return DashIsoGroupAudioChannelConfigSchemeIdUri::DOLBY_CHANNEL_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoGroupAudioChannelConfigSchemeIdUri>(hashCode);
          }

          return DashIsoGroupAudioChannelConfigSchemeIdUri::NOT_SET;
        }

        Aws::String GetNameForDashIsoGroupAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri enumValue)
        {
          switch(enumValue)
          {
          case DashIsoGroupAudioChannelConfigSchemeIdUri::NOT_SET:
            return {};
          case DashIsoGroupAudioChannelConfigSchemeIdUri::MPEG_CHANNEL_CONFIGURATION:
            return "MPEG_CHANNEL_CONFIGURATION";
          case DashIsoGroupAudioChannelConfigSchemeIdUri::DOLBY_CHANNEL_CONFIGURATION:
            return "DOLBY_CHANNEL_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoGroupAudioChannelConfigSchemeIdUriMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

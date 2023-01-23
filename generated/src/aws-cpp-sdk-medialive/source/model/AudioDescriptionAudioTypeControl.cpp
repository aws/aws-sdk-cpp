/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioDescriptionAudioTypeControl.h>
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
      namespace AudioDescriptionAudioTypeControlMapper
      {

        static const int FOLLOW_INPUT_HASH = HashingUtils::HashString("FOLLOW_INPUT");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        AudioDescriptionAudioTypeControl GetAudioDescriptionAudioTypeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return AudioDescriptionAudioTypeControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return AudioDescriptionAudioTypeControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioDescriptionAudioTypeControl>(hashCode);
          }

          return AudioDescriptionAudioTypeControl::NOT_SET;
        }

        Aws::String GetNameForAudioDescriptionAudioTypeControl(AudioDescriptionAudioTypeControl enumValue)
        {
          switch(enumValue)
          {
          case AudioDescriptionAudioTypeControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case AudioDescriptionAudioTypeControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioDescriptionAudioTypeControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

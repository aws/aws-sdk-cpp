/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DashRoleAudio.h>
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
      namespace DashRoleAudioMapper
      {

        static const int ALTERNATE_HASH = HashingUtils::HashString("ALTERNATE");
        static const int COMMENTARY_HASH = HashingUtils::HashString("COMMENTARY");
        static const int DESCRIPTION_HASH = HashingUtils::HashString("DESCRIPTION");
        static const int DUB_HASH = HashingUtils::HashString("DUB");
        static const int EMERGENCY_HASH = HashingUtils::HashString("EMERGENCY");
        static const int ENHANCED_AUDIO_INTELLIGIBILITY_HASH = HashingUtils::HashString("ENHANCED-AUDIO-INTELLIGIBILITY");
        static const int KARAOKE_HASH = HashingUtils::HashString("KARAOKE");
        static const int MAIN_HASH = HashingUtils::HashString("MAIN");
        static const int SUPPLEMENTARY_HASH = HashingUtils::HashString("SUPPLEMENTARY");


        DashRoleAudio GetDashRoleAudioForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALTERNATE_HASH)
          {
            return DashRoleAudio::ALTERNATE;
          }
          else if (hashCode == COMMENTARY_HASH)
          {
            return DashRoleAudio::COMMENTARY;
          }
          else if (hashCode == DESCRIPTION_HASH)
          {
            return DashRoleAudio::DESCRIPTION;
          }
          else if (hashCode == DUB_HASH)
          {
            return DashRoleAudio::DUB;
          }
          else if (hashCode == EMERGENCY_HASH)
          {
            return DashRoleAudio::EMERGENCY;
          }
          else if (hashCode == ENHANCED_AUDIO_INTELLIGIBILITY_HASH)
          {
            return DashRoleAudio::ENHANCED_AUDIO_INTELLIGIBILITY;
          }
          else if (hashCode == KARAOKE_HASH)
          {
            return DashRoleAudio::KARAOKE;
          }
          else if (hashCode == MAIN_HASH)
          {
            return DashRoleAudio::MAIN;
          }
          else if (hashCode == SUPPLEMENTARY_HASH)
          {
            return DashRoleAudio::SUPPLEMENTARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashRoleAudio>(hashCode);
          }

          return DashRoleAudio::NOT_SET;
        }

        Aws::String GetNameForDashRoleAudio(DashRoleAudio enumValue)
        {
          switch(enumValue)
          {
          case DashRoleAudio::NOT_SET:
            return {};
          case DashRoleAudio::ALTERNATE:
            return "ALTERNATE";
          case DashRoleAudio::COMMENTARY:
            return "COMMENTARY";
          case DashRoleAudio::DESCRIPTION:
            return "DESCRIPTION";
          case DashRoleAudio::DUB:
            return "DUB";
          case DashRoleAudio::EMERGENCY:
            return "EMERGENCY";
          case DashRoleAudio::ENHANCED_AUDIO_INTELLIGIBILITY:
            return "ENHANCED-AUDIO-INTELLIGIBILITY";
          case DashRoleAudio::KARAOKE:
            return "KARAOKE";
          case DashRoleAudio::MAIN:
            return "MAIN";
          case DashRoleAudio::SUPPLEMENTARY:
            return "SUPPLEMENTARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashRoleAudioMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

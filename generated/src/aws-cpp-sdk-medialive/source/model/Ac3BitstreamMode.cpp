/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Ac3BitstreamMode.h>
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
      namespace Ac3BitstreamModeMapper
      {

        static constexpr uint32_t COMMENTARY_HASH = ConstExprHashingUtils::HashString("COMMENTARY");
        static constexpr uint32_t COMPLETE_MAIN_HASH = ConstExprHashingUtils::HashString("COMPLETE_MAIN");
        static constexpr uint32_t DIALOGUE_HASH = ConstExprHashingUtils::HashString("DIALOGUE");
        static constexpr uint32_t EMERGENCY_HASH = ConstExprHashingUtils::HashString("EMERGENCY");
        static constexpr uint32_t HEARING_IMPAIRED_HASH = ConstExprHashingUtils::HashString("HEARING_IMPAIRED");
        static constexpr uint32_t MUSIC_AND_EFFECTS_HASH = ConstExprHashingUtils::HashString("MUSIC_AND_EFFECTS");
        static constexpr uint32_t VISUALLY_IMPAIRED_HASH = ConstExprHashingUtils::HashString("VISUALLY_IMPAIRED");
        static constexpr uint32_t VOICE_OVER_HASH = ConstExprHashingUtils::HashString("VOICE_OVER");


        Ac3BitstreamMode GetAc3BitstreamModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMENTARY_HASH)
          {
            return Ac3BitstreamMode::COMMENTARY;
          }
          else if (hashCode == COMPLETE_MAIN_HASH)
          {
            return Ac3BitstreamMode::COMPLETE_MAIN;
          }
          else if (hashCode == DIALOGUE_HASH)
          {
            return Ac3BitstreamMode::DIALOGUE;
          }
          else if (hashCode == EMERGENCY_HASH)
          {
            return Ac3BitstreamMode::EMERGENCY;
          }
          else if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return Ac3BitstreamMode::HEARING_IMPAIRED;
          }
          else if (hashCode == MUSIC_AND_EFFECTS_HASH)
          {
            return Ac3BitstreamMode::MUSIC_AND_EFFECTS;
          }
          else if (hashCode == VISUALLY_IMPAIRED_HASH)
          {
            return Ac3BitstreamMode::VISUALLY_IMPAIRED;
          }
          else if (hashCode == VOICE_OVER_HASH)
          {
            return Ac3BitstreamMode::VOICE_OVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3BitstreamMode>(hashCode);
          }

          return Ac3BitstreamMode::NOT_SET;
        }

        Aws::String GetNameForAc3BitstreamMode(Ac3BitstreamMode enumValue)
        {
          switch(enumValue)
          {
          case Ac3BitstreamMode::NOT_SET:
            return {};
          case Ac3BitstreamMode::COMMENTARY:
            return "COMMENTARY";
          case Ac3BitstreamMode::COMPLETE_MAIN:
            return "COMPLETE_MAIN";
          case Ac3BitstreamMode::DIALOGUE:
            return "DIALOGUE";
          case Ac3BitstreamMode::EMERGENCY:
            return "EMERGENCY";
          case Ac3BitstreamMode::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case Ac3BitstreamMode::MUSIC_AND_EFFECTS:
            return "MUSIC_AND_EFFECTS";
          case Ac3BitstreamMode::VISUALLY_IMPAIRED:
            return "VISUALLY_IMPAIRED";
          case Ac3BitstreamMode::VOICE_OVER:
            return "VOICE_OVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ac3BitstreamModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

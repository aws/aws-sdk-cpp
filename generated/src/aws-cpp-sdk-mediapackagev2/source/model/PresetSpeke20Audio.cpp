/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/PresetSpeke20Audio.h>
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
      namespace PresetSpeke20AudioMapper
      {

        static const int PRESET_AUDIO_1_HASH = HashingUtils::HashString("PRESET_AUDIO_1");
        static const int PRESET_AUDIO_2_HASH = HashingUtils::HashString("PRESET_AUDIO_2");
        static const int PRESET_AUDIO_3_HASH = HashingUtils::HashString("PRESET_AUDIO_3");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int UNENCRYPTED_HASH = HashingUtils::HashString("UNENCRYPTED");


        PresetSpeke20Audio GetPresetSpeke20AudioForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESET_AUDIO_1_HASH)
          {
            return PresetSpeke20Audio::PRESET_AUDIO_1;
          }
          else if (hashCode == PRESET_AUDIO_2_HASH)
          {
            return PresetSpeke20Audio::PRESET_AUDIO_2;
          }
          else if (hashCode == PRESET_AUDIO_3_HASH)
          {
            return PresetSpeke20Audio::PRESET_AUDIO_3;
          }
          else if (hashCode == SHARED_HASH)
          {
            return PresetSpeke20Audio::SHARED;
          }
          else if (hashCode == UNENCRYPTED_HASH)
          {
            return PresetSpeke20Audio::UNENCRYPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresetSpeke20Audio>(hashCode);
          }

          return PresetSpeke20Audio::NOT_SET;
        }

        Aws::String GetNameForPresetSpeke20Audio(PresetSpeke20Audio enumValue)
        {
          switch(enumValue)
          {
          case PresetSpeke20Audio::NOT_SET:
            return {};
          case PresetSpeke20Audio::PRESET_AUDIO_1:
            return "PRESET_AUDIO_1";
          case PresetSpeke20Audio::PRESET_AUDIO_2:
            return "PRESET_AUDIO_2";
          case PresetSpeke20Audio::PRESET_AUDIO_3:
            return "PRESET_AUDIO_3";
          case PresetSpeke20Audio::SHARED:
            return "SHARED";
          case PresetSpeke20Audio::UNENCRYPTED:
            return "UNENCRYPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PresetSpeke20AudioMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws

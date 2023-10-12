/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioType.h>
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
      namespace AudioTypeMapper
      {

        static constexpr uint32_t CLEAN_EFFECTS_HASH = ConstExprHashingUtils::HashString("CLEAN_EFFECTS");
        static constexpr uint32_t HEARING_IMPAIRED_HASH = ConstExprHashingUtils::HashString("HEARING_IMPAIRED");
        static constexpr uint32_t UNDEFINED_HASH = ConstExprHashingUtils::HashString("UNDEFINED");
        static constexpr uint32_t VISUAL_IMPAIRED_COMMENTARY_HASH = ConstExprHashingUtils::HashString("VISUAL_IMPAIRED_COMMENTARY");


        AudioType GetAudioTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLEAN_EFFECTS_HASH)
          {
            return AudioType::CLEAN_EFFECTS;
          }
          else if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return AudioType::HEARING_IMPAIRED;
          }
          else if (hashCode == UNDEFINED_HASH)
          {
            return AudioType::UNDEFINED;
          }
          else if (hashCode == VISUAL_IMPAIRED_COMMENTARY_HASH)
          {
            return AudioType::VISUAL_IMPAIRED_COMMENTARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioType>(hashCode);
          }

          return AudioType::NOT_SET;
        }

        Aws::String GetNameForAudioType(AudioType enumValue)
        {
          switch(enumValue)
          {
          case AudioType::NOT_SET:
            return {};
          case AudioType::CLEAN_EFFECTS:
            return "CLEAN_EFFECTS";
          case AudioType::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case AudioType::UNDEFINED:
            return "UNDEFINED";
          case AudioType::VISUAL_IMPAIRED_COMMENTARY:
            return "VISUAL_IMPAIRED_COMMENTARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

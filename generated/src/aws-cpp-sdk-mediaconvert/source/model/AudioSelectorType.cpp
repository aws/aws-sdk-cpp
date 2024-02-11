/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioSelectorType.h>
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
      namespace AudioSelectorTypeMapper
      {

        static const int PID_HASH = HashingUtils::HashString("PID");
        static const int TRACK_HASH = HashingUtils::HashString("TRACK");
        static const int LANGUAGE_CODE_HASH = HashingUtils::HashString("LANGUAGE_CODE");
        static const int HLS_RENDITION_GROUP_HASH = HashingUtils::HashString("HLS_RENDITION_GROUP");


        AudioSelectorType GetAudioSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PID_HASH)
          {
            return AudioSelectorType::PID;
          }
          else if (hashCode == TRACK_HASH)
          {
            return AudioSelectorType::TRACK;
          }
          else if (hashCode == LANGUAGE_CODE_HASH)
          {
            return AudioSelectorType::LANGUAGE_CODE;
          }
          else if (hashCode == HLS_RENDITION_GROUP_HASH)
          {
            return AudioSelectorType::HLS_RENDITION_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioSelectorType>(hashCode);
          }

          return AudioSelectorType::NOT_SET;
        }

        Aws::String GetNameForAudioSelectorType(AudioSelectorType enumValue)
        {
          switch(enumValue)
          {
          case AudioSelectorType::NOT_SET:
            return {};
          case AudioSelectorType::PID:
            return "PID";
          case AudioSelectorType::TRACK:
            return "TRACK";
          case AudioSelectorType::LANGUAGE_CODE:
            return "LANGUAGE_CODE";
          case AudioSelectorType::HLS_RENDITION_GROUP:
            return "HLS_RENDITION_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioSelectorTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws

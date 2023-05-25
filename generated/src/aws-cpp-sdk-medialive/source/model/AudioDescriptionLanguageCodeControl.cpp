/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioDescriptionLanguageCodeControl.h>
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
      namespace AudioDescriptionLanguageCodeControlMapper
      {

        static const int FOLLOW_INPUT_HASH = HashingUtils::HashString("FOLLOW_INPUT");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        AudioDescriptionLanguageCodeControl GetAudioDescriptionLanguageCodeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return AudioDescriptionLanguageCodeControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return AudioDescriptionLanguageCodeControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioDescriptionLanguageCodeControl>(hashCode);
          }

          return AudioDescriptionLanguageCodeControl::NOT_SET;
        }

        Aws::String GetNameForAudioDescriptionLanguageCodeControl(AudioDescriptionLanguageCodeControl enumValue)
        {
          switch(enumValue)
          {
          case AudioDescriptionLanguageCodeControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case AudioDescriptionLanguageCodeControl::USE_CONFIGURED:
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

      } // namespace AudioDescriptionLanguageCodeControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

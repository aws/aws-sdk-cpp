/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceUhdAudioChannelPairProfile.h>
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
      namespace InputDeviceUhdAudioChannelPairProfileMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int VBR_AAC_HHE_16000_HASH = HashingUtils::HashString("VBR-AAC_HHE-16000");
        static const int VBR_AAC_HE_64000_HASH = HashingUtils::HashString("VBR-AAC_HE-64000");
        static const int VBR_AAC_LC_128000_HASH = HashingUtils::HashString("VBR-AAC_LC-128000");
        static const int CBR_AAC_HQ_192000_HASH = HashingUtils::HashString("CBR-AAC_HQ-192000");
        static const int CBR_AAC_HQ_256000_HASH = HashingUtils::HashString("CBR-AAC_HQ-256000");
        static const int CBR_AAC_HQ_384000_HASH = HashingUtils::HashString("CBR-AAC_HQ-384000");
        static const int CBR_AAC_HQ_512000_HASH = HashingUtils::HashString("CBR-AAC_HQ-512000");


        InputDeviceUhdAudioChannelPairProfile GetInputDeviceUhdAudioChannelPairProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::DISABLED;
          }
          else if (hashCode == VBR_AAC_HHE_16000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::VBR_AAC_HHE_16000;
          }
          else if (hashCode == VBR_AAC_HE_64000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::VBR_AAC_HE_64000;
          }
          else if (hashCode == VBR_AAC_LC_128000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::VBR_AAC_LC_128000;
          }
          else if (hashCode == CBR_AAC_HQ_192000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_192000;
          }
          else if (hashCode == CBR_AAC_HQ_256000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_256000;
          }
          else if (hashCode == CBR_AAC_HQ_384000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_384000;
          }
          else if (hashCode == CBR_AAC_HQ_512000_HASH)
          {
            return InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_512000;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceUhdAudioChannelPairProfile>(hashCode);
          }

          return InputDeviceUhdAudioChannelPairProfile::NOT_SET;
        }

        Aws::String GetNameForInputDeviceUhdAudioChannelPairProfile(InputDeviceUhdAudioChannelPairProfile enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceUhdAudioChannelPairProfile::NOT_SET:
            return {};
          case InputDeviceUhdAudioChannelPairProfile::DISABLED:
            return "DISABLED";
          case InputDeviceUhdAudioChannelPairProfile::VBR_AAC_HHE_16000:
            return "VBR-AAC_HHE-16000";
          case InputDeviceUhdAudioChannelPairProfile::VBR_AAC_HE_64000:
            return "VBR-AAC_HE-64000";
          case InputDeviceUhdAudioChannelPairProfile::VBR_AAC_LC_128000:
            return "VBR-AAC_LC-128000";
          case InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_192000:
            return "CBR-AAC_HQ-192000";
          case InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_256000:
            return "CBR-AAC_HQ-256000";
          case InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_384000:
            return "CBR-AAC_HQ-384000";
          case InputDeviceUhdAudioChannelPairProfile::CBR_AAC_HQ_512000:
            return "CBR-AAC_HQ-512000";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceUhdAudioChannelPairProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws

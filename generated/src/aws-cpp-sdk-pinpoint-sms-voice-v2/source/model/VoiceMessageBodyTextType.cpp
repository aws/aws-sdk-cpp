/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VoiceMessageBodyTextType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace VoiceMessageBodyTextTypeMapper
      {

        static constexpr uint32_t TEXT_HASH = ConstExprHashingUtils::HashString("TEXT");
        static constexpr uint32_t SSML_HASH = ConstExprHashingUtils::HashString("SSML");


        VoiceMessageBodyTextType GetVoiceMessageBodyTextTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return VoiceMessageBodyTextType::TEXT;
          }
          else if (hashCode == SSML_HASH)
          {
            return VoiceMessageBodyTextType::SSML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceMessageBodyTextType>(hashCode);
          }

          return VoiceMessageBodyTextType::NOT_SET;
        }

        Aws::String GetNameForVoiceMessageBodyTextType(VoiceMessageBodyTextType enumValue)
        {
          switch(enumValue)
          {
          case VoiceMessageBodyTextType::NOT_SET:
            return {};
          case VoiceMessageBodyTextType::TEXT:
            return "TEXT";
          case VoiceMessageBodyTextType::SSML:
            return "SSML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceMessageBodyTextTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VerificationChannel.h>
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
      namespace VerificationChannelMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int VOICE_HASH = HashingUtils::HashString("VOICE");


        VerificationChannel GetVerificationChannelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return VerificationChannel::TEXT;
          }
          else if (hashCode == VOICE_HASH)
          {
            return VerificationChannel::VOICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationChannel>(hashCode);
          }

          return VerificationChannel::NOT_SET;
        }

        Aws::String GetNameForVerificationChannel(VerificationChannel enumValue)
        {
          switch(enumValue)
          {
          case VerificationChannel::NOT_SET:
            return {};
          case VerificationChannel::TEXT:
            return "TEXT";
          case VerificationChannel::VOICE:
            return "VOICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationChannelMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

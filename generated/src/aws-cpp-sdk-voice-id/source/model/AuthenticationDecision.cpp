/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/AuthenticationDecision.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace AuthenticationDecisionMapper
      {

        static constexpr uint32_t ACCEPT_HASH = ConstExprHashingUtils::HashString("ACCEPT");
        static constexpr uint32_t REJECT_HASH = ConstExprHashingUtils::HashString("REJECT");
        static constexpr uint32_t NOT_ENOUGH_SPEECH_HASH = ConstExprHashingUtils::HashString("NOT_ENOUGH_SPEECH");
        static constexpr uint32_t SPEAKER_NOT_ENROLLED_HASH = ConstExprHashingUtils::HashString("SPEAKER_NOT_ENROLLED");
        static constexpr uint32_t SPEAKER_OPTED_OUT_HASH = ConstExprHashingUtils::HashString("SPEAKER_OPTED_OUT");
        static constexpr uint32_t SPEAKER_ID_NOT_PROVIDED_HASH = ConstExprHashingUtils::HashString("SPEAKER_ID_NOT_PROVIDED");
        static constexpr uint32_t SPEAKER_EXPIRED_HASH = ConstExprHashingUtils::HashString("SPEAKER_EXPIRED");


        AuthenticationDecision GetAuthenticationDecisionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return AuthenticationDecision::ACCEPT;
          }
          else if (hashCode == REJECT_HASH)
          {
            return AuthenticationDecision::REJECT;
          }
          else if (hashCode == NOT_ENOUGH_SPEECH_HASH)
          {
            return AuthenticationDecision::NOT_ENOUGH_SPEECH;
          }
          else if (hashCode == SPEAKER_NOT_ENROLLED_HASH)
          {
            return AuthenticationDecision::SPEAKER_NOT_ENROLLED;
          }
          else if (hashCode == SPEAKER_OPTED_OUT_HASH)
          {
            return AuthenticationDecision::SPEAKER_OPTED_OUT;
          }
          else if (hashCode == SPEAKER_ID_NOT_PROVIDED_HASH)
          {
            return AuthenticationDecision::SPEAKER_ID_NOT_PROVIDED;
          }
          else if (hashCode == SPEAKER_EXPIRED_HASH)
          {
            return AuthenticationDecision::SPEAKER_EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationDecision>(hashCode);
          }

          return AuthenticationDecision::NOT_SET;
        }

        Aws::String GetNameForAuthenticationDecision(AuthenticationDecision enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationDecision::NOT_SET:
            return {};
          case AuthenticationDecision::ACCEPT:
            return "ACCEPT";
          case AuthenticationDecision::REJECT:
            return "REJECT";
          case AuthenticationDecision::NOT_ENOUGH_SPEECH:
            return "NOT_ENOUGH_SPEECH";
          case AuthenticationDecision::SPEAKER_NOT_ENROLLED:
            return "SPEAKER_NOT_ENROLLED";
          case AuthenticationDecision::SPEAKER_OPTED_OUT:
            return "SPEAKER_OPTED_OUT";
          case AuthenticationDecision::SPEAKER_ID_NOT_PROVIDED:
            return "SPEAKER_ID_NOT_PROVIDED";
          case AuthenticationDecision::SPEAKER_EXPIRED:
            return "SPEAKER_EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationDecisionMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws

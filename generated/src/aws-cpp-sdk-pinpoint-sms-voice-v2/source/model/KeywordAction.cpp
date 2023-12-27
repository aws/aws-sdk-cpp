/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/KeywordAction.h>
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
      namespace KeywordActionMapper
      {

        static const int AUTOMATIC_RESPONSE_HASH = HashingUtils::HashString("AUTOMATIC_RESPONSE");
        static const int OPT_OUT_HASH = HashingUtils::HashString("OPT_OUT");
        static const int OPT_IN_HASH = HashingUtils::HashString("OPT_IN");


        KeywordAction GetKeywordActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_RESPONSE_HASH)
          {
            return KeywordAction::AUTOMATIC_RESPONSE;
          }
          else if (hashCode == OPT_OUT_HASH)
          {
            return KeywordAction::OPT_OUT;
          }
          else if (hashCode == OPT_IN_HASH)
          {
            return KeywordAction::OPT_IN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeywordAction>(hashCode);
          }

          return KeywordAction::NOT_SET;
        }

        Aws::String GetNameForKeywordAction(KeywordAction enumValue)
        {
          switch(enumValue)
          {
          case KeywordAction::NOT_SET:
            return {};
          case KeywordAction::AUTOMATIC_RESPONSE:
            return "AUTOMATIC_RESPONSE";
          case KeywordAction::OPT_OUT:
            return "OPT_OUT";
          case KeywordAction::OPT_IN:
            return "OPT_IN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeywordActionMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

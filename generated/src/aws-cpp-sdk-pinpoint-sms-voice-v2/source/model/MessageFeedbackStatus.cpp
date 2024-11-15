/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/MessageFeedbackStatus.h>
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
      namespace MessageFeedbackStatusMapper
      {

        static const int RECEIVED_HASH = HashingUtils::HashString("RECEIVED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MessageFeedbackStatus GetMessageFeedbackStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECEIVED_HASH)
          {
            return MessageFeedbackStatus::RECEIVED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MessageFeedbackStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageFeedbackStatus>(hashCode);
          }

          return MessageFeedbackStatus::NOT_SET;
        }

        Aws::String GetNameForMessageFeedbackStatus(MessageFeedbackStatus enumValue)
        {
          switch(enumValue)
          {
          case MessageFeedbackStatus::NOT_SET:
            return {};
          case MessageFeedbackStatus::RECEIVED:
            return "RECEIVED";
          case MessageFeedbackStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageFeedbackStatusMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws

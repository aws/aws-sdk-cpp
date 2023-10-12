/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
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
      namespace MessageTypeMapper
      {

        static constexpr uint32_t TRANSACTIONAL_HASH = ConstExprHashingUtils::HashString("TRANSACTIONAL");
        static constexpr uint32_t PROMOTIONAL_HASH = ConstExprHashingUtils::HashString("PROMOTIONAL");


        MessageType GetMessageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSACTIONAL_HASH)
          {
            return MessageType::TRANSACTIONAL;
          }
          else if (hashCode == PROMOTIONAL_HASH)
          {
            return MessageType::PROMOTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageType>(hashCode);
          }

          return MessageType::NOT_SET;
        }

        Aws::String GetNameForMessageType(MessageType enumValue)
        {
          switch(enumValue)
          {
          case MessageType::NOT_SET:
            return {};
          case MessageType::TRANSACTIONAL:
            return "TRANSACTIONAL";
          case MessageType::PROMOTIONAL:
            return "PROMOTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
